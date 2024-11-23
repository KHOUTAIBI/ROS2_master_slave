
# Objective:
# Create a ROS2 node that subscribes to `STMState` messages from an STM module, processes acceleration and encoder data from the motor and IMU 
# to compute position and orientation, broadcasts TF transforms for the STM frame, and publishes a Path message for visualization in RViz.


# Step 1: Import requiered libraries
import rclpy                                                    # Main ROS 2 library for Python
from rclpy.node import Node                                     # Node class to create ROS 2 nodes
from stm_interfaces.msg import STMState                         # Custom message type for STM data
from tf2_ros import TransformBroadcaster                        # ROS 2 TF broadcaster
from tf_transformations import quaternion_from_euler            # Function to convert Euler angles to quaternions
from geometry_msgs.msg import TransformStamped                  # Message types for TF transform and path poses
import math                                                     # Math library for angle conversions                             
import numpy as np                                              # NumPy library for numerical operations

# Step 2: Create the STMVisualizationNode class
class STMVisualizationNode(Node):
    def __init__(self):
        """
        Initialize the STMVisualizationNode with subscriber, transform broadcaster, and path publisher.
        """
        super().__init__('stm_visualization_node')
        
        # Step 2.1 TODO: Declare and retrieve parameters
        # 'group_id': Unique identifier for the STM node (default: 1)
        self.declare_parameter('stm_visualisation_group_id',1)
        self.group_id = self.get_parameter('stm_visualisation_group_id').value

        # Step 2.2 TODO: Define topic name based on group ID for subscribing to STM data
        input_topic = f"/group_{self.group_id}/stm_state"  # Input topic for STM data

        # Step 2.3: Initialize state variables
        self.linear_acceleration = 0
        self.position = [0.0, 0.0, 0.0]                         # x, y, z position
        self.velocity = [0.0, 0.0, 0.0]                         # x, y, z velocity
        self.rotation = 0.0                                     # Rotation angle in radians (yaw angle -> arround the z-axis of the STM frame)
        self.first_reading = True                               # Flag for the first reading to set offset acceleration (when the node is created it gets the first acceleration value as the offset)
        self.offset_acceleration = np.array([0.0, 0.0, 0.0])    # Acceleration offset
        self.last_time = self.get_clock().now()                 # Timestamp for integration

        # Step 2.4 TODO: Create a subscriber for the STM data topic
        self.data_subscriber = self.create_subscription(
            STMState,
            input_topic,
            self.stm_state_callback,
            10,
        )  # Subscriber for STM data

        self.data_subscriber

        # Step 2.5: Initialize the TF broadcaster
        self.tf_broadcaster = TransformBroadcaster(self)

        # Step 2.6: Log setup details
        self.get_logger().info(f"Subscribed to {input_topic} and broadcasting TF transforms and path.")

    # Step 3: Define the callback function for STMState messages
    def stm_state_callback(self, msg : STMState):
        """
        Callback for receiving STM data, updating position and orientation, and broadcasting TF transform.
        
        :param msg: STMState message containing IMU acceleration and encoder data.
        """

        # Step 3.1: Read acceleration and encoder data from the STMState message
        self.linear_acceleration = np.array([
            msg.accel_x,
            msg.accel_y,
            msg.accel_z
        ]) # Acceleration data from the IMU

        # Step 3.2 TODO: Update the rotation based on the received motors turns
        # Change the units from encoder ticks to radians, remember that 1 revolution = 2*pi radians, 
        # the reduction ratio is 1:9.7, and the encoder has 24 ticks per revolution
        self.rotation = (2*np.pi/24) * msg.motor_encoder 


        # Step 3.2 TODO: If it is the first reading, set the offset acceleration       
        if self.first_reading == 1:                     # Check if it is the first reading
            self.first_reading = 0                      # Set the first reading flag to False
            self.offset_acceleration = np.array([
                msg.accel_x,
                msg.accel_y,
                msg.accel_z
            ])    # Set the offset acceleration

        # Step 3.3 Integrate acceleration to get velocity and position
        # Get the elapsed time since the last reading
        current_time = self.get_clock().now()                       # Get the current time
        dt = (current_time - self.last_time).nanoseconds * 1e-9     # Convert to seconds
        self.last_time = current_time                               # Update the last time  

        # Step 3.4 TODO: Remove the offset acceleration from the received acceleration
        corrected_accel = self.linear_acceleration - self.offset_acceleration   # Corrected acceleration

        # Step 3.5 Integrate the corrected acceleration to get velocity and position
        # Avoid Drift: Integrate only when the acceleration is greater than a given threshold
        threshold = 0.5
        if np.linalg.norm(corrected_accel) > threshold:
            # Integrate the acceleration to get the position
            self.velocity[0] = self.velocity[0] + corrected_accel[0] * dt  # Update velocity in x direction
            self.velocity[1] = self.velocity[1] + corrected_accel[1] * dt  # Update velocity in y direction
            self.velocity[2] = self.velocity[2] + corrected_accel[2] * dt  # Update velocity in z direction
            
            # TODO: Integrate the velocity to get the position
            self.position[0] = self.position[0] + self.velocity[0] * dt
            self.position[1] = self.position[1] + self.velocity[1] * dt
            self.position[2] = self.position[2] + self.velocity[2] * dt

        # Step 3.6 TODO: Broadcast the TF transform
        self.broadcast_transform()

    # Step 4: Define the function to broadcast TF transforms
    def broadcast_transform(self):
        """
        Creates and broadcasts a TransformStamped message using the current position and rotation.
        """
        # Step 4.1: Implement the broadcasting of the TF transform
        transform = TransformStamped()
        
        # Step 4.2 TODO: Set the frame details for the transform
        transform.header.stamp = self.get_clock().now().to_msg()            # Set the same timestamp as the message received from the STM
        transform.header.frame_id = 'world'                                 # Parent frame (fixed frame)
        transform.child_frame_id = f'/group_{self.group_id}/stm_station'    # Child frame for STM serial node

        # Step 4.3 TODO: Set the translation (position) values
        transform.transform.translation.x = self.position[0]         # x position
        transform.transform.translation.x = self.position[1]         # y position
        transform.transform.translation.x = self.position[2]         # z position

        # Step 4.4 Set the rotation (orientation) as a quaternion (z-axis rotation)
        # Transform the rotation angle to a quaternion
        quaternion = quaternion_from_euler(0.0, 0.0, self.rotation)

        # Step 4.5 TODO: Set the rotation values in the transform
        transform.transform.rotation.x = quaternion[0]        # x quaternion
        transform.transform.rotation.y = quaternion[1]                              # y quaternion
        transform.transform.rotation.z = quaternion[2]                             # z quaternion
        transform.transform.rotation.w = quaternion[3]                             # w quaternion

        # Publish the transform
        self.tf_broadcaster.sendTransform(transform)                 # Broadcast the transform

        self.get_logger().info(f"Broadcasted TF for position {self.position} and rotation {self.rotation} radians.")

# Step 5: Define the main function
def main(args=None):
    """
    Main function to initialize and run the STMVisualizationNode.
    """
    # Step 5.1: Initialize the rclpy library
    rclpy.init(args=args)
    
    # Step 5.2: Create an instance of the STMVisualizationNode
    stm_visualization_node = STMVisualizationNode()
    
    # Step 5.3: Spin the node to keep it running and processing callbacks
    try:
        rclpy.spin(stm_visualization_node)
    except KeyboardInterrupt:
        pass
    finally:
        # Step 5.4: Clean up and shut down the node
        stm_visualization_node.destroy_node()
        rclpy.shutdown()

# Entry point for running the script directly
if __name__ == '__main__':
    main()
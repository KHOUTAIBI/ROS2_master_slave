# Objective:
# Create a ROS2 node that subscribes to `STMState` messages from an STM module, processes motor velocity and gyro data, 
# and publishes `Twist` messages to control a simulated TurtleBot3 in Gazebo.

# Step 1: Import required libraries
import rclpy                                          # Main ROS 2 library for Python
from rclpy.node import Node                           # Node class to create ROS 2 nodes
from stm_interfaces.msg import STMState               # Custom message type for STM data
# Import the ROS 2 message type for TurtleBot control commands (linear and angular speeds) /cmd_vel
from geometry_msgs.msg import Twist , Vector3

# Step 2: Create the STMTurtleBotControlNode class
class STMTurtleBotControlNode(Node):
    def __init__(self):
        """
        Initialize the STMTurtleBotControlNode with subscriber and publisher.
        """
        super().__init__('stm_turtlebot_control_node')  # Node name

        # Step 2.1: Declare and retrieve the group ID parameter for STMState topic
        # 'group_id': Unique identifier for the STM node (default: 1)
        self.declare_parameter('group_id', 1)                                # Declare group_id parameter
        self.group_id = self.get_parameter('group_id').get_parameter_value().integer_value  # Get group_id value

        # Step 2.2 TODO: Define the topic name for subscribing to STMState messages
        stm_state_topic = f'group_{self.group_id}/stm_state'

        # Step 2.3 TODO: Create a subscriber for the STMState topic
        self.stm_state_subscriber = self.create_subscription(
            STMState,
            stm_state_topic,
            self.stm_state_callback,
            10
        )

        self.stm_state_subscriber

        # Step 2.4: Create a publisher for controlling the TurtleBot3 in Gazebo /cmd_vel topic of type ...
        self.twist_publisher = self.create_publisher(
            Twist,
            "/cmd_vel",
            10
        )

        # Step 2.5: Log setup details for confirmation
        self.get_logger().info(f"Subscribed to {stm_state_topic} and publishing to /cmd_vel")

    # Step 3: Define the callback function for STMState messages
    def stm_state_callback(self, msg : STMState):
        """
        Callback for receiving STMState data, processing it, and publishing as Twist messages to control the TurtleBot3.

        :param msg: STMState message containing motor velocity and gyro data.
        """
        # Step 3.1 TODO: Create the speed control message 
        # Transform the received rotational speed of the motors to linear speed in the x-axis 
        # taking into account the number of ticks per revolution of the motor, the reduction ratio, 
        # and the wheel radius.
        twist = Twist()
        vector_rotation = Vector3()
        vector_gyro = Vector3()
        
        # Updating vector rotation
        vector_rotation.x = 1/9*(msg.motor_encoder/12)
        vector_rotation.y = 0.0
        vector_rotation.z = 0.0 
        
        # updating vetor of gyros
        vector_gyro.x = 0.0
        vector_gyro.y = 0.0
        vector_gyro.z = msg.gyro_z

        # Step 3.2 TODO: Extract and map motor_velocity to linear speed in the x-axis
        twist.linear = vector_rotation

        # Step 3.3 TODO: Extract and map gyro_z to angular speed
        twist.angular = vector_gyro

        # Step 3.4: Publish the Twist message to control the TurtleBot3
        self.twist_publisher.publish(twist)

        # Step 3.5 TODO: Log the published speeds for debugging and monitoring
        self.get_logger().info(f"Published data {twist}")

# Step 4: Define the main function
def main(args=None):
    """
    Main function to initialize and run the STMTurtleBotControlNode.
    """
    # Step 4.1: Initialize the rclpy library
    rclpy.init(args=args)

    # Step 4.2: Create an instance of the STMTurtleBotControlNode
    stm_turtlebot_control_node = STMTurtleBotControlNode()

    # Step 4.3: Spin the node to keep it running and processing callbacks
    try:
        rclpy.spin(stm_turtlebot_control_node)
    except KeyboardInterrupt:
        pass
    finally:
        # Step 4.4: Clean up and shut down the node
        stm_turtlebot_control_node.destroy_node()
        rclpy.shutdown()

# Entry point for running the script directly
if __name__ == '__main__':
    main()

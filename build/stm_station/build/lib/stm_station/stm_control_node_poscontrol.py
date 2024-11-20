# Description:
# The goal is to create a ROS2 node named 'STMControlNode' that controls the STM motor
# using Stop and Position Control modes.
# The node will use parameters, services, publishers, and subscribers to interact with the STM.

# 1. Import necessary libraries and custom message/service types
import rclpy
from rclpy.node import Node

# TODO: Import the custom message types STMState and STMControl
# from stm_interfaces.msg import STMState, STMControl
from stm_interfaces.msg import STMState, STMControl
from std_msgs.msg import Float32MultiArray

# TODO: Import the custom service type STMSetControlType
# from stm_interfaces.srv import STMSetControlType
from stm_interfaces.srv import STMSetControlType

# 2. Define the STMControlNode class
class STMControlNode(Node):
    def __init__(self):
        """
        Initialize the STMControlNode with parameters, publishers, subscribers, and services.
        """
        # Initialize the ROS 2 node with a unique name 'stm_control_node'
        super().__init__('stm_control_node')
        
        # 3. Declare parameters to configure the node with default values
        # 'input_group_id': ID for the input STM data topic (default: 1)
        # 'output_group_id': ID for the output control command topic (default: 2)
        # TODO: Declare parameters 'input_group_id' and 'output_group_id'
        self.declare_parameter('input_group_id', 1)
        self.declare_parameter('output_group_id', 2)
        self.loop_frequency = 50  # Maintain value

        # Retrieve parameter values from the node's configuration
        # TODO: Retrieve parameters and assign them to instance variables
        self.input_group_id = self.get_parameter('input_group_id').get_parameter_value()
        self.output_group_id = self.get_parameter('output_group_id').get_parameter_value()

        # Initialize control type to 'Stop' (0), allowing dynamic changes via a service
        # Control types: 0 = Stop, 1 = Position Control
        self.control_type = 0

        # 4. Define topic names for input and output based on group IDs
        # TODO: Define topic names using the group IDs
        input_data_topic = 'groupe_1/stm_state'
        stm_control_topic = 'groupe_2/stm_control'

        # 5. Create subscribers and publishers for STM data and control commands
        # TODO: Create subscribers and publishers
        self.input_stm_state_subscriber = self.create_subscription(Float32MultiArray,'/group_1/stm_state',self.input_stm_state_callback,10)
        self.control_stm_publisher = self.create_publisher(Float32MultiArray,'/group_2/stm_state',10)

        # 6. Create a timer to control the STM at the desired frequency
        # TODO: Create a timer that calls 'timer_callback' at the specified frequency
        self.timer = self.create_timer(1/self.loop_frequency,self.timer_callback)

        # 7. Initialize variables for storing input position
        self.input_position = 0.0

        # 8. Create a service to allow dynamic control type changes
        # TODO: Create a service named 'set_control_type' with the service type 'STMSetControlType'
        self.control_type_service = self.create_service(STMSetControlType,'stm_control_node',self.set_control_type_callback)

        # Log setup details for debugging and confirmation
        self.get_logger().info(f"Subscribed to {input_data_topic}")
        self.get_logger().info(f"Publishing to {stm_control_topic}")

    # 9. Implement callback functions
    def input_stm_state_callback(self, msg):
        """
        Callback for receiving input STM data.
        Updates input position.

        :param msg: STMState message containing motor position data.
        """
        # TODO: Update input_position with value from msg
        self.input_position = msg

    def set_control_type_callback(self, request, response):
        """
        Service callback to set the control type.
        Updates the control_type based on the request and confirms success in the response.

        :param request: STMSetControlType.Request, containing the desired control type.
        :param response: STMSetControlType.Response, confirming the request was handled.
        :return: STMSetControlType.Response with success status.
        """
        # TODO: Update control_type based on the service request
        self.control_type = request.control_type

        # Log the updated control type
        self.get_logger().info(f"Control type set to: {self.control_type}")

        response.success = True
        return response

    # 10. Implement control logic in timer callback
    def timer_callback(self):
        """
        Timer Callback to control the STM based on the current control type.
        Generates and publishes a control command handling two control modes: Stop and Position Control.
        """
        # Initialize a STMControl message to send
        # TODO: Initialize a STMControl message
        control_msg = self.control_type

        # Control logic based on the selected control type
        if self.control_type == 0:  # Stop Mode
            # TODO: Implement stop mode control logic
            STMControl.kp = 0
        elif self.control_type == 1:  # Position Control Mode
            # TODO: Implement position control logic
            STMControl.kp = 1
        else:
            # Handle unknown control types
            self.get_logger().warning(f"Unknown control type: {self.control_type}")
            # TODO: Default to stop mode
            STMControl.kp = 0

        # Publish the constructed control command
        # TODO: Publish the control message
        self.control_stm_publisher.publish(control_msg)

        # Log the published command for debugging and monitoring
        self.get_logger().info(f"Published control command: {control_msg}")

# 11. Write the main function
def main(args=None):
    """
    Main function to initialize and run the STMControlNode.
    """
    # Initialize the rclpy library for ROS 2
    rclpy.init(args=args)
    
    # Instantiate the STMControlNode
    stm_control_node = STMControlNode()
    
    # Keep the node running, processing callbacks and publishing commands
    try:
        rclpy.spin(stm_control_node)
    except KeyboardInterrupt:
        pass
    finally:
        # Clean up and shut down the node
        stm_control_node.destroy_node()
        rclpy.shutdown()

# Entry point for running the script directly
if __name__ == '__main__':
    main()

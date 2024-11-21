# Objective:
# The goal of this exercise is to create a ROS2 node named 'STMControlNode' that controls the slave STM motor using Stop, Position Control modes and
# controls the slave STM motor using the PWM and closing the control loop inside the node.
# - Parameters are used to configure the group IDs for the master and slave nodes, services to change the control type dynamically, and a timer to control the STM at a specific frequency.
# - Services are used to change the control type and gain dynamically. 
#      -The control types are Stop (0), Position Control (1), Close loop PWM Control (2).
# - Publishers are used to send control commands to the slave STM node.
# - Subscribers are used to receive the master and slave STM state data. 


import rclpy
from rclpy.node import Node

# 1. Import necessary libraries and custom message/service types
# TODO: Import the custom message types STMState and STMControl
# TODO: Import the custom service type STMSetControlType
from stm_interfaces.msg import STMControl, STMState
from stm_interfaces.srv import STMSetControlType

# 2. Define the STMControlNode class
class STMControlNode(Node):
    def __init__(self):
        """
        Initialize the STMControlNode with parameters, publishers, subscribers, and services.
        """
        # Initialize the ROS 2 node with a unique name 'stm_control_node'
        super().__init__('stm_control_node')
        
        # 3. TODO:  Declare parameters 'master_group_id' and 'slave_group_id as set default values
        # 'master_group_id': ID for the master STM data topic, set the default value to 1
        # 'slave_group_id': ID for the slave control command topic, set the default value to 2
        self.declare_parameter('master_group_id', 1) 
        self.declare_parameter('slave_group_id', 2) 
        self.loop_frequency = 50  # Maintain value

        # 4. TODO: Retrieve parameter values from the node's configuration and assign them to instance 
        # variables
        self.master_group_id = self.get_parameter('master_group_id').get_parameter_value().integer_value
        self.slave_group_id = self.get_parameter('slave_group_id').get_parameter_value().integer_value

        # 5. TODO: Define topic names for master and slave based on group IDs obtained from parameters
        self.master_state_topic = f"/group_{self.master_group_id}/stm_state"  # Master stm_state topic (/group_id/stm_state)
        self.slave_state_topic = f"/group_{self.slave_group_id}/stm_state"   # Slave stm_state topic (/group_id/stm_state)
        self.slave_control_topic = f"/group_{self.slave_group_id}/stm_control" # Slave stm_control topic (/group_id/stm_control)

        # 6. TODO: Create subscribers for STM state (master and slave)
        self.master_stm_state_subscriber = self.create_subscription(
            STMState,
            self.master_state_topic,
            self.master_stm_state_callback,
            10
        )  # Subscriber for the master node state
        self.slave_stm_state_subscriber = self.master_stm_state_subscriber = self.create_subscription(
            STMState,
            self.slave_state_topic,
            self.slave_stm_state_callback,
            10
        )   # Subscriber for the slave node state

        self.master_stm_state_subscriber
        self.slave_stm_state_subscriber

        self.get_logger().info(f"Subscribed to {self.master_state_topic}")
        self.get_logger().info(f"Subscribed to {self.slave_state_topic}")

        # 7. TODO: Create publishers for STM control (slave)
        self.slave_stm_control_publisher = self.create_publisher(
            STMControl,
            self.slave_control_topic,
            10
        )  # Publisher for the slave node control
        
        self.get_logger().info(f"Publishing to {self.slave_control_topic}")

        # 8. Define the service name ('set_control_type')
        self.control_type_service_name = 'set_control_type'

        # 9. TODO: Create a service of type 'STMSetControlType' to allow dynamic change of the control settings of the node:
        # Request:  Control types ->  0 = Stop  |  1 = Position Control
        # Request:  Control gains -> kp = Proportional gain, kd = Derivative gain
        # Response: Success status
        self.control_type_service = self.create_service(
            STMSetControlType,
            'stm_setcontrol_type',
            self.service_control_type_callback,
        )

        # 10. TODO: Create a timer for the publisher and to control the STM. 
        # !!! set the loop at 50Hz !!! (set the period to: 1 / self.loop_frequency) !!
        self.timer_control_loop = self.create_timer(1/self.loop_frequency, self.timer_callback)

        # 11. Initialize variables for storing master position
        self.master_position = 0.0
        self.slave_position = 0.0

        # 12. Initialize control type to 'Stop' (0), allowing dynamic changes via a service
        # Control types: 0 = Stop, 1 = Position Control
        self.control_type = 0

        # 13. Initialize control gain kp to default value
        self.kp = 1.0


    # 14. TODO: Implement callback functions
    def master_stm_state_callback(self, msg):
        """
        Callback activate when it is received data from the master STM state
        Updates master position.

        :param msg: STMState message containing motor position data.
        """
        # TODO: Update master_position with value from msg
        self.master_position = msg.motor_encoder

    # 15. TODO: Implement callback functions
    def slave_stm_state_callback(self, msg):
        """
        Callback activate when it is received data from the slave STM state
        Updates slave position.

        :param msg: STMState message containing motor position data.
        """
        # TODO: Update master_position with value from msg
        self.slave_position = msg.motor_encoder

    # 16. TODO: Implement the service callback
    def service_control_type_callback(self, request, response):
        """
        Service callback to set the control type.
        Updates the control_type based on the request and confirms success in the response.

        :param request: STMSetControlType.Request, containing the desired control type.
        :param response: STMSetControlType.Response, confirming the request was handled.
        :return: STMSetControlType.Response with success status.
        """
        # TODO: Update control_type based on the service request values
        # Set the control type to the requested value:
        # 0 = Stop, 1 = Position Control
        self.control_type = request.control_type
        # Update control gain based on the received requested message
        self.kp = request.kp

        # Log the updated control type
        self.get_logger().info(f"Control type set to: {self.control_type}")
        self.get_logger().info(f"Control gain set to: kp={self.kp}")

        # Confirm the service request was handled successfully
        response.success = True
        return response

    # 17. TODO: Implement control logic in timer_control_loop callback
    def timer_callback(self):
        """
        timer_control_loop Callback to control the STM based on the current control type.
        Generates and publishes a control command handling two control modes: Stop and Position Control.
        """
        # TODO: Initialize a STMControl message that will be published to the slave node
        control_msg = STMControl()
        if self.control_type >=0 and self.control_type <=2:
            control_msg.control_type = self.control_type 
            control_msg.kp = self.kp
            control_msg.setpoint = self.master_position

            # Close loop for position control using PWM
            # Calculate the error between the master and slave positions
            error = self.slave_position - self.master_position
            # Calculate the control command using the proportional gain constant
            control_command = self.kp*error
            # Limit the control command to the valid range
            pwm_limit = 250.0  # Maximum PWM value !!
            control_command = max(-pwm_limit, min(pwm_limit, control_command))
            
            # TODO: Update the PWM control command in the STMControl message
            control_msg.pwm = control_command

        else:
            # Handle unknown control types
            self.get_logger().warning(f"Unknown control type: {self.control_type}")
            # TODO: Default to stop mode
            control_msg.control_type = 0
            control_msg.kp = 0.0
            control_msg.position_setpoint = 0.0
        
        # TODO: Publish the constructed control command
        self.slave_stm_control_publisher.publish(
            control_msg
        )

        # Log the published command for debugging and monitoring
        self.get_logger().info(f"Published control command: {control_msg}")

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

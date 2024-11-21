# Objective:
# The goal is to create a ROS 2 node that reads data from a serial device and publishes it using standard messages like Float32MultiArray.
# The serial reading part is provided, and students will focus on setting up the publisher and formatting the data accordingly.

# Import necessary libraries
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray  # Standard message type for arrays
import serial
import numpy as np


class SerialPublisherNode(Node):
    def __init__(self):
        """
        Initialize the SerialPublisherNode with a publisher and serial interface.
        """
        super().__init__('stm_serial_node', namespace="/groupe_1")

        # Get Serial Configuration Values 
        self.port = '/dev/ttyACM0'
        self.baudrate = 115_200
        self.loop_frequency = 1_000  # Hz

        # Create a publisher for Float32MultiArray messages
        # TODO: Create a publisher for 'serial_data' topic
        self.data_publisher =self.create_publisher(Float32MultiArray,"topic_motor",10)

        # Create a timer to read data periodically
        self.timer = self.create_timer(1 / self.loop_frequency, self.timer_callback)

        # Set up the serial port (provided)
        self.serial_port = serial.Serial(self.port, self.baudrate, timeout=0.01)

        self.get_logger().info(f'Node initialized with serial port {self.port} at {self.baudrate} baud.')

    def timer_callback(self):
        """
        Periodically reads data from the serial port and publishes it as a Float32MultiArray.
        """
        if self.serial_port.in_waiting > 0:
            try:
                # Read and decode the data from the serial port
                serial_data = self.serial_port.readline().decode('utf-8').strip()
                # Check if data is properly formatted with braces
                if serial_data.startswith('{') and serial_data.endswith('}'):
                    serial_data = serial_data[1:-1]  # Remove the braces
                else:
                    self.get_logger().warn('Data does not start and end with braces')
                    return
                
                float_values = serial_data.split(',')

                # Ensure the correct number of data parts is present (expected 8 fields)
                # 1. motor_position
                # 2. motor_velocity
                # 3. imu_acceleration_x
                # 4. imu_acceleration_y
                # 5. imu_acceleration_z
                # 6. imu_gyro_xls
                
                # 7. imu_gyro_y
                # 8. imu_gyro_z
                if len(float_values) == 8:
                    # Create a Float32MultiArray message
                    # TODO: Create and populate the Float32MultiArray message
                    array_msg = Float32MultiArray()                
                    array_msg.data = float(serial_data)

                    # Publish the message
                    # TODO: Publish the array_msgclear  
                    self.data_publisher.publish(array_msg)
                self.get_logger().info(f'Published data: {float_values}')
            except ValueError as e:
                self.get_logger().warn(f'Error parsing serial data: {e}')

    def destroy_node(self):
        """
        Clean up the node by closing the serial port.
        """
        self.serial_port.close()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = SerialPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

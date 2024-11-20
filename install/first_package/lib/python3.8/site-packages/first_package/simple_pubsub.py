# Import the ROS2 Python client library
import rclpy    
from rclpy.node import Node
from std_msgs.msg import String  # Import the String message type
import std_msgs.msg as message
import sensor_msgs.msg as sensor
import first_interfaces.msg as custom_message


class SubPubMinimal(Node):
    def __init__(self):
        # Initialize the node with the custom name 'node_NICKNAME'
        super().__init__('node_3')  # <-- Replace 'NICKNAME' with your actual group number
        
        self.subscription = self.create_subscription(
            custom_message.Custom,             # Message type used by the publisher
            'topic_7',  # <-- Replace 'NICKNAME' with the specific topic name for your group
            self.listener_callback,  
            10)  # Queue size for incoming messages
        
        self.subscription  # Prevent unused variable warning

        # We will publish Here
        self.publisher_ = self.create_publisher(custom_message.Custom, 'topic_8', 10)
        
        # Step 4: Initialize a counter to keep track of message numbers
        self.i = 0  # Starts counting from 0

    # Step 3: Define the callback function that will be called when a message is received
    def listener_callback(self, msg):
        # Log the received message to the console
        self.get_logger().info(f'Received: "{msg.range} with i = {self.i} from {self.subscription.topic}"')
        self.get_logger().info(f'Received: "{msg.range_list} with i = {self.i} from {self.publisher_.topic}"')
        self.get_logger().info(f'Received: "{msg.name} with i = {self.i}"')
        # Publish the message
        self.publisher_.publish(msg)
        
        # Log the published message to the console
        self.get_logger().info(f'Publishing: "{msg.range} with i = {self.i} from {self.publisher_.topic}"')
        self.get_logger().info(f'Publishing: "{msg.range_list} with i = {self.i} from {self.publisher_.topic}"')
        self.get_logger().info(f'Publishing: "{msg.name} with i = {self.i}"')
        # Increment the message counter

        self.i += 1

# Step 4: Define the main function to run the node
def main(args=None):
    # Initialize the ROS2 Python client library
    rclpy.init(args=args)
    
    # Create an instance of the MinimalSubscriber node
    minimal_subpub = SubPubMinimal()

    try:
        # Run the node until interrupted
        rclpy.spin(minimal_subpub)
    except KeyboardInterrupt:
        # Gracefully handle shutdown when Ctrl+C is pressed
        pass
    finally:
        # Destroy the node and shutdown the ROS2 Python client library
        minimal_subpub.destroy_node()
        rclpy.shutdown()

# Entry point of the script
if __name__ == '__main__':
    main()

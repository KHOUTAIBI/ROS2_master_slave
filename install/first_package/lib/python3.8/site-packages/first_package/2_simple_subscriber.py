# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Import the String message type

# If the publisher uses Int data type, use:
# from std_msgs.msg import Int

# Step 1: Define a class for the subscriber node
# Replace 'Node_ID' with a unique name for your group’s node (e.g., 'node_1' if you’re Group 1)
class MinimalSubscriber(Node):
    def __init__(self):
        # Initialize the node with the custom name 'node_NICKNAME'
        super().__init__('group_7')  # <-- Replace 'NICKNAME' with your actual group number
        
        # Step 2: Create a subscription to your group's topic
        # Replace 'topic_ID' with the topic name you want to subscribe to (e.g., 'topic_1' for Group 1)
        # The callback function 'listener_callback' will be called whenever a message is received
        self.subscription = self.create_subscription(
            String,             # Message type used by the publisher
            'topic_7',  # <-- Replace 'NICKNAME' with the specific topic name for your group
            self.listener_callback,  
            10)  # Queue size for incoming messages
        self.subscription  # Prevent unused variable warning

    # Step 3: Define the callback function that will be called when a message is received
    def listener_callback(self, msg):
        # Log the received message to the console
        self.get_logger().info(f'Received: "{msg.data}"')

# Step 4: Define the main function to run the node
def main(args=None):
    # Initialize the ROS2 Python client library
    rclpy.init(args=args)
    
    # Create an instance of the MinimalSubscriber node
    minimal_subscriber = MinimalSubscriber()

    try:
        # Run the node until interrupted
        rclpy.spin(minimal_subscriber)
    except KeyboardInterrupt:
        # Gracefully handle shutdown when Ctrl+C is pressed
        pass
    finally:
        # Destroy the node and shutdown the ROS2 Python client library
        minimal_subscriber.destroy_node()
        rclpy.shutdown()

# Entry point of the script
if __name__ == '__main__':
    main()

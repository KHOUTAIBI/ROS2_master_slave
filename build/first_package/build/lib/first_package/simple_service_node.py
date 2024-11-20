import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class AddTwoIntsServer(Node):
    def __init__(self):
        super().__init__('add_two_ints_server')
        
        # Create the service
        self.service = self.create_service(AddTwoInts, 'add_two_ints', self.handle_request)
        self.extra_term = 0

    def handle_request(self, request, response):
        # Add the parameter value to the sum
        response.sum = request.a + request.b + self.extra_term
        self.get_logger().info(f'Received: {request.a} + {request.b} = {response.sum}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsServer()
    rclpy.spin(node)
    rclpy.shutdown()

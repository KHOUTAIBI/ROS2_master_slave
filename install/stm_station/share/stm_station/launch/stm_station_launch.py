from launch import LaunchDescription  # Import LaunchDescription to define what will be launched
from launch_ros.actions import Node  # Import Node to define individual ROS nodes to launch
 
# TODO: Use a variable to define the namespace
stm_name_space = 'group_9'
 
def generate_launch_description():
    """
    Function to generate the launch description for the ROS 2 launch system.
    It defines the nodes and their configurations to be launched.
    """
 
    # TODO: Parameters are defined here  
    # parameters = {
    #     'parameter1': 2,    
    #     'parameter2': 1,     
    # }
 
    # Return a LaunchDescription containing the nodes to launch
    return LaunchDescription([
        # Run the stm serial node
        Node(
            package='stm_station',                  # ROS package containing the node's executable
            executable='stm_serial_node',           # Name of the executable to run
            name='stm_serial_node',                 # Name to assign to the node (used in logs and debugging)
            namespace= stm_name_space,
            # TODO: namespace= stm_name_space,      # Namespace to group the node under
            # TODO: parameters=[parameters],        # Inline parameters passed to the node
            output='screen'                             # Specify where to send the node's output (console or log file)
        )
    ])
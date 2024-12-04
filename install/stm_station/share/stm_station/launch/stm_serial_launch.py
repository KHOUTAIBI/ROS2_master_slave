from launch import LaunchDescription  # Import LaunchDescription to define what will be launched
from launch_ros.actions import Node  # Import Node to define individual ROS nodes to launch
 
# TODO: Use a variable to define the namespace
stm_name_space_master = 'group_1'
stm_name_space_slave = 'group_2'
parameters = {"control_type" : 1, 
                  "kp" : 1.5}
 
def generate_launch_description():
    """
    Function to generate the launch description for the ROS 2 launch system.
    It defines the nodes and their configurations to be launched.
    """

    parameters = {
        'master_group_id' : 1,
        'slave_group_id' : 2
    }

    stm_name_space_master = 'group_1'
    stm_name_space_slave = 'group_2'
    stm_name_space_control = 'group_1'
    
    # Return a LaunchDescription containing the nodes to launch
    return LaunchDescription([
        # Run the stm serial node
        Node(
            package='stm_station',                  # ROS package containing the node's executable
            executable='stm_serial_node_pub_sub',           # Name of the executable to run
            name='stm_master_node',                 # Name to assign to the node (used in logs and debugging)
            namespace= stm_name_space_master,
            output='screen'                             # Specify where to send the node's output (console or log file)
        ),

        Node(
            package='stm_station',                  # ROS package containing the node's executable
            executable='stm_node_slave',           # Name of the executable to run
            name='stm_slave_node',                 # Name to assign to the node (used in logs and debugging)
            namespace= stm_name_space_slave,
            output='screen'
        ),

        Node(
            package='stm_station',                  # ROS package containing the node's executable
            executable='stm_control_node_master_slave',           # Name of the executable to run
            name='stm_control_node',                 # Name to assign to the node (used in logs and debugging)
            parameters = [parameters],
            output='screen'
        ),
        # Node(
            # package='stm_station',                  # ROS package containing the node's executable
            # executable='stm_visualization',           # Name of the executable to run
            # name='stm_visualization_node',                 # Name to assign to the node (used in logs and debugging)
            # output='screen'            
        # ),
        Node(
            package='stm_station',                  # ROS package containing the node's executable
            executable='stm_turtlebot_control',           # Name of the executable to run
            name='stm_turtlebot_control_node',                 # Name to assign to the node (used in logs and debugging)
            output='screen'            
        )
    ])
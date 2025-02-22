# ROS 2 Master-Slave Node Program

## Overview
This ROS 2 package implements a master-slave architecture where a master node sends commands to one or more slave nodes, which then execute the received commands. It is useful for distributed control applications in robotics.

## Features
- Master node publishes commands to a topic
- Slave node subscribes to the topic and executes commands
- Bidirectional communication with feedback from slave to master
- Configurable communication parameters
- Supports multiple slave nodes

## Installation

Ensure you have ROS 2 installed on your system. This package is compatible with ROS 2 Foxy and later.

```sh
# Source your ROS 2 environment
source /opt/ros/foxy/setup.bash

# Navigate to your ROS 2 workspace
cd ~/ros2_ws/src

# Clone the repository
git clone https://github.com/your-username/ros2-master-slave.git

# Build the package
cd ~/ros2_ws
colcon build

# Source the workspace
source install/setup.bash
```

## Usage

### Running the Master Node
```sh
ros2 run master_slave master_node
```

### Running the Slave Node
```sh
ros2 run master_slave slave_node
```

### Running with Multiple Slaves
You can start multiple instances of the slave node to create a multi-slave system:
```sh
ros2 run master_slave slave_node --ros-args --remap slave_id:=1 &
ros2 run master_slave slave_node --ros-args --remap slave_id:=2 &
```

## Nodes and Topics

### Master Node
- **Publishes**: `/command_topic` (std_msgs/String)
- **Subscribes**: `/feedback_topic` (std_msgs/String)

### Slave Node
- **Subscribes**: `/command_topic` (std_msgs/String)
- **Publishes**: `/feedback_topic` (std_msgs/String)

## Configuration
Modify `config/params.yaml` to adjust parameters like topic names, update rates, and command formats.

## Example
An example workflow:
1. Start a slave node.
2. Start the master node and send commands.
3. The slave node executes the received command and sends feedback.

## Contributing
Contributions are welcome! Feel free to submit a pull request or open an issue.

## License
This project is licensed under the MIT License. See the LICENSE file for details.


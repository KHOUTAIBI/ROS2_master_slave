first_package:
	colcon build --packages-select first_package
stm_station :
	colcon build --packages-select stm_station
colcon:
	colcon build
poscontrol :
	ros2 run stm_station stm_control_node_master_slave
poscontrol_impedence :
	ros2 run stm_station stm_control_imp_node_master_slave_poscontrol
serial_node :
	ros2 run stm_station stm_serial_node_pub_sub  -r __ns:=/group_${ARGS}
serial_slave :
	ros2 run stm_station stm_node_slave -r __ns:=/group_${ARGS}

first_package:
	colcon build --packages-select first_package
stm_station :
	colcon build --package-select stm_station

stm_station:
	colcon build --packages-select stm_station
colcon:
	colcon build
poscontrol :
	ros2 run stm_station stm_control_node_poscontrol

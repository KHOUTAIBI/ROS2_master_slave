std_msgs/Header header  # Standard message header
int32 control_type              # Control type: 0 = Stop, 1 = Position Control, 2 = Impedance Control
float32 setpoint                   # Desired setpoint for the control type
float32 kp                              # Controller proportional parameter
float32 pwm                         # PWM value


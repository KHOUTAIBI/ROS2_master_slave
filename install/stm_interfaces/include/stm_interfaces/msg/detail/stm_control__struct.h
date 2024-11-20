// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_CONTROL__STRUCT_H_
#define STM_INTERFACES__MSG__DETAIL__STM_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/STMControl in the package stm_interfaces.
typedef struct stm_interfaces__msg__STMControl
{
  std_msgs__msg__Header header;
  int32_t control_type;
  float setpoint;
  float kp;
  float pwm;
} stm_interfaces__msg__STMControl;

// Struct for a sequence of stm_interfaces__msg__STMControl.
typedef struct stm_interfaces__msg__STMControl__Sequence
{
  stm_interfaces__msg__STMControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm_interfaces__msg__STMControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM_INTERFACES__MSG__DETAIL__STM_CONTROL__STRUCT_H_

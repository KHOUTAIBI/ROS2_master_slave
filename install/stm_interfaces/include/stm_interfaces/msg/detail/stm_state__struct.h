// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm_interfaces:msg/STMState.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_STATE__STRUCT_H_
#define STM_INTERFACES__MSG__DETAIL__STM_STATE__STRUCT_H_

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

// Struct defined in msg/STMState in the package stm_interfaces.
typedef struct stm_interfaces__msg__STMState
{
  std_msgs__msg__Header header;
  float motor_encoder;
  float motor_velocity;
  float accel_x;
  float accel_y;
  float accel_z;
  float gyro_x;
  float gyro_y;
  float gyro_z;
} stm_interfaces__msg__STMState;

// Struct for a sequence of stm_interfaces__msg__STMState.
typedef struct stm_interfaces__msg__STMState__Sequence
{
  stm_interfaces__msg__STMState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm_interfaces__msg__STMState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM_INTERFACES__MSG__DETAIL__STM_STATE__STRUCT_H_

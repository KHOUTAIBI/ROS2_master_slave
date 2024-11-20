// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm_interfaces:srv/STMSetControlType.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__STM_SET_CONTROL_TYPE__STRUCT_H_
#define STM_INTERFACES__SRV__DETAIL__STM_SET_CONTROL_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/STMSetControlType in the package stm_interfaces.
typedef struct stm_interfaces__srv__STMSetControlType_Request
{
  int32_t control_type;
  double kp;
  double kd;
} stm_interfaces__srv__STMSetControlType_Request;

// Struct for a sequence of stm_interfaces__srv__STMSetControlType_Request.
typedef struct stm_interfaces__srv__STMSetControlType_Request__Sequence
{
  stm_interfaces__srv__STMSetControlType_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm_interfaces__srv__STMSetControlType_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/STMSetControlType in the package stm_interfaces.
typedef struct stm_interfaces__srv__STMSetControlType_Response
{
  bool success;
} stm_interfaces__srv__STMSetControlType_Response;

// Struct for a sequence of stm_interfaces__srv__STMSetControlType_Response.
typedef struct stm_interfaces__srv__STMSetControlType_Response__Sequence
{
  stm_interfaces__srv__STMSetControlType_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm_interfaces__srv__STMSetControlType_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM_INTERFACES__SRV__DETAIL__STM_SET_CONTROL_TYPE__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'range_list'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'name'
#include "first_interfaces/msg/detail/string__struct.h"

// Struct defined in msg/CustomMessage in the package first_interfaces.
typedef struct first_interfaces__msg__CustomMessage
{
  float range;
  rosidl_runtime_c__float__Sequence range_list;
  first_interfaces__msg__String name;
} first_interfaces__msg__CustomMessage;

// Struct for a sequence of first_interfaces__msg__CustomMessage.
typedef struct first_interfaces__msg__CustomMessage__Sequence
{
  first_interfaces__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

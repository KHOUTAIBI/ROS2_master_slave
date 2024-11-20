// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Custom in the package first_interfaces.
typedef struct first_interfaces__msg__Custom
{
  float range;
  rosidl_runtime_c__float__Sequence range_list;
  rosidl_runtime_c__String name;
} first_interfaces__msg__Custom;

// Struct for a sequence of first_interfaces__msg__Custom.
typedef struct first_interfaces__msg__Custom__Sequence
{
  first_interfaces__msg__Custom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__Custom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_

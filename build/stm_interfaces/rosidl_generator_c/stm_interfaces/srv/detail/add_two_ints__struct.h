// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define STM_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AddTwoInts in the package stm_interfaces.
typedef struct stm_interfaces__srv__AddTwoInts_Request
{
  int32_t a;
  int32_t b;
} stm_interfaces__srv__AddTwoInts_Request;

// Struct for a sequence of stm_interfaces__srv__AddTwoInts_Request.
typedef struct stm_interfaces__srv__AddTwoInts_Request__Sequence
{
  stm_interfaces__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm_interfaces__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddTwoInts in the package stm_interfaces.
typedef struct stm_interfaces__srv__AddTwoInts_Response
{
  int32_t sum;
} stm_interfaces__srv__AddTwoInts_Response;

// Struct for a sequence of stm_interfaces__srv__AddTwoInts_Response.
typedef struct stm_interfaces__srv__AddTwoInts_Response__Sequence
{
  stm_interfaces__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm_interfaces__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

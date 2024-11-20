// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from first_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM__FUNCTIONS_H_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "first_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "first_interfaces/msg/detail/custom__struct.h"

/// Initialize msg/Custom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_interfaces__msg__Custom
 * )) before or use
 * first_interfaces__msg__Custom__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Custom__init(first_interfaces__msg__Custom * msg);

/// Finalize msg/Custom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Custom__fini(first_interfaces__msg__Custom * msg);

/// Create msg/Custom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_interfaces__msg__Custom__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
first_interfaces__msg__Custom *
first_interfaces__msg__Custom__create();

/// Destroy msg/Custom message.
/**
 * It calls
 * first_interfaces__msg__Custom__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Custom__destroy(first_interfaces__msg__Custom * msg);

/// Check for msg/Custom message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Custom__are_equal(const first_interfaces__msg__Custom * lhs, const first_interfaces__msg__Custom * rhs);

/// Copy a msg/Custom message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Custom__copy(
  const first_interfaces__msg__Custom * input,
  first_interfaces__msg__Custom * output);

/// Initialize array of msg/Custom messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_interfaces__msg__Custom__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Custom__Sequence__init(first_interfaces__msg__Custom__Sequence * array, size_t size);

/// Finalize array of msg/Custom messages.
/**
 * It calls
 * first_interfaces__msg__Custom__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Custom__Sequence__fini(first_interfaces__msg__Custom__Sequence * array);

/// Create array of msg/Custom messages.
/**
 * It allocates the memory for the array and calls
 * first_interfaces__msg__Custom__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
first_interfaces__msg__Custom__Sequence *
first_interfaces__msg__Custom__Sequence__create(size_t size);

/// Destroy array of msg/Custom messages.
/**
 * It calls
 * first_interfaces__msg__Custom__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Custom__Sequence__destroy(first_interfaces__msg__Custom__Sequence * array);

/// Check for msg/Custom message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Custom__Sequence__are_equal(const first_interfaces__msg__Custom__Sequence * lhs, const first_interfaces__msg__Custom__Sequence * rhs);

/// Copy an array of msg/Custom messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Custom__Sequence__copy(
  const first_interfaces__msg__Custom__Sequence * input,
  first_interfaces__msg__Custom__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM__FUNCTIONS_H_

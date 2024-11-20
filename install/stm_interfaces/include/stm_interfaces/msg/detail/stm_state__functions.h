// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stm_interfaces:msg/STMState.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_STATE__FUNCTIONS_H_
#define STM_INTERFACES__MSG__DETAIL__STM_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "stm_interfaces/msg/detail/stm_state__struct.h"

/// Initialize msg/STMState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm_interfaces__msg__STMState
 * )) before or use
 * stm_interfaces__msg__STMState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__msg__STMState__init(stm_interfaces__msg__STMState * msg);

/// Finalize msg/STMState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__msg__STMState__fini(stm_interfaces__msg__STMState * msg);

/// Create msg/STMState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm_interfaces__msg__STMState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
stm_interfaces__msg__STMState *
stm_interfaces__msg__STMState__create();

/// Destroy msg/STMState message.
/**
 * It calls
 * stm_interfaces__msg__STMState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__msg__STMState__destroy(stm_interfaces__msg__STMState * msg);

/// Check for msg/STMState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__msg__STMState__are_equal(const stm_interfaces__msg__STMState * lhs, const stm_interfaces__msg__STMState * rhs);

/// Copy a msg/STMState message.
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
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__msg__STMState__copy(
  const stm_interfaces__msg__STMState * input,
  stm_interfaces__msg__STMState * output);

/// Initialize array of msg/STMState messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm_interfaces__msg__STMState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__msg__STMState__Sequence__init(stm_interfaces__msg__STMState__Sequence * array, size_t size);

/// Finalize array of msg/STMState messages.
/**
 * It calls
 * stm_interfaces__msg__STMState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__msg__STMState__Sequence__fini(stm_interfaces__msg__STMState__Sequence * array);

/// Create array of msg/STMState messages.
/**
 * It allocates the memory for the array and calls
 * stm_interfaces__msg__STMState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
stm_interfaces__msg__STMState__Sequence *
stm_interfaces__msg__STMState__Sequence__create(size_t size);

/// Destroy array of msg/STMState messages.
/**
 * It calls
 * stm_interfaces__msg__STMState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__msg__STMState__Sequence__destroy(stm_interfaces__msg__STMState__Sequence * array);

/// Check for msg/STMState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__msg__STMState__Sequence__are_equal(const stm_interfaces__msg__STMState__Sequence * lhs, const stm_interfaces__msg__STMState__Sequence * rhs);

/// Copy an array of msg/STMState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__msg__STMState__Sequence__copy(
  const stm_interfaces__msg__STMState__Sequence * input,
  stm_interfaces__msg__STMState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STM_INTERFACES__MSG__DETAIL__STM_STATE__FUNCTIONS_H_

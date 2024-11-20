// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stm_interfaces:srv/MotorService.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__FUNCTIONS_H_
#define STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "stm_interfaces/srv/detail/motor_service__struct.h"

/// Initialize srv/MotorService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm_interfaces__srv__MotorService_Request
 * )) before or use
 * stm_interfaces__srv__MotorService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Request__init(stm_interfaces__srv__MotorService_Request * msg);

/// Finalize srv/MotorService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Request__fini(stm_interfaces__srv__MotorService_Request * msg);

/// Create srv/MotorService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm_interfaces__srv__MotorService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
stm_interfaces__srv__MotorService_Request *
stm_interfaces__srv__MotorService_Request__create();

/// Destroy srv/MotorService message.
/**
 * It calls
 * stm_interfaces__srv__MotorService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Request__destroy(stm_interfaces__srv__MotorService_Request * msg);

/// Check for srv/MotorService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Request__are_equal(const stm_interfaces__srv__MotorService_Request * lhs, const stm_interfaces__srv__MotorService_Request * rhs);

/// Copy a srv/MotorService message.
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
stm_interfaces__srv__MotorService_Request__copy(
  const stm_interfaces__srv__MotorService_Request * input,
  stm_interfaces__srv__MotorService_Request * output);

/// Initialize array of srv/MotorService messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm_interfaces__srv__MotorService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Request__Sequence__init(stm_interfaces__srv__MotorService_Request__Sequence * array, size_t size);

/// Finalize array of srv/MotorService messages.
/**
 * It calls
 * stm_interfaces__srv__MotorService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Request__Sequence__fini(stm_interfaces__srv__MotorService_Request__Sequence * array);

/// Create array of srv/MotorService messages.
/**
 * It allocates the memory for the array and calls
 * stm_interfaces__srv__MotorService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
stm_interfaces__srv__MotorService_Request__Sequence *
stm_interfaces__srv__MotorService_Request__Sequence__create(size_t size);

/// Destroy array of srv/MotorService messages.
/**
 * It calls
 * stm_interfaces__srv__MotorService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Request__Sequence__destroy(stm_interfaces__srv__MotorService_Request__Sequence * array);

/// Check for srv/MotorService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Request__Sequence__are_equal(const stm_interfaces__srv__MotorService_Request__Sequence * lhs, const stm_interfaces__srv__MotorService_Request__Sequence * rhs);

/// Copy an array of srv/MotorService messages.
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
stm_interfaces__srv__MotorService_Request__Sequence__copy(
  const stm_interfaces__srv__MotorService_Request__Sequence * input,
  stm_interfaces__srv__MotorService_Request__Sequence * output);

/// Initialize srv/MotorService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm_interfaces__srv__MotorService_Response
 * )) before or use
 * stm_interfaces__srv__MotorService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Response__init(stm_interfaces__srv__MotorService_Response * msg);

/// Finalize srv/MotorService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Response__fini(stm_interfaces__srv__MotorService_Response * msg);

/// Create srv/MotorService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm_interfaces__srv__MotorService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
stm_interfaces__srv__MotorService_Response *
stm_interfaces__srv__MotorService_Response__create();

/// Destroy srv/MotorService message.
/**
 * It calls
 * stm_interfaces__srv__MotorService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Response__destroy(stm_interfaces__srv__MotorService_Response * msg);

/// Check for srv/MotorService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Response__are_equal(const stm_interfaces__srv__MotorService_Response * lhs, const stm_interfaces__srv__MotorService_Response * rhs);

/// Copy a srv/MotorService message.
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
stm_interfaces__srv__MotorService_Response__copy(
  const stm_interfaces__srv__MotorService_Response * input,
  stm_interfaces__srv__MotorService_Response * output);

/// Initialize array of srv/MotorService messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm_interfaces__srv__MotorService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Response__Sequence__init(stm_interfaces__srv__MotorService_Response__Sequence * array, size_t size);

/// Finalize array of srv/MotorService messages.
/**
 * It calls
 * stm_interfaces__srv__MotorService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Response__Sequence__fini(stm_interfaces__srv__MotorService_Response__Sequence * array);

/// Create array of srv/MotorService messages.
/**
 * It allocates the memory for the array and calls
 * stm_interfaces__srv__MotorService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
stm_interfaces__srv__MotorService_Response__Sequence *
stm_interfaces__srv__MotorService_Response__Sequence__create(size_t size);

/// Destroy array of srv/MotorService messages.
/**
 * It calls
 * stm_interfaces__srv__MotorService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
void
stm_interfaces__srv__MotorService_Response__Sequence__destroy(stm_interfaces__srv__MotorService_Response__Sequence * array);

/// Check for srv/MotorService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm_interfaces
bool
stm_interfaces__srv__MotorService_Response__Sequence__are_equal(const stm_interfaces__srv__MotorService_Response__Sequence * lhs, const stm_interfaces__srv__MotorService_Response__Sequence * rhs);

/// Copy an array of srv/MotorService messages.
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
stm_interfaces__srv__MotorService_Response__Sequence__copy(
  const stm_interfaces__srv__MotorService_Response__Sequence * input,
  stm_interfaces__srv__MotorService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__FUNCTIONS_H_

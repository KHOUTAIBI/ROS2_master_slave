// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm_interfaces:msg/STMState.idl
// generated code does not contain a copyright notice
#include "stm_interfaces/msg/detail/stm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
stm_interfaces__msg__STMState__init(stm_interfaces__msg__STMState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stm_interfaces__msg__STMState__fini(msg);
    return false;
  }
  // motor_encoder
  // motor_velocity
  // accel_x
  // accel_y
  // accel_z
  // gyro_x
  // gyro_y
  // gyro_z
  return true;
}

void
stm_interfaces__msg__STMState__fini(stm_interfaces__msg__STMState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motor_encoder
  // motor_velocity
  // accel_x
  // accel_y
  // accel_z
  // gyro_x
  // gyro_y
  // gyro_z
}

bool
stm_interfaces__msg__STMState__are_equal(const stm_interfaces__msg__STMState * lhs, const stm_interfaces__msg__STMState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // motor_encoder
  if (lhs->motor_encoder != rhs->motor_encoder) {
    return false;
  }
  // motor_velocity
  if (lhs->motor_velocity != rhs->motor_velocity) {
    return false;
  }
  // accel_x
  if (lhs->accel_x != rhs->accel_x) {
    return false;
  }
  // accel_y
  if (lhs->accel_y != rhs->accel_y) {
    return false;
  }
  // accel_z
  if (lhs->accel_z != rhs->accel_z) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  return true;
}

bool
stm_interfaces__msg__STMState__copy(
  const stm_interfaces__msg__STMState * input,
  stm_interfaces__msg__STMState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // motor_encoder
  output->motor_encoder = input->motor_encoder;
  // motor_velocity
  output->motor_velocity = input->motor_velocity;
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  return true;
}

stm_interfaces__msg__STMState *
stm_interfaces__msg__STMState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__msg__STMState * msg = (stm_interfaces__msg__STMState *)allocator.allocate(sizeof(stm_interfaces__msg__STMState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm_interfaces__msg__STMState));
  bool success = stm_interfaces__msg__STMState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm_interfaces__msg__STMState__destroy(stm_interfaces__msg__STMState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm_interfaces__msg__STMState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm_interfaces__msg__STMState__Sequence__init(stm_interfaces__msg__STMState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__msg__STMState * data = NULL;

  if (size) {
    data = (stm_interfaces__msg__STMState *)allocator.zero_allocate(size, sizeof(stm_interfaces__msg__STMState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm_interfaces__msg__STMState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm_interfaces__msg__STMState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
stm_interfaces__msg__STMState__Sequence__fini(stm_interfaces__msg__STMState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      stm_interfaces__msg__STMState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

stm_interfaces__msg__STMState__Sequence *
stm_interfaces__msg__STMState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__msg__STMState__Sequence * array = (stm_interfaces__msg__STMState__Sequence *)allocator.allocate(sizeof(stm_interfaces__msg__STMState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm_interfaces__msg__STMState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm_interfaces__msg__STMState__Sequence__destroy(stm_interfaces__msg__STMState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm_interfaces__msg__STMState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm_interfaces__msg__STMState__Sequence__are_equal(const stm_interfaces__msg__STMState__Sequence * lhs, const stm_interfaces__msg__STMState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm_interfaces__msg__STMState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm_interfaces__msg__STMState__Sequence__copy(
  const stm_interfaces__msg__STMState__Sequence * input,
  stm_interfaces__msg__STMState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm_interfaces__msg__STMState);
    stm_interfaces__msg__STMState * data =
      (stm_interfaces__msg__STMState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm_interfaces__msg__STMState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          stm_interfaces__msg__STMState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm_interfaces__msg__STMState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

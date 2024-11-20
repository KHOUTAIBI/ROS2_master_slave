// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice
#include "stm_interfaces/msg/detail/stm_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
stm_interfaces__msg__STMControl__init(stm_interfaces__msg__STMControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stm_interfaces__msg__STMControl__fini(msg);
    return false;
  }
  // control_type
  // setpoint
  // kp
  // pwm
  return true;
}

void
stm_interfaces__msg__STMControl__fini(stm_interfaces__msg__STMControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // control_type
  // setpoint
  // kp
  // pwm
}

bool
stm_interfaces__msg__STMControl__are_equal(const stm_interfaces__msg__STMControl * lhs, const stm_interfaces__msg__STMControl * rhs)
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
  // control_type
  if (lhs->control_type != rhs->control_type) {
    return false;
  }
  // setpoint
  if (lhs->setpoint != rhs->setpoint) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // pwm
  if (lhs->pwm != rhs->pwm) {
    return false;
  }
  return true;
}

bool
stm_interfaces__msg__STMControl__copy(
  const stm_interfaces__msg__STMControl * input,
  stm_interfaces__msg__STMControl * output)
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
  // control_type
  output->control_type = input->control_type;
  // setpoint
  output->setpoint = input->setpoint;
  // kp
  output->kp = input->kp;
  // pwm
  output->pwm = input->pwm;
  return true;
}

stm_interfaces__msg__STMControl *
stm_interfaces__msg__STMControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__msg__STMControl * msg = (stm_interfaces__msg__STMControl *)allocator.allocate(sizeof(stm_interfaces__msg__STMControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm_interfaces__msg__STMControl));
  bool success = stm_interfaces__msg__STMControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm_interfaces__msg__STMControl__destroy(stm_interfaces__msg__STMControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm_interfaces__msg__STMControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm_interfaces__msg__STMControl__Sequence__init(stm_interfaces__msg__STMControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__msg__STMControl * data = NULL;

  if (size) {
    data = (stm_interfaces__msg__STMControl *)allocator.zero_allocate(size, sizeof(stm_interfaces__msg__STMControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm_interfaces__msg__STMControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm_interfaces__msg__STMControl__fini(&data[i - 1]);
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
stm_interfaces__msg__STMControl__Sequence__fini(stm_interfaces__msg__STMControl__Sequence * array)
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
      stm_interfaces__msg__STMControl__fini(&array->data[i]);
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

stm_interfaces__msg__STMControl__Sequence *
stm_interfaces__msg__STMControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__msg__STMControl__Sequence * array = (stm_interfaces__msg__STMControl__Sequence *)allocator.allocate(sizeof(stm_interfaces__msg__STMControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm_interfaces__msg__STMControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm_interfaces__msg__STMControl__Sequence__destroy(stm_interfaces__msg__STMControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm_interfaces__msg__STMControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm_interfaces__msg__STMControl__Sequence__are_equal(const stm_interfaces__msg__STMControl__Sequence * lhs, const stm_interfaces__msg__STMControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm_interfaces__msg__STMControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm_interfaces__msg__STMControl__Sequence__copy(
  const stm_interfaces__msg__STMControl__Sequence * input,
  stm_interfaces__msg__STMControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm_interfaces__msg__STMControl);
    stm_interfaces__msg__STMControl * data =
      (stm_interfaces__msg__STMControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm_interfaces__msg__STMControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          stm_interfaces__msg__STMControl__fini(&data[i]);
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
    if (!stm_interfaces__msg__STMControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

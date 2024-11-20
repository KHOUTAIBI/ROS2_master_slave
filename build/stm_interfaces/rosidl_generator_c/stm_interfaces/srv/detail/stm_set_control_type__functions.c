// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm_interfaces:srv/STMSetControlType.idl
// generated code does not contain a copyright notice
#include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
stm_interfaces__srv__STMSetControlType_Request__init(stm_interfaces__srv__STMSetControlType_Request * msg)
{
  if (!msg) {
    return false;
  }
  // control_type
  // kp
  // kd
  return true;
}

void
stm_interfaces__srv__STMSetControlType_Request__fini(stm_interfaces__srv__STMSetControlType_Request * msg)
{
  if (!msg) {
    return;
  }
  // control_type
  // kp
  // kd
}

bool
stm_interfaces__srv__STMSetControlType_Request__are_equal(const stm_interfaces__srv__STMSetControlType_Request * lhs, const stm_interfaces__srv__STMSetControlType_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // control_type
  if (lhs->control_type != rhs->control_type) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  return true;
}

bool
stm_interfaces__srv__STMSetControlType_Request__copy(
  const stm_interfaces__srv__STMSetControlType_Request * input,
  stm_interfaces__srv__STMSetControlType_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // control_type
  output->control_type = input->control_type;
  // kp
  output->kp = input->kp;
  // kd
  output->kd = input->kd;
  return true;
}

stm_interfaces__srv__STMSetControlType_Request *
stm_interfaces__srv__STMSetControlType_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__srv__STMSetControlType_Request * msg = (stm_interfaces__srv__STMSetControlType_Request *)allocator.allocate(sizeof(stm_interfaces__srv__STMSetControlType_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm_interfaces__srv__STMSetControlType_Request));
  bool success = stm_interfaces__srv__STMSetControlType_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm_interfaces__srv__STMSetControlType_Request__destroy(stm_interfaces__srv__STMSetControlType_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm_interfaces__srv__STMSetControlType_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm_interfaces__srv__STMSetControlType_Request__Sequence__init(stm_interfaces__srv__STMSetControlType_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__srv__STMSetControlType_Request * data = NULL;

  if (size) {
    data = (stm_interfaces__srv__STMSetControlType_Request *)allocator.zero_allocate(size, sizeof(stm_interfaces__srv__STMSetControlType_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm_interfaces__srv__STMSetControlType_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm_interfaces__srv__STMSetControlType_Request__fini(&data[i - 1]);
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
stm_interfaces__srv__STMSetControlType_Request__Sequence__fini(stm_interfaces__srv__STMSetControlType_Request__Sequence * array)
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
      stm_interfaces__srv__STMSetControlType_Request__fini(&array->data[i]);
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

stm_interfaces__srv__STMSetControlType_Request__Sequence *
stm_interfaces__srv__STMSetControlType_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__srv__STMSetControlType_Request__Sequence * array = (stm_interfaces__srv__STMSetControlType_Request__Sequence *)allocator.allocate(sizeof(stm_interfaces__srv__STMSetControlType_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm_interfaces__srv__STMSetControlType_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm_interfaces__srv__STMSetControlType_Request__Sequence__destroy(stm_interfaces__srv__STMSetControlType_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm_interfaces__srv__STMSetControlType_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm_interfaces__srv__STMSetControlType_Request__Sequence__are_equal(const stm_interfaces__srv__STMSetControlType_Request__Sequence * lhs, const stm_interfaces__srv__STMSetControlType_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm_interfaces__srv__STMSetControlType_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm_interfaces__srv__STMSetControlType_Request__Sequence__copy(
  const stm_interfaces__srv__STMSetControlType_Request__Sequence * input,
  stm_interfaces__srv__STMSetControlType_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm_interfaces__srv__STMSetControlType_Request);
    stm_interfaces__srv__STMSetControlType_Request * data =
      (stm_interfaces__srv__STMSetControlType_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm_interfaces__srv__STMSetControlType_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          stm_interfaces__srv__STMSetControlType_Request__fini(&data[i]);
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
    if (!stm_interfaces__srv__STMSetControlType_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
stm_interfaces__srv__STMSetControlType_Response__init(stm_interfaces__srv__STMSetControlType_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
stm_interfaces__srv__STMSetControlType_Response__fini(stm_interfaces__srv__STMSetControlType_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
stm_interfaces__srv__STMSetControlType_Response__are_equal(const stm_interfaces__srv__STMSetControlType_Response * lhs, const stm_interfaces__srv__STMSetControlType_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
stm_interfaces__srv__STMSetControlType_Response__copy(
  const stm_interfaces__srv__STMSetControlType_Response * input,
  stm_interfaces__srv__STMSetControlType_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

stm_interfaces__srv__STMSetControlType_Response *
stm_interfaces__srv__STMSetControlType_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__srv__STMSetControlType_Response * msg = (stm_interfaces__srv__STMSetControlType_Response *)allocator.allocate(sizeof(stm_interfaces__srv__STMSetControlType_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm_interfaces__srv__STMSetControlType_Response));
  bool success = stm_interfaces__srv__STMSetControlType_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm_interfaces__srv__STMSetControlType_Response__destroy(stm_interfaces__srv__STMSetControlType_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm_interfaces__srv__STMSetControlType_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm_interfaces__srv__STMSetControlType_Response__Sequence__init(stm_interfaces__srv__STMSetControlType_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__srv__STMSetControlType_Response * data = NULL;

  if (size) {
    data = (stm_interfaces__srv__STMSetControlType_Response *)allocator.zero_allocate(size, sizeof(stm_interfaces__srv__STMSetControlType_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm_interfaces__srv__STMSetControlType_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm_interfaces__srv__STMSetControlType_Response__fini(&data[i - 1]);
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
stm_interfaces__srv__STMSetControlType_Response__Sequence__fini(stm_interfaces__srv__STMSetControlType_Response__Sequence * array)
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
      stm_interfaces__srv__STMSetControlType_Response__fini(&array->data[i]);
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

stm_interfaces__srv__STMSetControlType_Response__Sequence *
stm_interfaces__srv__STMSetControlType_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm_interfaces__srv__STMSetControlType_Response__Sequence * array = (stm_interfaces__srv__STMSetControlType_Response__Sequence *)allocator.allocate(sizeof(stm_interfaces__srv__STMSetControlType_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm_interfaces__srv__STMSetControlType_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm_interfaces__srv__STMSetControlType_Response__Sequence__destroy(stm_interfaces__srv__STMSetControlType_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm_interfaces__srv__STMSetControlType_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm_interfaces__srv__STMSetControlType_Response__Sequence__are_equal(const stm_interfaces__srv__STMSetControlType_Response__Sequence * lhs, const stm_interfaces__srv__STMSetControlType_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm_interfaces__srv__STMSetControlType_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm_interfaces__srv__STMSetControlType_Response__Sequence__copy(
  const stm_interfaces__srv__STMSetControlType_Response__Sequence * input,
  stm_interfaces__srv__STMSetControlType_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm_interfaces__srv__STMSetControlType_Response);
    stm_interfaces__srv__STMSetControlType_Response * data =
      (stm_interfaces__srv__STMSetControlType_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm_interfaces__srv__STMSetControlType_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          stm_interfaces__srv__STMSetControlType_Response__fini(&data[i]);
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
    if (!stm_interfaces__srv__STMSetControlType_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

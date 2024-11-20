// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "first_interfaces/msg/detail/custom_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `range_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `name`
#include "first_interfaces/msg/detail/string__functions.h"

bool
first_interfaces__msg__CustomMessage__init(first_interfaces__msg__CustomMessage * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // range_list
  if (!rosidl_runtime_c__float__Sequence__init(&msg->range_list, 0)) {
    first_interfaces__msg__CustomMessage__fini(msg);
    return false;
  }
  // name
  if (!first_interfaces__msg__String__init(&msg->name)) {
    first_interfaces__msg__CustomMessage__fini(msg);
    return false;
  }
  return true;
}

void
first_interfaces__msg__CustomMessage__fini(first_interfaces__msg__CustomMessage * msg)
{
  if (!msg) {
    return;
  }
  // range
  // range_list
  rosidl_runtime_c__float__Sequence__fini(&msg->range_list);
  // name
  first_interfaces__msg__String__fini(&msg->name);
}

bool
first_interfaces__msg__CustomMessage__are_equal(const first_interfaces__msg__CustomMessage * lhs, const first_interfaces__msg__CustomMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // range_list
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->range_list), &(rhs->range_list)))
  {
    return false;
  }
  // name
  if (!first_interfaces__msg__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
first_interfaces__msg__CustomMessage__copy(
  const first_interfaces__msg__CustomMessage * input,
  first_interfaces__msg__CustomMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // range_list
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->range_list), &(output->range_list)))
  {
    return false;
  }
  // name
  if (!first_interfaces__msg__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

first_interfaces__msg__CustomMessage *
first_interfaces__msg__CustomMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_interfaces__msg__CustomMessage * msg = (first_interfaces__msg__CustomMessage *)allocator.allocate(sizeof(first_interfaces__msg__CustomMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_interfaces__msg__CustomMessage));
  bool success = first_interfaces__msg__CustomMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_interfaces__msg__CustomMessage__destroy(first_interfaces__msg__CustomMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_interfaces__msg__CustomMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_interfaces__msg__CustomMessage__Sequence__init(first_interfaces__msg__CustomMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_interfaces__msg__CustomMessage * data = NULL;

  if (size) {
    data = (first_interfaces__msg__CustomMessage *)allocator.zero_allocate(size, sizeof(first_interfaces__msg__CustomMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_interfaces__msg__CustomMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_interfaces__msg__CustomMessage__fini(&data[i - 1]);
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
first_interfaces__msg__CustomMessage__Sequence__fini(first_interfaces__msg__CustomMessage__Sequence * array)
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
      first_interfaces__msg__CustomMessage__fini(&array->data[i]);
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

first_interfaces__msg__CustomMessage__Sequence *
first_interfaces__msg__CustomMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_interfaces__msg__CustomMessage__Sequence * array = (first_interfaces__msg__CustomMessage__Sequence *)allocator.allocate(sizeof(first_interfaces__msg__CustomMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_interfaces__msg__CustomMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_interfaces__msg__CustomMessage__Sequence__destroy(first_interfaces__msg__CustomMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_interfaces__msg__CustomMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_interfaces__msg__CustomMessage__Sequence__are_equal(const first_interfaces__msg__CustomMessage__Sequence * lhs, const first_interfaces__msg__CustomMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_interfaces__msg__CustomMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_interfaces__msg__CustomMessage__Sequence__copy(
  const first_interfaces__msg__CustomMessage__Sequence * input,
  first_interfaces__msg__CustomMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_interfaces__msg__CustomMessage);
    first_interfaces__msg__CustomMessage * data =
      (first_interfaces__msg__CustomMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_interfaces__msg__CustomMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          first_interfaces__msg__CustomMessage__fini(&data[i]);
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
    if (!first_interfaces__msg__CustomMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stm_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "stm_interfaces/srv/detail/add_two_ints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stm_interfaces/srv/detail/add_two_ints__struct.h"
#include "stm_interfaces/srv/detail/add_two_ints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AddTwoInts_Request__ros_msg_type = stm_interfaces__srv__AddTwoInts_Request;

static bool _AddTwoInts_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddTwoInts_Request__ros_msg_type * ros_message = static_cast<const _AddTwoInts_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  return true;
}

static bool _AddTwoInts_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddTwoInts_Request__ros_msg_type * ros_message = static_cast<_AddTwoInts_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t get_serialized_size_stm_interfaces__srv__AddTwoInts_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddTwoInts_Request__ros_msg_type * ros_message = static_cast<const _AddTwoInts_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddTwoInts_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm_interfaces__srv__AddTwoInts_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t max_serialized_size_stm_interfaces__srv__AddTwoInts_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AddTwoInts_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_stm_interfaces__srv__AddTwoInts_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddTwoInts_Request = {
  "stm_interfaces::srv",
  "AddTwoInts_Request",
  _AddTwoInts_Request__cdr_serialize,
  _AddTwoInts_Request__cdr_deserialize,
  _AddTwoInts_Request__get_serialized_size,
  _AddTwoInts_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddTwoInts_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddTwoInts_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, AddTwoInts_Request)() {
  return &_AddTwoInts_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "stm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "stm_interfaces/srv/detail/add_two_ints__struct.h"
// already included above
// #include "stm_interfaces/srv/detail/add_two_ints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AddTwoInts_Response__ros_msg_type = stm_interfaces__srv__AddTwoInts_Response;

static bool _AddTwoInts_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddTwoInts_Response__ros_msg_type * ros_message = static_cast<const _AddTwoInts_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr << ros_message->sum;
  }

  return true;
}

static bool _AddTwoInts_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddTwoInts_Response__ros_msg_type * ros_message = static_cast<_AddTwoInts_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr >> ros_message->sum;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t get_serialized_size_stm_interfaces__srv__AddTwoInts_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddTwoInts_Response__ros_msg_type * ros_message = static_cast<const _AddTwoInts_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t item_size = sizeof(ros_message->sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddTwoInts_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm_interfaces__srv__AddTwoInts_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t max_serialized_size_stm_interfaces__srv__AddTwoInts_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AddTwoInts_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_stm_interfaces__srv__AddTwoInts_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddTwoInts_Response = {
  "stm_interfaces::srv",
  "AddTwoInts_Response",
  _AddTwoInts_Response__cdr_serialize,
  _AddTwoInts_Response__cdr_deserialize,
  _AddTwoInts_Response__get_serialized_size,
  _AddTwoInts_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddTwoInts_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddTwoInts_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, AddTwoInts_Response)() {
  return &_AddTwoInts_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "stm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stm_interfaces/srv/add_two_ints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddTwoInts__callbacks = {
  "stm_interfaces::srv",
  "AddTwoInts",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, AddTwoInts_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, AddTwoInts_Response)(),
};

static rosidl_service_type_support_t AddTwoInts__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddTwoInts__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, AddTwoInts)() {
  return &AddTwoInts__handle;
}

#if defined(__cplusplus)
}
#endif

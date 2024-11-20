// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stm_interfaces:srv/STMSetControlType.idl
// generated code does not contain a copyright notice
#include "stm_interfaces/srv/detail/stm_set_control_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stm_interfaces/srv/detail/stm_set_control_type__struct.h"
#include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"
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


using _STMSetControlType_Request__ros_msg_type = stm_interfaces__srv__STMSetControlType_Request;

static bool _STMSetControlType_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _STMSetControlType_Request__ros_msg_type * ros_message = static_cast<const _STMSetControlType_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: control_type
  {
    cdr << ros_message->control_type;
  }

  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  return true;
}

static bool _STMSetControlType_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _STMSetControlType_Request__ros_msg_type * ros_message = static_cast<_STMSetControlType_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: control_type
  {
    cdr >> ros_message->control_type;
  }

  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t get_serialized_size_stm_interfaces__srv__STMSetControlType_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _STMSetControlType_Request__ros_msg_type * ros_message = static_cast<const _STMSetControlType_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name control_type
  {
    size_t item_size = sizeof(ros_message->control_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _STMSetControlType_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm_interfaces__srv__STMSetControlType_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t max_serialized_size_stm_interfaces__srv__STMSetControlType_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: control_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _STMSetControlType_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_stm_interfaces__srv__STMSetControlType_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_STMSetControlType_Request = {
  "stm_interfaces::srv",
  "STMSetControlType_Request",
  _STMSetControlType_Request__cdr_serialize,
  _STMSetControlType_Request__cdr_deserialize,
  _STMSetControlType_Request__get_serialized_size,
  _STMSetControlType_Request__max_serialized_size
};

static rosidl_message_type_support_t _STMSetControlType_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_STMSetControlType_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, STMSetControlType_Request)() {
  return &_STMSetControlType_Request__type_support;
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
// #include "stm_interfaces/srv/detail/stm_set_control_type__struct.h"
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"
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


using _STMSetControlType_Response__ros_msg_type = stm_interfaces__srv__STMSetControlType_Response;

static bool _STMSetControlType_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _STMSetControlType_Response__ros_msg_type * ros_message = static_cast<const _STMSetControlType_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _STMSetControlType_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _STMSetControlType_Response__ros_msg_type * ros_message = static_cast<_STMSetControlType_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t get_serialized_size_stm_interfaces__srv__STMSetControlType_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _STMSetControlType_Response__ros_msg_type * ros_message = static_cast<const _STMSetControlType_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _STMSetControlType_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm_interfaces__srv__STMSetControlType_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm_interfaces
size_t max_serialized_size_stm_interfaces__srv__STMSetControlType_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _STMSetControlType_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_stm_interfaces__srv__STMSetControlType_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_STMSetControlType_Response = {
  "stm_interfaces::srv",
  "STMSetControlType_Response",
  _STMSetControlType_Response__cdr_serialize,
  _STMSetControlType_Response__cdr_deserialize,
  _STMSetControlType_Response__get_serialized_size,
  _STMSetControlType_Response__max_serialized_size
};

static rosidl_message_type_support_t _STMSetControlType_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_STMSetControlType_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, STMSetControlType_Response)() {
  return &_STMSetControlType_Response__type_support;
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
#include "stm_interfaces/srv/stm_set_control_type.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t STMSetControlType__callbacks = {
  "stm_interfaces::srv",
  "STMSetControlType",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, STMSetControlType_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, STMSetControlType_Response)(),
};

static rosidl_service_type_support_t STMSetControlType__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &STMSetControlType__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm_interfaces, srv, STMSetControlType)() {
  return &STMSetControlType__handle;
}

#if defined(__cplusplus)
}
#endif

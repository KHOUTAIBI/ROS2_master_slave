// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm_interfaces/msg/detail/stm_control__rosidl_typesupport_introspection_c.h"
#include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm_interfaces/msg/detail/stm_control__functions.h"
#include "stm_interfaces/msg/detail/stm_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void STMControl__rosidl_typesupport_introspection_c__STMControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm_interfaces__msg__STMControl__init(message_memory);
}

void STMControl__rosidl_typesupport_introspection_c__STMControl_fini_function(void * message_memory)
{
  stm_interfaces__msg__STMControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember STMControl__rosidl_typesupport_introspection_c__STMControl_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__msg__STMControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__msg__STMControl, control_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__msg__STMControl, setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__msg__STMControl, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__msg__STMControl, pwm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers STMControl__rosidl_typesupport_introspection_c__STMControl_message_members = {
  "stm_interfaces__msg",  // message namespace
  "STMControl",  // message name
  5,  // number of fields
  sizeof(stm_interfaces__msg__STMControl),
  STMControl__rosidl_typesupport_introspection_c__STMControl_message_member_array,  // message members
  STMControl__rosidl_typesupport_introspection_c__STMControl_init_function,  // function to initialize message memory (memory has to be allocated)
  STMControl__rosidl_typesupport_introspection_c__STMControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t STMControl__rosidl_typesupport_introspection_c__STMControl_message_type_support_handle = {
  0,
  &STMControl__rosidl_typesupport_introspection_c__STMControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, msg, STMControl)() {
  STMControl__rosidl_typesupport_introspection_c__STMControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!STMControl__rosidl_typesupport_introspection_c__STMControl_message_type_support_handle.typesupport_identifier) {
    STMControl__rosidl_typesupport_introspection_c__STMControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &STMControl__rosidl_typesupport_introspection_c__STMControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

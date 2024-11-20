// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm_interfaces:srv/STMSetControlType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm_interfaces/srv/detail/stm_set_control_type__rosidl_typesupport_introspection_c.h"
#include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"
#include "stm_interfaces/srv/detail/stm_set_control_type__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm_interfaces__srv__STMSetControlType_Request__init(message_memory);
}

void STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_fini_function(void * message_memory)
{
  stm_interfaces__srv__STMSetControlType_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_member_array[3] = {
  {
    "control_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__srv__STMSetControlType_Request, control_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__srv__STMSetControlType_Request, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__srv__STMSetControlType_Request, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_members = {
  "stm_interfaces__srv",  // message namespace
  "STMSetControlType_Request",  // message name
  3,  // number of fields
  sizeof(stm_interfaces__srv__STMSetControlType_Request),
  STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_member_array,  // message members
  STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_type_support_handle = {
  0,
  &STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType_Request)() {
  if (!STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_type_support_handle.typesupport_identifier) {
    STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &STMSetControlType_Request__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__rosidl_typesupport_introspection_c.h"
// already included above
// #include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm_interfaces__srv__STMSetControlType_Response__init(message_memory);
}

void STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_fini_function(void * message_memory)
{
  stm_interfaces__srv__STMSetControlType_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__srv__STMSetControlType_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_members = {
  "stm_interfaces__srv",  // message namespace
  "STMSetControlType_Response",  // message name
  1,  // number of fields
  sizeof(stm_interfaces__srv__STMSetControlType_Response),
  STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_member_array,  // message members
  STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_type_support_handle = {
  0,
  &STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType_Response)() {
  if (!STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_type_support_handle.typesupport_identifier) {
    STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &STMSetControlType_Response__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_members = {
  "stm_interfaces__srv",  // service namespace
  "STMSetControlType",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_Request_message_type_support_handle,
  NULL  // response message
  // stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_Response_message_type_support_handle
};

static rosidl_service_type_support_t stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_type_support_handle = {
  0,
  &stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType)() {
  if (!stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_type_support_handle.typesupport_identifier) {
    stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, STMSetControlType_Response)()->data;
  }

  return &stm_interfaces__srv__detail__stm_set_control_type__rosidl_typesupport_introspection_c__STMSetControlType_service_type_support_handle;
}

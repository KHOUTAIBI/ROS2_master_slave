// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm_interfaces:srv/MotorService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm_interfaces/srv/detail/motor_service__rosidl_typesupport_introspection_c.h"
#include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm_interfaces/srv/detail/motor_service__functions.h"
#include "stm_interfaces/srv/detail/motor_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm_interfaces__srv__MotorService_Request__init(message_memory);
}

void MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_fini_function(void * message_memory)
{
  stm_interfaces__srv__MotorService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_member_array[3] = {
  {
    "control_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__srv__MotorService_Request, control_type),  // bytes offset in struct
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
    offsetof(stm_interfaces__srv__MotorService_Request, kp),  // bytes offset in struct
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
    offsetof(stm_interfaces__srv__MotorService_Request, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_members = {
  "stm_interfaces__srv",  // message namespace
  "MotorService_Request",  // message name
  3,  // number of fields
  sizeof(stm_interfaces__srv__MotorService_Request),
  MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_member_array,  // message members
  MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_type_support_handle = {
  0,
  &MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService_Request)() {
  if (!MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_type_support_handle.typesupport_identifier) {
    MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorService_Request__rosidl_typesupport_introspection_c__MotorService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "stm_interfaces/srv/detail/motor_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "stm_interfaces/srv/detail/motor_service__functions.h"
// already included above
// #include "stm_interfaces/srv/detail/motor_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm_interfaces__srv__MotorService_Response__init(message_memory);
}

void MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_fini_function(void * message_memory)
{
  stm_interfaces__srv__MotorService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm_interfaces__srv__MotorService_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_members = {
  "stm_interfaces__srv",  // message namespace
  "MotorService_Response",  // message name
  1,  // number of fields
  sizeof(stm_interfaces__srv__MotorService_Response),
  MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_member_array,  // message members
  MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_type_support_handle = {
  0,
  &MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService_Response)() {
  if (!MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_type_support_handle.typesupport_identifier) {
    MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorService_Response__rosidl_typesupport_introspection_c__MotorService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "stm_interfaces/srv/detail/motor_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_members = {
  "stm_interfaces__srv",  // service namespace
  "MotorService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_Request_message_type_support_handle,
  NULL  // response message
  // stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_Response_message_type_support_handle
};

static rosidl_service_type_support_t stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_type_support_handle = {
  0,
  &stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService)() {
  if (!stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_type_support_handle.typesupport_identifier) {
    stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm_interfaces, srv, MotorService_Response)()->data;
  }

  return &stm_interfaces__srv__detail__motor_service__rosidl_typesupport_introspection_c__MotorService_service_type_support_handle;
}

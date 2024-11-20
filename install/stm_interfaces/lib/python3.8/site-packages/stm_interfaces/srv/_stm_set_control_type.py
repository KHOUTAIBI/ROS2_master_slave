# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm_interfaces:srv/STMSetControlType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_STMSetControlType_Request(type):
    """Metaclass of message 'STMSetControlType_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('stm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stm_interfaces.srv.STMSetControlType_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stm_set_control_type__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stm_set_control_type__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stm_set_control_type__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stm_set_control_type__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stm_set_control_type__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class STMSetControlType_Request(metaclass=Metaclass_STMSetControlType_Request):
    """Message class 'STMSetControlType_Request'."""

    __slots__ = [
        '_control_type',
        '_kp',
        '_kd',
    ]

    _fields_and_field_types = {
        'control_type': 'int32',
        'kp': 'double',
        'kd': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.control_type = kwargs.get('control_type', int())
        self.kp = kwargs.get('kp', float())
        self.kd = kwargs.get('kd', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.control_type != other.control_type:
            return False
        if self.kp != other.kp:
            return False
        if self.kd != other.kd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def control_type(self):
        """Message field 'control_type'."""
        return self._control_type

    @control_type.setter
    def control_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'control_type' field must be an integer in [-2147483648, 2147483647]"
        self._control_type = value

    @property
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp' field must be of type 'float'"
        self._kp = value

    @property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kd' field must be of type 'float'"
        self._kd = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_STMSetControlType_Response(type):
    """Metaclass of message 'STMSetControlType_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('stm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stm_interfaces.srv.STMSetControlType_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stm_set_control_type__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stm_set_control_type__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stm_set_control_type__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stm_set_control_type__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stm_set_control_type__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class STMSetControlType_Response(metaclass=Metaclass_STMSetControlType_Response):
    """Message class 'STMSetControlType_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_STMSetControlType(type):
    """Metaclass of service 'STMSetControlType'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('stm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stm_interfaces.srv.STMSetControlType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__stm_set_control_type

            from stm_interfaces.srv import _stm_set_control_type
            if _stm_set_control_type.Metaclass_STMSetControlType_Request._TYPE_SUPPORT is None:
                _stm_set_control_type.Metaclass_STMSetControlType_Request.__import_type_support__()
            if _stm_set_control_type.Metaclass_STMSetControlType_Response._TYPE_SUPPORT is None:
                _stm_set_control_type.Metaclass_STMSetControlType_Response.__import_type_support__()


class STMSetControlType(metaclass=Metaclass_STMSetControlType):
    from stm_interfaces.srv._stm_set_control_type import STMSetControlType_Request as Request
    from stm_interfaces.srv._stm_set_control_type import STMSetControlType_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

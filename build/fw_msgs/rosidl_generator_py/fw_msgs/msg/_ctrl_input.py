# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fw_msgs:msg/CtrlInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CtrlInput(type):
    """Metaclass of message 'CtrlInput'."""

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
            module = import_type_support('fw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fw_msgs.msg.CtrlInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ctrl_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ctrl_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ctrl_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ctrl_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ctrl_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CtrlInput(metaclass=Metaclass_CtrlInput):
    """Message class 'CtrlInput'."""

    __slots__ = [
        '_ail',
        '_elev',
        '_thr',
        '_rud',
        '_aux1',
        '_aux2',
    ]

    _fields_and_field_types = {
        'ail': 'float',
        'elev': 'float',
        'thr': 'float',
        'rud': 'float',
        'aux1': 'float',
        'aux2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ail = kwargs.get('ail', float())
        self.elev = kwargs.get('elev', float())
        self.thr = kwargs.get('thr', float())
        self.rud = kwargs.get('rud', float())
        self.aux1 = kwargs.get('aux1', float())
        self.aux2 = kwargs.get('aux2', float())

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
        if self.ail != other.ail:
            return False
        if self.elev != other.elev:
            return False
        if self.thr != other.thr:
            return False
        if self.rud != other.rud:
            return False
        if self.aux1 != other.aux1:
            return False
        if self.aux2 != other.aux2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ail(self):
        """Message field 'ail'."""
        return self._ail

    @ail.setter
    def ail(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ail' field must be of type 'float'"
        self._ail = value

    @property
    def elev(self):
        """Message field 'elev'."""
        return self._elev

    @elev.setter
    def elev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elev' field must be of type 'float'"
        self._elev = value

    @property
    def thr(self):
        """Message field 'thr'."""
        return self._thr

    @thr.setter
    def thr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thr' field must be of type 'float'"
        self._thr = value

    @property
    def rud(self):
        """Message field 'rud'."""
        return self._rud

    @rud.setter
    def rud(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rud' field must be of type 'float'"
        self._rud = value

    @property
    def aux1(self):
        """Message field 'aux1'."""
        return self._aux1

    @aux1.setter
    def aux1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aux1' field must be of type 'float'"
        self._aux1 = value

    @property
    def aux2(self):
        """Message field 'aux2'."""
        return self._aux2

    @aux2.setter
    def aux2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aux2' field must be of type 'float'"
        self._aux2 = value

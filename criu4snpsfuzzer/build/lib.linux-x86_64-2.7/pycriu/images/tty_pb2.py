# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tty.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import opts_pb2
import fown_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='tty.proto',
  package='',
  serialized_pb=_b('\n\ttty.proto\x1a\nopts.proto\x1a\nfown.proto\"U\n\rwinsize_entry\x12\x0e\n\x06ws_row\x18\x01 \x02(\r\x12\x0e\n\x06ws_col\x18\x02 \x02(\r\x12\x11\n\tws_xpixel\x18\x03 \x02(\r\x12\x11\n\tws_ypixel\x18\x04 \x02(\r\"\x95\x01\n\rtermios_entry\x12\x0f\n\x07\x63_iflag\x18\x01 \x02(\r\x12\x0f\n\x07\x63_oflag\x18\x02 \x02(\r\x12\x0f\n\x07\x63_cflag\x18\x03 \x02(\r\x12\x0f\n\x07\x63_lflag\x18\x04 \x02(\r\x12\x0e\n\x06\x63_line\x18\x05 \x02(\r\x12\x10\n\x08\x63_ispeed\x18\x06 \x02(\r\x12\x10\n\x08\x63_ospeed\x18\x07 \x02(\r\x12\x0c\n\x04\x63_cc\x18\x08 \x03(\r\"\x1e\n\rtty_pty_entry\x12\r\n\x05index\x18\x01 \x02(\r\".\n\x0etty_data_entry\x12\x0e\n\x06tty_id\x18\x01 \x02(\r\x12\x0c\n\x04\x64\x61ta\x18\x02 \x02(\x0c\"\xc3\x02\n\x0etty_info_entry\x12\n\n\x02id\x18\x01 \x02(\r\x12\x16\n\x04type\x18\x02 \x02(\x0e\x32\x08.TtyType\x12\x0e\n\x06locked\x18\x03 \x02(\x08\x12\x11\n\texclusive\x18\x04 \x02(\x08\x12\x13\n\x0bpacket_mode\x18\x05 \x02(\x08\x12\x0b\n\x03sid\x18\x06 \x02(\r\x12\x0c\n\x04pgrp\x18\x07 \x02(\r\x12\x0c\n\x04rdev\x18\x08 \x02(\r\x12\x1f\n\x07termios\x18\t \x01(\x0b\x32\x0e.termios_entry\x12&\n\x0etermios_locked\x18\n \x01(\x0b\x32\x0e.termios_entry\x12\x1f\n\x07winsize\x18\x0b \x01(\x0b\x32\x0e.winsize_entry\x12\x1b\n\x03pty\x18\x0c \x01(\x0b\x32\x0e.tty_pty_entry\x12\x0b\n\x03\x64\x65v\x18\r \x01(\r\x12\x0b\n\x03uid\x18\x0e \x01(\r\x12\x0b\n\x03gid\x18\x0f \x01(\r\"s\n\x0etty_file_entry\x12\n\n\x02id\x18\x01 \x02(\r\x12\x13\n\x0btty_info_id\x18\x02 \x02(\r\x12\x14\n\x05\x66lags\x18\x03 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x19\n\x04\x66own\x18\x04 \x02(\x0b\x32\x0b.fown_entry\x12\x0f\n\x07regf_id\x18\x06 \x01(\r*W\n\x07TtyType\x12\x0b\n\x07UNKNOWN\x10\x00\x12\x07\n\x03PTY\x10\x01\x12\x0b\n\x07\x43ONSOLE\x10\x02\x12\x06\n\x02VT\x10\x03\x12\x08\n\x04\x43TTY\x10\x04\x12\x0b\n\x07\x45XT_TTY\x10\x05\x12\n\n\x06SERIAL\x10\x06')
  ,
  dependencies=[opts_pb2.DESCRIPTOR,fown_pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

_TTYTYPE = _descriptor.EnumDescriptor(
  name='TtyType',
  full_name='TtyType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PTY', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONSOLE', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='VT', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CTTY', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXT_TTY', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SERIAL', index=6, number=6,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=799,
  serialized_end=886,
)
_sym_db.RegisterEnumDescriptor(_TTYTYPE)

TtyType = enum_type_wrapper.EnumTypeWrapper(_TTYTYPE)
UNKNOWN = 0
PTY = 1
CONSOLE = 2
VT = 3
CTTY = 4
EXT_TTY = 5
SERIAL = 6



_WINSIZE_ENTRY = _descriptor.Descriptor(
  name='winsize_entry',
  full_name='winsize_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ws_row', full_name='winsize_entry.ws_row', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ws_col', full_name='winsize_entry.ws_col', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ws_xpixel', full_name='winsize_entry.ws_xpixel', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ws_ypixel', full_name='winsize_entry.ws_ypixel', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=37,
  serialized_end=122,
)


_TERMIOS_ENTRY = _descriptor.Descriptor(
  name='termios_entry',
  full_name='termios_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='c_iflag', full_name='termios_entry.c_iflag', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_oflag', full_name='termios_entry.c_oflag', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_cflag', full_name='termios_entry.c_cflag', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_lflag', full_name='termios_entry.c_lflag', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_line', full_name='termios_entry.c_line', index=4,
      number=5, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_ispeed', full_name='termios_entry.c_ispeed', index=5,
      number=6, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_ospeed', full_name='termios_entry.c_ospeed', index=6,
      number=7, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='c_cc', full_name='termios_entry.c_cc', index=7,
      number=8, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=125,
  serialized_end=274,
)


_TTY_PTY_ENTRY = _descriptor.Descriptor(
  name='tty_pty_entry',
  full_name='tty_pty_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='index', full_name='tty_pty_entry.index', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=276,
  serialized_end=306,
)


_TTY_DATA_ENTRY = _descriptor.Descriptor(
  name='tty_data_entry',
  full_name='tty_data_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tty_id', full_name='tty_data_entry.tty_id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='tty_data_entry.data', index=1,
      number=2, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=308,
  serialized_end=354,
)


_TTY_INFO_ENTRY = _descriptor.Descriptor(
  name='tty_info_entry',
  full_name='tty_info_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='tty_info_entry.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='tty_info_entry.type', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='locked', full_name='tty_info_entry.locked', index=2,
      number=3, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exclusive', full_name='tty_info_entry.exclusive', index=3,
      number=4, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='packet_mode', full_name='tty_info_entry.packet_mode', index=4,
      number=5, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sid', full_name='tty_info_entry.sid', index=5,
      number=6, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pgrp', full_name='tty_info_entry.pgrp', index=6,
      number=7, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rdev', full_name='tty_info_entry.rdev', index=7,
      number=8, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='termios', full_name='tty_info_entry.termios', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='termios_locked', full_name='tty_info_entry.termios_locked', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='winsize', full_name='tty_info_entry.winsize', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pty', full_name='tty_info_entry.pty', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='dev', full_name='tty_info_entry.dev', index=12,
      number=13, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='uid', full_name='tty_info_entry.uid', index=13,
      number=14, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gid', full_name='tty_info_entry.gid', index=14,
      number=15, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=357,
  serialized_end=680,
)


_TTY_FILE_ENTRY = _descriptor.Descriptor(
  name='tty_file_entry',
  full_name='tty_file_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='tty_file_entry.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tty_info_id', full_name='tty_file_entry.tty_info_id', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flags', full_name='tty_file_entry.flags', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='fown', full_name='tty_file_entry.fown', index=3,
      number=4, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='regf_id', full_name='tty_file_entry.regf_id', index=4,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=682,
  serialized_end=797,
)

_TTY_INFO_ENTRY.fields_by_name['type'].enum_type = _TTYTYPE
_TTY_INFO_ENTRY.fields_by_name['termios'].message_type = _TERMIOS_ENTRY
_TTY_INFO_ENTRY.fields_by_name['termios_locked'].message_type = _TERMIOS_ENTRY
_TTY_INFO_ENTRY.fields_by_name['winsize'].message_type = _WINSIZE_ENTRY
_TTY_INFO_ENTRY.fields_by_name['pty'].message_type = _TTY_PTY_ENTRY
_TTY_FILE_ENTRY.fields_by_name['fown'].message_type = fown_pb2._FOWN_ENTRY
DESCRIPTOR.message_types_by_name['winsize_entry'] = _WINSIZE_ENTRY
DESCRIPTOR.message_types_by_name['termios_entry'] = _TERMIOS_ENTRY
DESCRIPTOR.message_types_by_name['tty_pty_entry'] = _TTY_PTY_ENTRY
DESCRIPTOR.message_types_by_name['tty_data_entry'] = _TTY_DATA_ENTRY
DESCRIPTOR.message_types_by_name['tty_info_entry'] = _TTY_INFO_ENTRY
DESCRIPTOR.message_types_by_name['tty_file_entry'] = _TTY_FILE_ENTRY
DESCRIPTOR.enum_types_by_name['TtyType'] = _TTYTYPE

winsize_entry = _reflection.GeneratedProtocolMessageType('winsize_entry', (_message.Message,), dict(
  DESCRIPTOR = _WINSIZE_ENTRY,
  __module__ = 'tty_pb2'
  # @@protoc_insertion_point(class_scope:winsize_entry)
  ))
_sym_db.RegisterMessage(winsize_entry)

termios_entry = _reflection.GeneratedProtocolMessageType('termios_entry', (_message.Message,), dict(
  DESCRIPTOR = _TERMIOS_ENTRY,
  __module__ = 'tty_pb2'
  # @@protoc_insertion_point(class_scope:termios_entry)
  ))
_sym_db.RegisterMessage(termios_entry)

tty_pty_entry = _reflection.GeneratedProtocolMessageType('tty_pty_entry', (_message.Message,), dict(
  DESCRIPTOR = _TTY_PTY_ENTRY,
  __module__ = 'tty_pb2'
  # @@protoc_insertion_point(class_scope:tty_pty_entry)
  ))
_sym_db.RegisterMessage(tty_pty_entry)

tty_data_entry = _reflection.GeneratedProtocolMessageType('tty_data_entry', (_message.Message,), dict(
  DESCRIPTOR = _TTY_DATA_ENTRY,
  __module__ = 'tty_pb2'
  # @@protoc_insertion_point(class_scope:tty_data_entry)
  ))
_sym_db.RegisterMessage(tty_data_entry)

tty_info_entry = _reflection.GeneratedProtocolMessageType('tty_info_entry', (_message.Message,), dict(
  DESCRIPTOR = _TTY_INFO_ENTRY,
  __module__ = 'tty_pb2'
  # @@protoc_insertion_point(class_scope:tty_info_entry)
  ))
_sym_db.RegisterMessage(tty_info_entry)

tty_file_entry = _reflection.GeneratedProtocolMessageType('tty_file_entry', (_message.Message,), dict(
  DESCRIPTOR = _TTY_FILE_ENTRY,
  __module__ = 'tty_pb2'
  # @@protoc_insertion_point(class_scope:tty_file_entry)
  ))
_sym_db.RegisterMessage(tty_file_entry)


_TTY_FILE_ENTRY.fields_by_name['flags'].has_options = True
_TTY_FILE_ENTRY.fields_by_name['flags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
# @@protoc_insertion_point(module_scope)

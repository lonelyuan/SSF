# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: seccomp.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='seccomp.proto',
  package='',
  serialized_pb=_b('\n\rseccomp.proto\"=\n\x0eseccomp_filter\x12\x0e\n\x06\x66ilter\x18\x01 \x02(\x0c\x12\x0c\n\x04prev\x18\x02 \x01(\r\x12\r\n\x05\x66lags\x18\x03 \x01(\r\"9\n\rseccomp_entry\x12(\n\x0fseccomp_filters\x18\x01 \x03(\x0b\x32\x0f.seccomp_filter')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_SECCOMP_FILTER = _descriptor.Descriptor(
  name='seccomp_filter',
  full_name='seccomp_filter',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='filter', full_name='seccomp_filter.filter', index=0,
      number=1, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='prev', full_name='seccomp_filter.prev', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flags', full_name='seccomp_filter.flags', index=2,
      number=3, type=13, cpp_type=3, label=1,
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
  serialized_start=17,
  serialized_end=78,
)


_SECCOMP_ENTRY = _descriptor.Descriptor(
  name='seccomp_entry',
  full_name='seccomp_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='seccomp_filters', full_name='seccomp_entry.seccomp_filters', index=0,
      number=1, type=11, cpp_type=10, label=3,
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
  serialized_start=80,
  serialized_end=137,
)

_SECCOMP_ENTRY.fields_by_name['seccomp_filters'].message_type = _SECCOMP_FILTER
DESCRIPTOR.message_types_by_name['seccomp_filter'] = _SECCOMP_FILTER
DESCRIPTOR.message_types_by_name['seccomp_entry'] = _SECCOMP_ENTRY

seccomp_filter = _reflection.GeneratedProtocolMessageType('seccomp_filter', (_message.Message,), dict(
  DESCRIPTOR = _SECCOMP_FILTER,
  __module__ = 'seccomp_pb2'
  # @@protoc_insertion_point(class_scope:seccomp_filter)
  ))
_sym_db.RegisterMessage(seccomp_filter)

seccomp_entry = _reflection.GeneratedProtocolMessageType('seccomp_entry', (_message.Message,), dict(
  DESCRIPTOR = _SECCOMP_ENTRY,
  __module__ = 'seccomp_pb2'
  # @@protoc_insertion_point(class_scope:seccomp_entry)
  ))
_sym_db.RegisterMessage(seccomp_entry)


# @@protoc_insertion_point(module_scope)
/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: mm.proto */

#ifndef PROTOBUF_C_mm_2eproto__INCLUDED
#define PROTOBUF_C_mm_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "opts.pb-c.h"
#include "vma.pb-c.h"

typedef struct _AioRingEntry AioRingEntry;
typedef struct _MmEntry MmEntry;


/* --- enums --- */


/* --- messages --- */

struct  _AioRingEntry
{
  ProtobufCMessage base;
  uint64_t id;
  uint32_t nr_req;
  uint32_t ring_len;
};
#define AIO_RING_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aio_ring_entry__descriptor) \
    , 0, 0, 0 }


struct  _MmEntry
{
  ProtobufCMessage base;
  uint64_t mm_start_code;
  uint64_t mm_end_code;
  uint64_t mm_start_data;
  uint64_t mm_end_data;
  uint64_t mm_start_stack;
  uint64_t mm_start_brk;
  uint64_t mm_brk;
  uint64_t mm_arg_start;
  uint64_t mm_arg_end;
  uint64_t mm_env_start;
  uint64_t mm_env_end;
  uint32_t exe_file_id;
  size_t n_mm_saved_auxv;
  uint64_t *mm_saved_auxv;
  size_t n_vmas;
  VmaEntry **vmas;
  protobuf_c_boolean has_dumpable;
  int32_t dumpable;
  size_t n_aios;
  AioRingEntry **aios;
  protobuf_c_boolean has_thp_disabled;
  protobuf_c_boolean thp_disabled;
};
#define MM_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&mm_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0,NULL, 0,0, 0,NULL, 0,0 }


/* AioRingEntry methods */
void   aio_ring_entry__init
                     (AioRingEntry         *message);
size_t aio_ring_entry__get_packed_size
                     (const AioRingEntry   *message);
size_t aio_ring_entry__pack
                     (const AioRingEntry   *message,
                      uint8_t             *out);
size_t aio_ring_entry__pack_to_buffer
                     (const AioRingEntry   *message,
                      ProtobufCBuffer     *buffer);
AioRingEntry *
       aio_ring_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   aio_ring_entry__free_unpacked
                     (AioRingEntry *message,
                      ProtobufCAllocator *allocator);
/* MmEntry methods */
void   mm_entry__init
                     (MmEntry         *message);
size_t mm_entry__get_packed_size
                     (const MmEntry   *message);
size_t mm_entry__pack
                     (const MmEntry   *message,
                      uint8_t             *out);
size_t mm_entry__pack_to_buffer
                     (const MmEntry   *message,
                      ProtobufCBuffer     *buffer);
MmEntry *
       mm_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   mm_entry__free_unpacked
                     (MmEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AioRingEntry_Closure)
                 (const AioRingEntry *message,
                  void *closure_data);
typedef void (*MmEntry_Closure)
                 (const MmEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor aio_ring_entry__descriptor;
extern const ProtobufCMessageDescriptor mm_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_mm_2eproto__INCLUDED */

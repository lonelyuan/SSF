/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: remote-image.proto */

#ifndef PROTOBUF_C_remote_2dimage_2eproto__INCLUDED
#define PROTOBUF_C_remote_2dimage_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _LocalImageEntry LocalImageEntry;
typedef struct _RemoteImageEntry RemoteImageEntry;
typedef struct _LocalImageReplyEntry LocalImageReplyEntry;
typedef struct _SnapshotIdEntry SnapshotIdEntry;


/* --- enums --- */


/* --- messages --- */

struct  _LocalImageEntry
{
  ProtobufCMessage base;
  char *name;
  char *snapshot_id;
  uint32_t open_mode;
};
#define LOCAL_IMAGE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&local_image_entry__descriptor) \
    , NULL, NULL, 0 }


struct  _RemoteImageEntry
{
  ProtobufCMessage base;
  char *name;
  char *snapshot_id;
  uint32_t open_mode;
  uint64_t size;
};
#define REMOTE_IMAGE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&remote_image_entry__descriptor) \
    , NULL, NULL, 0, 0 }


struct  _LocalImageReplyEntry
{
  ProtobufCMessage base;
  uint32_t error;
};
#define LOCAL_IMAGE_REPLY_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&local_image_reply_entry__descriptor) \
    , 0 }


struct  _SnapshotIdEntry
{
  ProtobufCMessage base;
  char *snapshot_id;
};
#define SNAPSHOT_ID_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&snapshot_id_entry__descriptor) \
    , NULL }


/* LocalImageEntry methods */
void   local_image_entry__init
                     (LocalImageEntry         *message);
size_t local_image_entry__get_packed_size
                     (const LocalImageEntry   *message);
size_t local_image_entry__pack
                     (const LocalImageEntry   *message,
                      uint8_t             *out);
size_t local_image_entry__pack_to_buffer
                     (const LocalImageEntry   *message,
                      ProtobufCBuffer     *buffer);
LocalImageEntry *
       local_image_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   local_image_entry__free_unpacked
                     (LocalImageEntry *message,
                      ProtobufCAllocator *allocator);
/* RemoteImageEntry methods */
void   remote_image_entry__init
                     (RemoteImageEntry         *message);
size_t remote_image_entry__get_packed_size
                     (const RemoteImageEntry   *message);
size_t remote_image_entry__pack
                     (const RemoteImageEntry   *message,
                      uint8_t             *out);
size_t remote_image_entry__pack_to_buffer
                     (const RemoteImageEntry   *message,
                      ProtobufCBuffer     *buffer);
RemoteImageEntry *
       remote_image_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   remote_image_entry__free_unpacked
                     (RemoteImageEntry *message,
                      ProtobufCAllocator *allocator);
/* LocalImageReplyEntry methods */
void   local_image_reply_entry__init
                     (LocalImageReplyEntry         *message);
size_t local_image_reply_entry__get_packed_size
                     (const LocalImageReplyEntry   *message);
size_t local_image_reply_entry__pack
                     (const LocalImageReplyEntry   *message,
                      uint8_t             *out);
size_t local_image_reply_entry__pack_to_buffer
                     (const LocalImageReplyEntry   *message,
                      ProtobufCBuffer     *buffer);
LocalImageReplyEntry *
       local_image_reply_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   local_image_reply_entry__free_unpacked
                     (LocalImageReplyEntry *message,
                      ProtobufCAllocator *allocator);
/* SnapshotIdEntry methods */
void   snapshot_id_entry__init
                     (SnapshotIdEntry         *message);
size_t snapshot_id_entry__get_packed_size
                     (const SnapshotIdEntry   *message);
size_t snapshot_id_entry__pack
                     (const SnapshotIdEntry   *message,
                      uint8_t             *out);
size_t snapshot_id_entry__pack_to_buffer
                     (const SnapshotIdEntry   *message,
                      ProtobufCBuffer     *buffer);
SnapshotIdEntry *
       snapshot_id_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   snapshot_id_entry__free_unpacked
                     (SnapshotIdEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*LocalImageEntry_Closure)
                 (const LocalImageEntry *message,
                  void *closure_data);
typedef void (*RemoteImageEntry_Closure)
                 (const RemoteImageEntry *message,
                  void *closure_data);
typedef void (*LocalImageReplyEntry_Closure)
                 (const LocalImageReplyEntry *message,
                  void *closure_data);
typedef void (*SnapshotIdEntry_Closure)
                 (const SnapshotIdEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor local_image_entry__descriptor;
extern const ProtobufCMessageDescriptor remote_image_entry__descriptor;
extern const ProtobufCMessageDescriptor local_image_reply_entry__descriptor;
extern const ProtobufCMessageDescriptor snapshot_id_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_remote_2dimage_2eproto__INCLUDED */
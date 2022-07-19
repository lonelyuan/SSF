/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fsnotify.proto */

#ifndef PROTOBUF_C_fsnotify_2eproto__INCLUDED
#define PROTOBUF_C_fsnotify_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "opts.pb-c.h"
#include "fh.pb-c.h"
#include "fown.pb-c.h"

typedef struct _InotifyWdEntry InotifyWdEntry;
typedef struct _InotifyFileEntry InotifyFileEntry;
typedef struct _FanotifyInodeMarkEntry FanotifyInodeMarkEntry;
typedef struct _FanotifyMountMarkEntry FanotifyMountMarkEntry;
typedef struct _FanotifyMarkEntry FanotifyMarkEntry;
typedef struct _FanotifyFileEntry FanotifyFileEntry;


/* --- enums --- */

typedef enum _MarkType {
  MARK_TYPE__INODE = 1,
  MARK_TYPE__MOUNT = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARK_TYPE)
} MarkType;

/* --- messages --- */

struct  _InotifyWdEntry
{
  ProtobufCMessage base;
  uint32_t id;
  uint64_t i_ino;
  uint32_t mask;
  uint32_t ignored_mask;
  uint32_t s_dev;
  uint32_t wd;
  FhEntry *f_handle;
};
#define INOTIFY_WD_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&inotify_wd_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, NULL }


struct  _InotifyFileEntry
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t flags;
  FownEntry *fown;
  size_t n_wd;
  InotifyWdEntry **wd;
};
#define INOTIFY_FILE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&inotify_file_entry__descriptor) \
    , 0, 0, NULL, 0,NULL }


struct  _FanotifyInodeMarkEntry
{
  ProtobufCMessage base;
  uint64_t i_ino;
  FhEntry *f_handle;
};
#define FANOTIFY_INODE_MARK_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&fanotify_inode_mark_entry__descriptor) \
    , 0, NULL }


struct  _FanotifyMountMarkEntry
{
  ProtobufCMessage base;
  uint32_t mnt_id;
  char *path;
};
#define FANOTIFY_MOUNT_MARK_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&fanotify_mount_mark_entry__descriptor) \
    , 0, NULL }


struct  _FanotifyMarkEntry
{
  ProtobufCMessage base;
  uint32_t id;
  MarkType type;
  uint32_t mflags;
  uint32_t mask;
  uint32_t ignored_mask;
  uint32_t s_dev;
  FanotifyInodeMarkEntry *ie;
  FanotifyMountMarkEntry *me;
};
#define FANOTIFY_MARK_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&fanotify_mark_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, NULL, NULL }


struct  _FanotifyFileEntry
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t flags;
  FownEntry *fown;
  uint32_t faflags;
  uint32_t evflags;
  size_t n_mark;
  FanotifyMarkEntry **mark;
};
#define FANOTIFY_FILE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&fanotify_file_entry__descriptor) \
    , 0, 0, NULL, 0, 0, 0,NULL }


/* InotifyWdEntry methods */
void   inotify_wd_entry__init
                     (InotifyWdEntry         *message);
size_t inotify_wd_entry__get_packed_size
                     (const InotifyWdEntry   *message);
size_t inotify_wd_entry__pack
                     (const InotifyWdEntry   *message,
                      uint8_t             *out);
size_t inotify_wd_entry__pack_to_buffer
                     (const InotifyWdEntry   *message,
                      ProtobufCBuffer     *buffer);
InotifyWdEntry *
       inotify_wd_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   inotify_wd_entry__free_unpacked
                     (InotifyWdEntry *message,
                      ProtobufCAllocator *allocator);
/* InotifyFileEntry methods */
void   inotify_file_entry__init
                     (InotifyFileEntry         *message);
size_t inotify_file_entry__get_packed_size
                     (const InotifyFileEntry   *message);
size_t inotify_file_entry__pack
                     (const InotifyFileEntry   *message,
                      uint8_t             *out);
size_t inotify_file_entry__pack_to_buffer
                     (const InotifyFileEntry   *message,
                      ProtobufCBuffer     *buffer);
InotifyFileEntry *
       inotify_file_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   inotify_file_entry__free_unpacked
                     (InotifyFileEntry *message,
                      ProtobufCAllocator *allocator);
/* FanotifyInodeMarkEntry methods */
void   fanotify_inode_mark_entry__init
                     (FanotifyInodeMarkEntry         *message);
size_t fanotify_inode_mark_entry__get_packed_size
                     (const FanotifyInodeMarkEntry   *message);
size_t fanotify_inode_mark_entry__pack
                     (const FanotifyInodeMarkEntry   *message,
                      uint8_t             *out);
size_t fanotify_inode_mark_entry__pack_to_buffer
                     (const FanotifyInodeMarkEntry   *message,
                      ProtobufCBuffer     *buffer);
FanotifyInodeMarkEntry *
       fanotify_inode_mark_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   fanotify_inode_mark_entry__free_unpacked
                     (FanotifyInodeMarkEntry *message,
                      ProtobufCAllocator *allocator);
/* FanotifyMountMarkEntry methods */
void   fanotify_mount_mark_entry__init
                     (FanotifyMountMarkEntry         *message);
size_t fanotify_mount_mark_entry__get_packed_size
                     (const FanotifyMountMarkEntry   *message);
size_t fanotify_mount_mark_entry__pack
                     (const FanotifyMountMarkEntry   *message,
                      uint8_t             *out);
size_t fanotify_mount_mark_entry__pack_to_buffer
                     (const FanotifyMountMarkEntry   *message,
                      ProtobufCBuffer     *buffer);
FanotifyMountMarkEntry *
       fanotify_mount_mark_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   fanotify_mount_mark_entry__free_unpacked
                     (FanotifyMountMarkEntry *message,
                      ProtobufCAllocator *allocator);
/* FanotifyMarkEntry methods */
void   fanotify_mark_entry__init
                     (FanotifyMarkEntry         *message);
size_t fanotify_mark_entry__get_packed_size
                     (const FanotifyMarkEntry   *message);
size_t fanotify_mark_entry__pack
                     (const FanotifyMarkEntry   *message,
                      uint8_t             *out);
size_t fanotify_mark_entry__pack_to_buffer
                     (const FanotifyMarkEntry   *message,
                      ProtobufCBuffer     *buffer);
FanotifyMarkEntry *
       fanotify_mark_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   fanotify_mark_entry__free_unpacked
                     (FanotifyMarkEntry *message,
                      ProtobufCAllocator *allocator);
/* FanotifyFileEntry methods */
void   fanotify_file_entry__init
                     (FanotifyFileEntry         *message);
size_t fanotify_file_entry__get_packed_size
                     (const FanotifyFileEntry   *message);
size_t fanotify_file_entry__pack
                     (const FanotifyFileEntry   *message,
                      uint8_t             *out);
size_t fanotify_file_entry__pack_to_buffer
                     (const FanotifyFileEntry   *message,
                      ProtobufCBuffer     *buffer);
FanotifyFileEntry *
       fanotify_file_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   fanotify_file_entry__free_unpacked
                     (FanotifyFileEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*InotifyWdEntry_Closure)
                 (const InotifyWdEntry *message,
                  void *closure_data);
typedef void (*InotifyFileEntry_Closure)
                 (const InotifyFileEntry *message,
                  void *closure_data);
typedef void (*FanotifyInodeMarkEntry_Closure)
                 (const FanotifyInodeMarkEntry *message,
                  void *closure_data);
typedef void (*FanotifyMountMarkEntry_Closure)
                 (const FanotifyMountMarkEntry *message,
                  void *closure_data);
typedef void (*FanotifyMarkEntry_Closure)
                 (const FanotifyMarkEntry *message,
                  void *closure_data);
typedef void (*FanotifyFileEntry_Closure)
                 (const FanotifyFileEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    mark_type__descriptor;
extern const ProtobufCMessageDescriptor inotify_wd_entry__descriptor;
extern const ProtobufCMessageDescriptor inotify_file_entry__descriptor;
extern const ProtobufCMessageDescriptor fanotify_inode_mark_entry__descriptor;
extern const ProtobufCMessageDescriptor fanotify_mount_mark_entry__descriptor;
extern const ProtobufCMessageDescriptor fanotify_mark_entry__descriptor;
extern const ProtobufCMessageDescriptor fanotify_file_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_fsnotify_2eproto__INCLUDED */

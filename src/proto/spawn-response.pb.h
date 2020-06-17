// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spawn-response.proto

#ifndef PROTOBUF_INCLUDED_spawn_2dresponse_2eproto
#define PROTOBUF_INCLUDED_spawn_2dresponse_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_spawn_2dresponse_2eproto 

namespace protobuf_spawn_2dresponse_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_spawn_2dresponse_2eproto
namespace multiplayer {
class SpawnResponse;
class SpawnResponseDefaultTypeInternal;
extern SpawnResponseDefaultTypeInternal _SpawnResponse_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::SpawnResponse* Arena::CreateMaybeMessage<::multiplayer::SpawnResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class SpawnResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.SpawnResponse) */ {
 public:
  SpawnResponse();
  virtual ~SpawnResponse();

  SpawnResponse(const SpawnResponse& from);

  inline SpawnResponse& operator=(const SpawnResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpawnResponse(SpawnResponse&& from) noexcept
    : SpawnResponse() {
    *this = ::std::move(from);
  }

  inline SpawnResponse& operator=(SpawnResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SpawnResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SpawnResponse* internal_default_instance() {
    return reinterpret_cast<const SpawnResponse*>(
               &_SpawnResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SpawnResponse* other);
  friend void swap(SpawnResponse& a, SpawnResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpawnResponse* New() const final {
    return CreateMaybeMessage<SpawnResponse>(NULL);
  }

  SpawnResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SpawnResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SpawnResponse& from);
  void MergeFrom(const SpawnResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SpawnResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string assignedObjectId = 1;
  void clear_assignedobjectid();
  static const int kAssignedObjectIdFieldNumber = 1;
  const ::std::string& assignedobjectid() const;
  void set_assignedobjectid(const ::std::string& value);
  #if LANG_CXX11
  void set_assignedobjectid(::std::string&& value);
  #endif
  void set_assignedobjectid(const char* value);
  void set_assignedobjectid(const char* value, size_t size);
  ::std::string* mutable_assignedobjectid();
  ::std::string* release_assignedobjectid();
  void set_allocated_assignedobjectid(::std::string* assignedobjectid);

  // string spawnRequestId = 2;
  void clear_spawnrequestid();
  static const int kSpawnRequestIdFieldNumber = 2;
  const ::std::string& spawnrequestid() const;
  void set_spawnrequestid(const ::std::string& value);
  #if LANG_CXX11
  void set_spawnrequestid(::std::string&& value);
  #endif
  void set_spawnrequestid(const char* value);
  void set_spawnrequestid(const char* value, size_t size);
  ::std::string* mutable_spawnrequestid();
  ::std::string* release_spawnrequestid();
  void set_allocated_spawnrequestid(::std::string* spawnrequestid);

  // @@protoc_insertion_point(class_scope:multiplayer.SpawnResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr assignedobjectid_;
  ::google::protobuf::internal::ArenaStringPtr spawnrequestid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_spawn_2dresponse_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpawnResponse

// string assignedObjectId = 1;
inline void SpawnResponse::clear_assignedobjectid() {
  assignedobjectid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SpawnResponse::assignedobjectid() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpawnResponse.assignedObjectId)
  return assignedobjectid_.GetNoArena();
}
inline void SpawnResponse::set_assignedobjectid(const ::std::string& value) {
  
  assignedobjectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:multiplayer.SpawnResponse.assignedObjectId)
}
#if LANG_CXX11
inline void SpawnResponse::set_assignedobjectid(::std::string&& value) {
  
  assignedobjectid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:multiplayer.SpawnResponse.assignedObjectId)
}
#endif
inline void SpawnResponse::set_assignedobjectid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  assignedobjectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:multiplayer.SpawnResponse.assignedObjectId)
}
inline void SpawnResponse::set_assignedobjectid(const char* value, size_t size) {
  
  assignedobjectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:multiplayer.SpawnResponse.assignedObjectId)
}
inline ::std::string* SpawnResponse::mutable_assignedobjectid() {
  
  // @@protoc_insertion_point(field_mutable:multiplayer.SpawnResponse.assignedObjectId)
  return assignedobjectid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SpawnResponse::release_assignedobjectid() {
  // @@protoc_insertion_point(field_release:multiplayer.SpawnResponse.assignedObjectId)
  
  return assignedobjectid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SpawnResponse::set_allocated_assignedobjectid(::std::string* assignedobjectid) {
  if (assignedobjectid != NULL) {
    
  } else {
    
  }
  assignedobjectid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), assignedobjectid);
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpawnResponse.assignedObjectId)
}

// string spawnRequestId = 2;
inline void SpawnResponse::clear_spawnrequestid() {
  spawnrequestid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SpawnResponse::spawnrequestid() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpawnResponse.spawnRequestId)
  return spawnrequestid_.GetNoArena();
}
inline void SpawnResponse::set_spawnrequestid(const ::std::string& value) {
  
  spawnrequestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:multiplayer.SpawnResponse.spawnRequestId)
}
#if LANG_CXX11
inline void SpawnResponse::set_spawnrequestid(::std::string&& value) {
  
  spawnrequestid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:multiplayer.SpawnResponse.spawnRequestId)
}
#endif
inline void SpawnResponse::set_spawnrequestid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  spawnrequestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:multiplayer.SpawnResponse.spawnRequestId)
}
inline void SpawnResponse::set_spawnrequestid(const char* value, size_t size) {
  
  spawnrequestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:multiplayer.SpawnResponse.spawnRequestId)
}
inline ::std::string* SpawnResponse::mutable_spawnrequestid() {
  
  // @@protoc_insertion_point(field_mutable:multiplayer.SpawnResponse.spawnRequestId)
  return spawnrequestid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SpawnResponse::release_spawnrequestid() {
  // @@protoc_insertion_point(field_release:multiplayer.SpawnResponse.spawnRequestId)
  
  return spawnrequestid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SpawnResponse::set_allocated_spawnrequestid(::std::string* spawnrequestid) {
  if (spawnrequestid != NULL) {
    
  } else {
    
  }
  spawnrequestid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), spawnrequestid);
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpawnResponse.spawnRequestId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_spawn_2dresponse_2eproto

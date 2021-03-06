// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spawn-request.proto

#ifndef PROTOBUF_INCLUDED_spawn_2drequest_2eproto
#define PROTOBUF_INCLUDED_spawn_2drequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_spawn_2drequest_2eproto 

namespace protobuf_spawn_2drequest_2eproto {
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
}  // namespace protobuf_spawn_2drequest_2eproto
namespace multiplayer {
class SpawnRequest;
class SpawnRequestDefaultTypeInternal;
extern SpawnRequestDefaultTypeInternal _SpawnRequest_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::SpawnRequest* Arena::CreateMaybeMessage<::multiplayer::SpawnRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class SpawnRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.SpawnRequest) */ {
 public:
  SpawnRequest();
  virtual ~SpawnRequest();

  SpawnRequest(const SpawnRequest& from);

  inline SpawnRequest& operator=(const SpawnRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpawnRequest(SpawnRequest&& from) noexcept
    : SpawnRequest() {
    *this = ::std::move(from);
  }

  inline SpawnRequest& operator=(SpawnRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SpawnRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SpawnRequest* internal_default_instance() {
    return reinterpret_cast<const SpawnRequest*>(
               &_SpawnRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SpawnRequest* other);
  friend void swap(SpawnRequest& a, SpawnRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpawnRequest* New() const final {
    return CreateMaybeMessage<SpawnRequest>(NULL);
  }

  SpawnRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SpawnRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SpawnRequest& from);
  void MergeFrom(const SpawnRequest& from);
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
  void InternalSwap(SpawnRequest* other);
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

  // string nickName = 1;
  void clear_nickname();
  static const int kNickNameFieldNumber = 1;
  const ::std::string& nickname() const;
  void set_nickname(const ::std::string& value);
  #if LANG_CXX11
  void set_nickname(::std::string&& value);
  #endif
  void set_nickname(const char* value);
  void set_nickname(const char* value, size_t size);
  ::std::string* mutable_nickname();
  ::std::string* release_nickname();
  void set_allocated_nickname(::std::string* nickname);

  // @@protoc_insertion_point(class_scope:multiplayer.SpawnRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr nickname_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_spawn_2drequest_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpawnRequest

// string nickName = 1;
inline void SpawnRequest::clear_nickname() {
  nickname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SpawnRequest::nickname() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpawnRequest.nickName)
  return nickname_.GetNoArena();
}
inline void SpawnRequest::set_nickname(const ::std::string& value) {
  
  nickname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:multiplayer.SpawnRequest.nickName)
}
#if LANG_CXX11
inline void SpawnRequest::set_nickname(::std::string&& value) {
  
  nickname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:multiplayer.SpawnRequest.nickName)
}
#endif
inline void SpawnRequest::set_nickname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  nickname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:multiplayer.SpawnRequest.nickName)
}
inline void SpawnRequest::set_nickname(const char* value, size_t size) {
  
  nickname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:multiplayer.SpawnRequest.nickName)
}
inline ::std::string* SpawnRequest::mutable_nickname() {
  
  // @@protoc_insertion_point(field_mutable:multiplayer.SpawnRequest.nickName)
  return nickname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SpawnRequest::release_nickname() {
  // @@protoc_insertion_point(field_release:multiplayer.SpawnRequest.nickName)
  
  return nickname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SpawnRequest::set_allocated_nickname(::std::string* nickname) {
  if (nickname != NULL) {
    
  } else {
    
  }
  nickname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nickname);
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpawnRequest.nickName)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_spawn_2drequest_2eproto

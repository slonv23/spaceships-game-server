// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request-root.proto

#ifndef PROTOBUF_INCLUDED_request_2droot_2eproto
#define PROTOBUF_INCLUDED_request_2droot_2eproto

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
#include "input-action.pb.h"
#include "spawn-request.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_request_2droot_2eproto 

namespace protobuf_request_2droot_2eproto {
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
}  // namespace protobuf_request_2droot_2eproto
namespace multiplayer {
class RequestRoot;
class RequestRootDefaultTypeInternal;
extern RequestRootDefaultTypeInternal _RequestRoot_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::RequestRoot* Arena::CreateMaybeMessage<::multiplayer::RequestRoot>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class RequestRoot : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.RequestRoot) */ {
 public:
  RequestRoot();
  virtual ~RequestRoot();

  RequestRoot(const RequestRoot& from);

  inline RequestRoot& operator=(const RequestRoot& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RequestRoot(RequestRoot&& from) noexcept
    : RequestRoot() {
    *this = ::std::move(from);
  }

  inline RequestRoot& operator=(RequestRoot&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RequestRoot& default_instance();

  enum MessageCase {
    kInputAction = 3,
    kSpawnRequest = 4,
    MESSAGE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RequestRoot* internal_default_instance() {
    return reinterpret_cast<const RequestRoot*>(
               &_RequestRoot_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RequestRoot* other);
  friend void swap(RequestRoot& a, RequestRoot& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RequestRoot* New() const final {
    return CreateMaybeMessage<RequestRoot>(NULL);
  }

  RequestRoot* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RequestRoot>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RequestRoot& from);
  void MergeFrom(const RequestRoot& from);
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
  void InternalSwap(RequestRoot* other);
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

  // int32 requestId = 1;
  void clear_requestid();
  static const int kRequestIdFieldNumber = 1;
  ::google::protobuf::int32 requestid() const;
  void set_requestid(::google::protobuf::int32 value);

  // uint32 requestSentTimestamp = 2;
  void clear_requestsenttimestamp();
  static const int kRequestSentTimestampFieldNumber = 2;
  ::google::protobuf::uint32 requestsenttimestamp() const;
  void set_requestsenttimestamp(::google::protobuf::uint32 value);

  // .multiplayer.InputAction inputAction = 3;
  bool has_inputaction() const;
  void clear_inputaction();
  static const int kInputActionFieldNumber = 3;
  private:
  const ::multiplayer::InputAction& _internal_inputaction() const;
  public:
  const ::multiplayer::InputAction& inputaction() const;
  ::multiplayer::InputAction* release_inputaction();
  ::multiplayer::InputAction* mutable_inputaction();
  void set_allocated_inputaction(::multiplayer::InputAction* inputaction);

  // .multiplayer.SpawnRequest spawnRequest = 4;
  bool has_spawnrequest() const;
  void clear_spawnrequest();
  static const int kSpawnRequestFieldNumber = 4;
  private:
  const ::multiplayer::SpawnRequest& _internal_spawnrequest() const;
  public:
  const ::multiplayer::SpawnRequest& spawnrequest() const;
  ::multiplayer::SpawnRequest* release_spawnrequest();
  ::multiplayer::SpawnRequest* mutable_spawnrequest();
  void set_allocated_spawnrequest(::multiplayer::SpawnRequest* spawnrequest);

  void clear_message();
  MessageCase message_case() const;
  // @@protoc_insertion_point(class_scope:multiplayer.RequestRoot)
 private:
  void set_has_inputaction();
  void set_has_spawnrequest();

  inline bool has_message() const;
  inline void clear_has_message();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 requestid_;
  ::google::protobuf::uint32 requestsenttimestamp_;
  union MessageUnion {
    MessageUnion() {}
    ::multiplayer::InputAction* inputaction_;
    ::multiplayer::SpawnRequest* spawnrequest_;
  } message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_request_2droot_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RequestRoot

// int32 requestId = 1;
inline void RequestRoot::clear_requestid() {
  requestid_ = 0;
}
inline ::google::protobuf::int32 RequestRoot::requestid() const {
  // @@protoc_insertion_point(field_get:multiplayer.RequestRoot.requestId)
  return requestid_;
}
inline void RequestRoot::set_requestid(::google::protobuf::int32 value) {
  
  requestid_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.RequestRoot.requestId)
}

// uint32 requestSentTimestamp = 2;
inline void RequestRoot::clear_requestsenttimestamp() {
  requestsenttimestamp_ = 0u;
}
inline ::google::protobuf::uint32 RequestRoot::requestsenttimestamp() const {
  // @@protoc_insertion_point(field_get:multiplayer.RequestRoot.requestSentTimestamp)
  return requestsenttimestamp_;
}
inline void RequestRoot::set_requestsenttimestamp(::google::protobuf::uint32 value) {
  
  requestsenttimestamp_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.RequestRoot.requestSentTimestamp)
}

// .multiplayer.InputAction inputAction = 3;
inline bool RequestRoot::has_inputaction() const {
  return message_case() == kInputAction;
}
inline void RequestRoot::set_has_inputaction() {
  _oneof_case_[0] = kInputAction;
}
inline const ::multiplayer::InputAction& RequestRoot::_internal_inputaction() const {
  return *message_.inputaction_;
}
inline ::multiplayer::InputAction* RequestRoot::release_inputaction() {
  // @@protoc_insertion_point(field_release:multiplayer.RequestRoot.inputAction)
  if (has_inputaction()) {
    clear_has_message();
      ::multiplayer::InputAction* temp = message_.inputaction_;
    message_.inputaction_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::multiplayer::InputAction& RequestRoot::inputaction() const {
  // @@protoc_insertion_point(field_get:multiplayer.RequestRoot.inputAction)
  return has_inputaction()
      ? *message_.inputaction_
      : *reinterpret_cast< ::multiplayer::InputAction*>(&::multiplayer::_InputAction_default_instance_);
}
inline ::multiplayer::InputAction* RequestRoot::mutable_inputaction() {
  if (!has_inputaction()) {
    clear_message();
    set_has_inputaction();
    message_.inputaction_ = CreateMaybeMessage< ::multiplayer::InputAction >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.RequestRoot.inputAction)
  return message_.inputaction_;
}

// .multiplayer.SpawnRequest spawnRequest = 4;
inline bool RequestRoot::has_spawnrequest() const {
  return message_case() == kSpawnRequest;
}
inline void RequestRoot::set_has_spawnrequest() {
  _oneof_case_[0] = kSpawnRequest;
}
inline const ::multiplayer::SpawnRequest& RequestRoot::_internal_spawnrequest() const {
  return *message_.spawnrequest_;
}
inline ::multiplayer::SpawnRequest* RequestRoot::release_spawnrequest() {
  // @@protoc_insertion_point(field_release:multiplayer.RequestRoot.spawnRequest)
  if (has_spawnrequest()) {
    clear_has_message();
      ::multiplayer::SpawnRequest* temp = message_.spawnrequest_;
    message_.spawnrequest_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::multiplayer::SpawnRequest& RequestRoot::spawnrequest() const {
  // @@protoc_insertion_point(field_get:multiplayer.RequestRoot.spawnRequest)
  return has_spawnrequest()
      ? *message_.spawnrequest_
      : *reinterpret_cast< ::multiplayer::SpawnRequest*>(&::multiplayer::_SpawnRequest_default_instance_);
}
inline ::multiplayer::SpawnRequest* RequestRoot::mutable_spawnrequest() {
  if (!has_spawnrequest()) {
    clear_message();
    set_has_spawnrequest();
    message_.spawnrequest_ = CreateMaybeMessage< ::multiplayer::SpawnRequest >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.RequestRoot.spawnRequest)
  return message_.spawnrequest_;
}

inline bool RequestRoot::has_message() const {
  return message_case() != MESSAGE_NOT_SET;
}
inline void RequestRoot::clear_has_message() {
  _oneof_case_[0] = MESSAGE_NOT_SET;
}
inline RequestRoot::MessageCase RequestRoot::message_case() const {
  return RequestRoot::MessageCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_request_2droot_2eproto

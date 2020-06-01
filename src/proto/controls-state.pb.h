// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: controls-state.proto

#ifndef PROTOBUF_INCLUDED_controls_2dstate_2eproto
#define PROTOBUF_INCLUDED_controls_2dstate_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_controls_2dstate_2eproto 

namespace protobuf_controls_2dstate_2eproto {
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
}  // namespace protobuf_controls_2dstate_2eproto
namespace multiplayer {
class ControlsState;
class ControlsStateDefaultTypeInternal;
extern ControlsStateDefaultTypeInternal _ControlsState_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::ControlsState* Arena::CreateMaybeMessage<::multiplayer::ControlsState>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class ControlsState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.ControlsState) */ {
 public:
  ControlsState();
  virtual ~ControlsState();

  ControlsState(const ControlsState& from);

  inline ControlsState& operator=(const ControlsState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ControlsState(ControlsState&& from) noexcept
    : ControlsState() {
    *this = ::std::move(from);
  }

  inline ControlsState& operator=(ControlsState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ControlsState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ControlsState* internal_default_instance() {
    return reinterpret_cast<const ControlsState*>(
               &_ControlsState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ControlsState* other);
  friend void swap(ControlsState& a, ControlsState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ControlsState* New() const final {
    return CreateMaybeMessage<ControlsState>(NULL);
  }

  ControlsState* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ControlsState>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ControlsState& from);
  void MergeFrom(const ControlsState& from);
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
  void InternalSwap(ControlsState* other);
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

  // int32 msgId = 1;
  void clear_msgid();
  static const int kMsgIdFieldNumber = 1;
  ::google::protobuf::int32 msgid() const;
  void set_msgid(::google::protobuf::int32 value);

  // float yawTarget = 2;
  void clear_yawtarget();
  static const int kYawTargetFieldNumber = 2;
  float yawtarget() const;
  void set_yawtarget(float value);

  // float pitchTarget = 3;
  void clear_pitchtarget();
  static const int kPitchTargetFieldNumber = 3;
  float pitchtarget() const;
  void set_pitchtarget(float value);

  // float rollTarget = 4;
  void clear_rolltarget();
  static const int kRollTargetFieldNumber = 4;
  float rolltarget() const;
  void set_rolltarget(float value);

  // @@protoc_insertion_point(class_scope:multiplayer.ControlsState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 msgid_;
  float yawtarget_;
  float pitchtarget_;
  float rolltarget_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_controls_2dstate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ControlsState

// int32 msgId = 1;
inline void ControlsState::clear_msgid() {
  msgid_ = 0;
}
inline ::google::protobuf::int32 ControlsState::msgid() const {
  // @@protoc_insertion_point(field_get:multiplayer.ControlsState.msgId)
  return msgid_;
}
inline void ControlsState::set_msgid(::google::protobuf::int32 value) {
  
  msgid_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.ControlsState.msgId)
}

// float yawTarget = 2;
inline void ControlsState::clear_yawtarget() {
  yawtarget_ = 0;
}
inline float ControlsState::yawtarget() const {
  // @@protoc_insertion_point(field_get:multiplayer.ControlsState.yawTarget)
  return yawtarget_;
}
inline void ControlsState::set_yawtarget(float value) {
  
  yawtarget_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.ControlsState.yawTarget)
}

// float pitchTarget = 3;
inline void ControlsState::clear_pitchtarget() {
  pitchtarget_ = 0;
}
inline float ControlsState::pitchtarget() const {
  // @@protoc_insertion_point(field_get:multiplayer.ControlsState.pitchTarget)
  return pitchtarget_;
}
inline void ControlsState::set_pitchtarget(float value) {
  
  pitchtarget_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.ControlsState.pitchTarget)
}

// float rollTarget = 4;
inline void ControlsState::clear_rolltarget() {
  rolltarget_ = 0;
}
inline float ControlsState::rolltarget() const {
  // @@protoc_insertion_point(field_get:multiplayer.ControlsState.rollTarget)
  return rolltarget_;
}
inline void ControlsState::set_rolltarget(float value) {
  
  rolltarget_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.ControlsState.rollTarget)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_controls_2dstate_2eproto

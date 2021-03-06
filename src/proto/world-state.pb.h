// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world-state.proto

#ifndef PROTOBUF_INCLUDED_world_2dstate_2eproto
#define PROTOBUF_INCLUDED_world_2dstate_2eproto

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
#include "object-state.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_world_2dstate_2eproto 

namespace protobuf_world_2dstate_2eproto {
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
}  // namespace protobuf_world_2dstate_2eproto
namespace multiplayer {
class WorldState;
class WorldStateDefaultTypeInternal;
extern WorldStateDefaultTypeInternal _WorldState_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::WorldState* Arena::CreateMaybeMessage<::multiplayer::WorldState>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class WorldState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.WorldState) */ {
 public:
  WorldState();
  virtual ~WorldState();

  WorldState(const WorldState& from);

  inline WorldState& operator=(const WorldState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WorldState(WorldState&& from) noexcept
    : WorldState() {
    *this = ::std::move(from);
  }

  inline WorldState& operator=(WorldState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WorldState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorldState* internal_default_instance() {
    return reinterpret_cast<const WorldState*>(
               &_WorldState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(WorldState* other);
  friend void swap(WorldState& a, WorldState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WorldState* New() const final {
    return CreateMaybeMessage<WorldState>(NULL);
  }

  WorldState* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<WorldState>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const WorldState& from);
  void MergeFrom(const WorldState& from);
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
  void InternalSwap(WorldState* other);
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

  // repeated .multiplayer.ObjectState objectStates = 2;
  int objectstates_size() const;
  void clear_objectstates();
  static const int kObjectStatesFieldNumber = 2;
  ::multiplayer::ObjectState* mutable_objectstates(int index);
  ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectState >*
      mutable_objectstates();
  const ::multiplayer::ObjectState& objectstates(int index) const;
  ::multiplayer::ObjectState* add_objectstates();
  const ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectState >&
      objectstates() const;

  // int32 frameIndex = 1;
  void clear_frameindex();
  static const int kFrameIndexFieldNumber = 1;
  ::google::protobuf::int32 frameindex() const;
  void set_frameindex(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:multiplayer.WorldState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectState > objectstates_;
  ::google::protobuf::int32 frameindex_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_world_2dstate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorldState

// int32 frameIndex = 1;
inline void WorldState::clear_frameindex() {
  frameindex_ = 0;
}
inline ::google::protobuf::int32 WorldState::frameindex() const {
  // @@protoc_insertion_point(field_get:multiplayer.WorldState.frameIndex)
  return frameindex_;
}
inline void WorldState::set_frameindex(::google::protobuf::int32 value) {
  
  frameindex_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.WorldState.frameIndex)
}

// repeated .multiplayer.ObjectState objectStates = 2;
inline int WorldState::objectstates_size() const {
  return objectstates_.size();
}
inline ::multiplayer::ObjectState* WorldState::mutable_objectstates(int index) {
  // @@protoc_insertion_point(field_mutable:multiplayer.WorldState.objectStates)
  return objectstates_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectState >*
WorldState::mutable_objectstates() {
  // @@protoc_insertion_point(field_mutable_list:multiplayer.WorldState.objectStates)
  return &objectstates_;
}
inline const ::multiplayer::ObjectState& WorldState::objectstates(int index) const {
  // @@protoc_insertion_point(field_get:multiplayer.WorldState.objectStates)
  return objectstates_.Get(index);
}
inline ::multiplayer::ObjectState* WorldState::add_objectstates() {
  // @@protoc_insertion_point(field_add:multiplayer.WorldState.objectStates)
  return objectstates_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectState >&
WorldState::objectstates() const {
  // @@protoc_insertion_point(field_list:multiplayer.WorldState.objectStates)
  return objectstates_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_world_2dstate_2eproto

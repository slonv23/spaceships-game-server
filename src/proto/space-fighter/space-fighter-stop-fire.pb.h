// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space-fighter/space-fighter-stop-fire.proto

#ifndef PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto
#define PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto 

namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto {
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
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto
namespace multiplayer {
class SpaceFighterStopFire;
class SpaceFighterStopFireDefaultTypeInternal;
extern SpaceFighterStopFireDefaultTypeInternal _SpaceFighterStopFire_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::SpaceFighterStopFire* Arena::CreateMaybeMessage<::multiplayer::SpaceFighterStopFire>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class SpaceFighterStopFire : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.SpaceFighterStopFire) */ {
 public:
  SpaceFighterStopFire();
  virtual ~SpaceFighterStopFire();

  SpaceFighterStopFire(const SpaceFighterStopFire& from);

  inline SpaceFighterStopFire& operator=(const SpaceFighterStopFire& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpaceFighterStopFire(SpaceFighterStopFire&& from) noexcept
    : SpaceFighterStopFire() {
    *this = ::std::move(from);
  }

  inline SpaceFighterStopFire& operator=(SpaceFighterStopFire&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SpaceFighterStopFire& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SpaceFighterStopFire* internal_default_instance() {
    return reinterpret_cast<const SpaceFighterStopFire*>(
               &_SpaceFighterStopFire_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SpaceFighterStopFire* other);
  friend void swap(SpaceFighterStopFire& a, SpaceFighterStopFire& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpaceFighterStopFire* New() const final {
    return CreateMaybeMessage<SpaceFighterStopFire>(NULL);
  }

  SpaceFighterStopFire* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SpaceFighterStopFire>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SpaceFighterStopFire& from);
  void MergeFrom(const SpaceFighterStopFire& from);
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
  void InternalSwap(SpaceFighterStopFire* other);
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

  // @@protoc_insertion_point(class_scope:multiplayer.SpaceFighterStopFire)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpaceFighterStopFire

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto

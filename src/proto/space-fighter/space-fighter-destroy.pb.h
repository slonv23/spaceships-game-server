// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space-fighter/space-fighter-destroy.proto

#ifndef PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto
#define PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto 

namespace protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto {
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
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto
namespace multiplayer {
class SpaceFighterDestroy;
class SpaceFighterDestroyDefaultTypeInternal;
extern SpaceFighterDestroyDefaultTypeInternal _SpaceFighterDestroy_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::SpaceFighterDestroy* Arena::CreateMaybeMessage<::multiplayer::SpaceFighterDestroy>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class SpaceFighterDestroy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.SpaceFighterDestroy) */ {
 public:
  SpaceFighterDestroy();
  virtual ~SpaceFighterDestroy();

  SpaceFighterDestroy(const SpaceFighterDestroy& from);

  inline SpaceFighterDestroy& operator=(const SpaceFighterDestroy& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpaceFighterDestroy(SpaceFighterDestroy&& from) noexcept
    : SpaceFighterDestroy() {
    *this = ::std::move(from);
  }

  inline SpaceFighterDestroy& operator=(SpaceFighterDestroy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SpaceFighterDestroy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SpaceFighterDestroy* internal_default_instance() {
    return reinterpret_cast<const SpaceFighterDestroy*>(
               &_SpaceFighterDestroy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SpaceFighterDestroy* other);
  friend void swap(SpaceFighterDestroy& a, SpaceFighterDestroy& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpaceFighterDestroy* New() const final {
    return CreateMaybeMessage<SpaceFighterDestroy>(NULL);
  }

  SpaceFighterDestroy* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SpaceFighterDestroy>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SpaceFighterDestroy& from);
  void MergeFrom(const SpaceFighterDestroy& from);
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
  void InternalSwap(SpaceFighterDestroy* other);
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

  // @@protoc_insertion_point(class_scope:multiplayer.SpaceFighterDestroy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpaceFighterDestroy

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto
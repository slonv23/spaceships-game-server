// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: float-vector.proto

#ifndef PROTOBUF_INCLUDED_float_2dvector_2eproto
#define PROTOBUF_INCLUDED_float_2dvector_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_float_2dvector_2eproto 

namespace protobuf_float_2dvector_2eproto {
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
}  // namespace protobuf_float_2dvector_2eproto
namespace multiplayer {
class FloatVector;
class FloatVectorDefaultTypeInternal;
extern FloatVectorDefaultTypeInternal _FloatVector_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::FloatVector* Arena::CreateMaybeMessage<::multiplayer::FloatVector>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class FloatVector : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.FloatVector) */ {
 public:
  FloatVector();
  virtual ~FloatVector();

  FloatVector(const FloatVector& from);

  inline FloatVector& operator=(const FloatVector& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FloatVector(FloatVector&& from) noexcept
    : FloatVector() {
    *this = ::std::move(from);
  }

  inline FloatVector& operator=(FloatVector&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FloatVector& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FloatVector* internal_default_instance() {
    return reinterpret_cast<const FloatVector*>(
               &_FloatVector_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FloatVector* other);
  friend void swap(FloatVector& a, FloatVector& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FloatVector* New() const final {
    return CreateMaybeMessage<FloatVector>(NULL);
  }

  FloatVector* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FloatVector>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FloatVector& from);
  void MergeFrom(const FloatVector& from);
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
  void InternalSwap(FloatVector* other);
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

  // float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // float z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:multiplayer.FloatVector)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  float z_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_float_2dvector_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FloatVector

// float x = 1;
inline void FloatVector::clear_x() {
  x_ = 0;
}
inline float FloatVector::x() const {
  // @@protoc_insertion_point(field_get:multiplayer.FloatVector.x)
  return x_;
}
inline void FloatVector::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.FloatVector.x)
}

// float y = 2;
inline void FloatVector::clear_y() {
  y_ = 0;
}
inline float FloatVector::y() const {
  // @@protoc_insertion_point(field_get:multiplayer.FloatVector.y)
  return y_;
}
inline void FloatVector::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.FloatVector.y)
}

// float z = 3;
inline void FloatVector::clear_z() {
  z_ = 0;
}
inline float FloatVector::z() const {
  // @@protoc_insertion_point(field_get:multiplayer.FloatVector.z)
  return z_;
}
inline void FloatVector::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.FloatVector.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_float_2dvector_2eproto

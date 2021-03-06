// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space-fighter/space-fighter-destroy.proto

#include "space-fighter-destroy.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace multiplayer {
class SpaceFighterDestroyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SpaceFighterDestroy>
      _instance;
} _SpaceFighterDestroy_default_instance_;
}  // namespace multiplayer
namespace protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto {
static void InitDefaultsSpaceFighterDestroy() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_SpaceFighterDestroy_default_instance_;
    new (ptr) ::multiplayer::SpaceFighterDestroy();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::SpaceFighterDestroy::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterDestroy =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSpaceFighterDestroy}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SpaceFighterDestroy.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterDestroy, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::SpaceFighterDestroy)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_SpaceFighterDestroy_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "space-fighter/space-fighter-destroy.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n)space-fighter/space-fighter-destroy.pr"
      "oto\022\013multiplayer\"\025\n\023SpaceFighterDestroyb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 87);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "space-fighter/space-fighter-destroy.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto
namespace multiplayer {

// ===================================================================

void SpaceFighterDestroy::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpaceFighterDestroy::SpaceFighterDestroy()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::scc_info_SpaceFighterDestroy.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.SpaceFighterDestroy)
}
SpaceFighterDestroy::SpaceFighterDestroy(const SpaceFighterDestroy& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:multiplayer.SpaceFighterDestroy)
}

void SpaceFighterDestroy::SharedCtor() {
}

SpaceFighterDestroy::~SpaceFighterDestroy() {
  // @@protoc_insertion_point(destructor:multiplayer.SpaceFighterDestroy)
  SharedDtor();
}

void SpaceFighterDestroy::SharedDtor() {
}

void SpaceFighterDestroy::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SpaceFighterDestroy::descriptor() {
  ::protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SpaceFighterDestroy& SpaceFighterDestroy::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::scc_info_SpaceFighterDestroy.base);
  return *internal_default_instance();
}


void SpaceFighterDestroy::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.SpaceFighterDestroy)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool SpaceFighterDestroy::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.SpaceFighterDestroy)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:multiplayer.SpaceFighterDestroy)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.SpaceFighterDestroy)
  return false;
#undef DO_
}

void SpaceFighterDestroy::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.SpaceFighterDestroy)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.SpaceFighterDestroy)
}

::google::protobuf::uint8* SpaceFighterDestroy::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.SpaceFighterDestroy)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.SpaceFighterDestroy)
  return target;
}

size_t SpaceFighterDestroy::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.SpaceFighterDestroy)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SpaceFighterDestroy::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.SpaceFighterDestroy)
  GOOGLE_DCHECK_NE(&from, this);
  const SpaceFighterDestroy* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SpaceFighterDestroy>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.SpaceFighterDestroy)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.SpaceFighterDestroy)
    MergeFrom(*source);
  }
}

void SpaceFighterDestroy::MergeFrom(const SpaceFighterDestroy& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.SpaceFighterDestroy)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SpaceFighterDestroy::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.SpaceFighterDestroy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpaceFighterDestroy::CopyFrom(const SpaceFighterDestroy& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.SpaceFighterDestroy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpaceFighterDestroy::IsInitialized() const {
  return true;
}

void SpaceFighterDestroy::Swap(SpaceFighterDestroy* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpaceFighterDestroy::InternalSwap(SpaceFighterDestroy* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SpaceFighterDestroy::GetMetadata() const {
  protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::SpaceFighterDestroy* Arena::CreateMaybeMessage< ::multiplayer::SpaceFighterDestroy >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::SpaceFighterDestroy >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

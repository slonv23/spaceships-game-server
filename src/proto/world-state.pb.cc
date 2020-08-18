// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world-state.proto

#include "world-state.pb.h"

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

namespace protobuf_object_2dstate_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_object_2dstate_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_ObjectState;
}  // namespace protobuf_object_2dstate_2eproto
namespace multiplayer {
class WorldStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WorldState>
      _instance;
} _WorldState_default_instance_;
}  // namespace multiplayer
namespace protobuf_world_2dstate_2eproto {
static void InitDefaultsWorldState() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_WorldState_default_instance_;
    new (ptr) ::multiplayer::WorldState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::WorldState::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_WorldState =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsWorldState}, {
      &protobuf_object_2dstate_2eproto::scc_info_ObjectState.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WorldState.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::WorldState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::WorldState, frameindex_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::WorldState, objectstates_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::WorldState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_WorldState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "world-state.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021world-state.proto\022\013multiplayer\032\022object"
      "-state.proto\"P\n\nWorldState\022\022\n\nframeIndex"
      "\030\001 \001(\005\022.\n\014objectStates\030\002 \003(\0132\030.multiplay"
      "er.ObjectStateb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 142);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "world-state.proto", &protobuf_RegisterTypes);
  ::protobuf_object_2dstate_2eproto::AddDescriptors();
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
}  // namespace protobuf_world_2dstate_2eproto
namespace multiplayer {

// ===================================================================

void WorldState::InitAsDefaultInstance() {
}
void WorldState::clear_objectstates() {
  objectstates_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WorldState::kFrameIndexFieldNumber;
const int WorldState::kObjectStatesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WorldState::WorldState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_world_2dstate_2eproto::scc_info_WorldState.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.WorldState)
}
WorldState::WorldState(const WorldState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      objectstates_(from.objectstates_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  frameindex_ = from.frameindex_;
  // @@protoc_insertion_point(copy_constructor:multiplayer.WorldState)
}

void WorldState::SharedCtor() {
  frameindex_ = 0;
}

WorldState::~WorldState() {
  // @@protoc_insertion_point(destructor:multiplayer.WorldState)
  SharedDtor();
}

void WorldState::SharedDtor() {
}

void WorldState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WorldState::descriptor() {
  ::protobuf_world_2dstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_world_2dstate_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WorldState& WorldState::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_world_2dstate_2eproto::scc_info_WorldState.base);
  return *internal_default_instance();
}


void WorldState::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.WorldState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  objectstates_.Clear();
  frameindex_ = 0;
  _internal_metadata_.Clear();
}

bool WorldState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.WorldState)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 frameIndex = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &frameindex_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .multiplayer.ObjectState objectStates = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_objectstates()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:multiplayer.WorldState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.WorldState)
  return false;
#undef DO_
}

void WorldState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.WorldState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 frameIndex = 1;
  if (this->frameindex() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->frameindex(), output);
  }

  // repeated .multiplayer.ObjectState objectStates = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->objectstates_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->objectstates(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.WorldState)
}

::google::protobuf::uint8* WorldState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.WorldState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 frameIndex = 1;
  if (this->frameindex() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->frameindex(), target);
  }

  // repeated .multiplayer.ObjectState objectStates = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->objectstates_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->objectstates(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.WorldState)
  return target;
}

size_t WorldState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.WorldState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .multiplayer.ObjectState objectStates = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->objectstates_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->objectstates(static_cast<int>(i)));
    }
  }

  // int32 frameIndex = 1;
  if (this->frameindex() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->frameindex());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WorldState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.WorldState)
  GOOGLE_DCHECK_NE(&from, this);
  const WorldState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WorldState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.WorldState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.WorldState)
    MergeFrom(*source);
  }
}

void WorldState::MergeFrom(const WorldState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.WorldState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  objectstates_.MergeFrom(from.objectstates_);
  if (from.frameindex() != 0) {
    set_frameindex(from.frameindex());
  }
}

void WorldState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.WorldState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldState::CopyFrom(const WorldState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.WorldState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldState::IsInitialized() const {
  return true;
}

void WorldState::Swap(WorldState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WorldState::InternalSwap(WorldState* other) {
  using std::swap;
  CastToBase(&objectstates_)->InternalSwap(CastToBase(&other->objectstates_));
  swap(frameindex_, other->frameindex_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WorldState::GetMetadata() const {
  protobuf_world_2dstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_world_2dstate_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::WorldState* Arena::CreateMaybeMessage< ::multiplayer::WorldState >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::WorldState >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

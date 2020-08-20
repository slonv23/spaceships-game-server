// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space-fighter-input.proto

#include "space-fighter-input.pb.h"

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
class SpaceFighterInputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SpaceFighterInput>
      _instance;
} _SpaceFighterInput_default_instance_;
}  // namespace multiplayer
namespace protobuf_space_2dfighter_2dinput_2eproto {
static void InitDefaultsSpaceFighterInput() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_SpaceFighterInput_default_instance_;
    new (ptr) ::multiplayer::SpaceFighterInput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::SpaceFighterInput::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterInput =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSpaceFighterInput}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SpaceFighterInput.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterInput, yaw_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterInput, pitch_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterInput, rotationspeed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterInput, rollangle_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::SpaceFighterInput)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_SpaceFighterInput_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "space-fighter-input.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\031space-fighter-input.proto\022\013multiplayer"
      "\"Y\n\021SpaceFighterInput\022\013\n\003yaw\030\001 \001(\002\022\r\n\005pi"
      "tch\030\002 \001(\002\022\025\n\rrotationSpeed\030\003 \001(\002\022\021\n\troll"
      "Angle\030\004 \001(\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 139);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "space-fighter-input.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_space_2dfighter_2dinput_2eproto
namespace multiplayer {

// ===================================================================

void SpaceFighterInput::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpaceFighterInput::kYawFieldNumber;
const int SpaceFighterInput::kPitchFieldNumber;
const int SpaceFighterInput::kRotationSpeedFieldNumber;
const int SpaceFighterInput::kRollAngleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpaceFighterInput::SpaceFighterInput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_space_2dfighter_2dinput_2eproto::scc_info_SpaceFighterInput.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.SpaceFighterInput)
}
SpaceFighterInput::SpaceFighterInput(const SpaceFighterInput& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&yaw_, &from.yaw_,
    static_cast<size_t>(reinterpret_cast<char*>(&rollangle_) -
    reinterpret_cast<char*>(&yaw_)) + sizeof(rollangle_));
  // @@protoc_insertion_point(copy_constructor:multiplayer.SpaceFighterInput)
}

void SpaceFighterInput::SharedCtor() {
  ::memset(&yaw_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rollangle_) -
      reinterpret_cast<char*>(&yaw_)) + sizeof(rollangle_));
}

SpaceFighterInput::~SpaceFighterInput() {
  // @@protoc_insertion_point(destructor:multiplayer.SpaceFighterInput)
  SharedDtor();
}

void SpaceFighterInput::SharedDtor() {
}

void SpaceFighterInput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SpaceFighterInput::descriptor() {
  ::protobuf_space_2dfighter_2dinput_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_space_2dfighter_2dinput_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SpaceFighterInput& SpaceFighterInput::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_space_2dfighter_2dinput_2eproto::scc_info_SpaceFighterInput.base);
  return *internal_default_instance();
}


void SpaceFighterInput::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.SpaceFighterInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&yaw_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rollangle_) -
      reinterpret_cast<char*>(&yaw_)) + sizeof(rollangle_));
  _internal_metadata_.Clear();
}

bool SpaceFighterInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.SpaceFighterInput)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float yaw = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &yaw_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float pitch = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &pitch_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float rotationSpeed = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rotationspeed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float rollAngle = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rollangle_)));
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
  // @@protoc_insertion_point(parse_success:multiplayer.SpaceFighterInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.SpaceFighterInput)
  return false;
#undef DO_
}

void SpaceFighterInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.SpaceFighterInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float yaw = 1;
  if (this->yaw() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->yaw(), output);
  }

  // float pitch = 2;
  if (this->pitch() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->pitch(), output);
  }

  // float rotationSpeed = 3;
  if (this->rotationspeed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->rotationspeed(), output);
  }

  // float rollAngle = 4;
  if (this->rollangle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->rollangle(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.SpaceFighterInput)
}

::google::protobuf::uint8* SpaceFighterInput::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.SpaceFighterInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float yaw = 1;
  if (this->yaw() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->yaw(), target);
  }

  // float pitch = 2;
  if (this->pitch() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->pitch(), target);
  }

  // float rotationSpeed = 3;
  if (this->rotationspeed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->rotationspeed(), target);
  }

  // float rollAngle = 4;
  if (this->rollangle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->rollangle(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.SpaceFighterInput)
  return target;
}

size_t SpaceFighterInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.SpaceFighterInput)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float yaw = 1;
  if (this->yaw() != 0) {
    total_size += 1 + 4;
  }

  // float pitch = 2;
  if (this->pitch() != 0) {
    total_size += 1 + 4;
  }

  // float rotationSpeed = 3;
  if (this->rotationspeed() != 0) {
    total_size += 1 + 4;
  }

  // float rollAngle = 4;
  if (this->rollangle() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SpaceFighterInput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.SpaceFighterInput)
  GOOGLE_DCHECK_NE(&from, this);
  const SpaceFighterInput* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SpaceFighterInput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.SpaceFighterInput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.SpaceFighterInput)
    MergeFrom(*source);
  }
}

void SpaceFighterInput::MergeFrom(const SpaceFighterInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.SpaceFighterInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.yaw() != 0) {
    set_yaw(from.yaw());
  }
  if (from.pitch() != 0) {
    set_pitch(from.pitch());
  }
  if (from.rotationspeed() != 0) {
    set_rotationspeed(from.rotationspeed());
  }
  if (from.rollangle() != 0) {
    set_rollangle(from.rollangle());
  }
}

void SpaceFighterInput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.SpaceFighterInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpaceFighterInput::CopyFrom(const SpaceFighterInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.SpaceFighterInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpaceFighterInput::IsInitialized() const {
  return true;
}

void SpaceFighterInput::Swap(SpaceFighterInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpaceFighterInput::InternalSwap(SpaceFighterInput* other) {
  using std::swap;
  swap(yaw_, other->yaw_);
  swap(pitch_, other->pitch_);
  swap(rotationspeed_, other->rotationspeed_);
  swap(rollangle_, other->rollangle_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SpaceFighterInput::GetMetadata() const {
  protobuf_space_2dfighter_2dinput_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_space_2dfighter_2dinput_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::SpaceFighterInput* Arena::CreateMaybeMessage< ::multiplayer::SpaceFighterInput >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::SpaceFighterInput >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

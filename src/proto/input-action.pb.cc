// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: input-action.proto

#include "input-action.pb.h"

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
class InputActionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<InputAction>
      _instance;
} _InputAction_default_instance_;
}  // namespace multiplayer
namespace protobuf_input_2daction_2eproto {
static void InitDefaultsInputAction() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_InputAction_default_instance_;
    new (ptr) ::multiplayer::InputAction();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::InputAction::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_InputAction =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsInputAction}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_InputAction.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, frameindex_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, yaw_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, pitch_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, rotationspeed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, rollangle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::InputAction, objectid_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::InputAction)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_InputAction_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "input-action.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\022input-action.proto\022\013multiplayer\"y\n\013Inp"
      "utAction\022\022\n\nframeIndex\030\001 \001(\005\022\013\n\003yaw\030\002 \001("
      "\002\022\r\n\005pitch\030\003 \001(\002\022\025\n\rrotationSpeed\030\004 \001(\002\022"
      "\021\n\trollAngle\030\005 \001(\002\022\020\n\010objectId\030\006 \001(\tb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 164);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "input-action.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_input_2daction_2eproto
namespace multiplayer {

// ===================================================================

void InputAction::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InputAction::kFrameIndexFieldNumber;
const int InputAction::kYawFieldNumber;
const int InputAction::kPitchFieldNumber;
const int InputAction::kRotationSpeedFieldNumber;
const int InputAction::kRollAngleFieldNumber;
const int InputAction::kObjectIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InputAction::InputAction()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_input_2daction_2eproto::scc_info_InputAction.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.InputAction)
}
InputAction::InputAction(const InputAction& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  objectid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.objectid().size() > 0) {
    objectid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.objectid_);
  }
  ::memcpy(&frameindex_, &from.frameindex_,
    static_cast<size_t>(reinterpret_cast<char*>(&rollangle_) -
    reinterpret_cast<char*>(&frameindex_)) + sizeof(rollangle_));
  // @@protoc_insertion_point(copy_constructor:multiplayer.InputAction)
}

void InputAction::SharedCtor() {
  objectid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&frameindex_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rollangle_) -
      reinterpret_cast<char*>(&frameindex_)) + sizeof(rollangle_));
}

InputAction::~InputAction() {
  // @@protoc_insertion_point(destructor:multiplayer.InputAction)
  SharedDtor();
}

void InputAction::SharedDtor() {
  objectid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void InputAction::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* InputAction::descriptor() {
  ::protobuf_input_2daction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_input_2daction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const InputAction& InputAction::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_input_2daction_2eproto::scc_info_InputAction.base);
  return *internal_default_instance();
}


void InputAction::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.InputAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  objectid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&frameindex_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rollangle_) -
      reinterpret_cast<char*>(&frameindex_)) + sizeof(rollangle_));
  _internal_metadata_.Clear();
}

bool InputAction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.InputAction)
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

      // float yaw = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &yaw_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float pitch = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &pitch_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float rotationSpeed = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rotationspeed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float rollAngle = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rollangle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string objectId = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_objectid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->objectid().data(), static_cast<int>(this->objectid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "multiplayer.InputAction.objectId"));
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
  // @@protoc_insertion_point(parse_success:multiplayer.InputAction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.InputAction)
  return false;
#undef DO_
}

void InputAction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.InputAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 frameIndex = 1;
  if (this->frameindex() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->frameindex(), output);
  }

  // float yaw = 2;
  if (this->yaw() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->yaw(), output);
  }

  // float pitch = 3;
  if (this->pitch() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->pitch(), output);
  }

  // float rotationSpeed = 4;
  if (this->rotationspeed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->rotationspeed(), output);
  }

  // float rollAngle = 5;
  if (this->rollangle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->rollangle(), output);
  }

  // string objectId = 6;
  if (this->objectid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->objectid().data(), static_cast<int>(this->objectid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "multiplayer.InputAction.objectId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->objectid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.InputAction)
}

::google::protobuf::uint8* InputAction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.InputAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 frameIndex = 1;
  if (this->frameindex() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->frameindex(), target);
  }

  // float yaw = 2;
  if (this->yaw() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->yaw(), target);
  }

  // float pitch = 3;
  if (this->pitch() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->pitch(), target);
  }

  // float rotationSpeed = 4;
  if (this->rotationspeed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->rotationspeed(), target);
  }

  // float rollAngle = 5;
  if (this->rollangle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->rollangle(), target);
  }

  // string objectId = 6;
  if (this->objectid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->objectid().data(), static_cast<int>(this->objectid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "multiplayer.InputAction.objectId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->objectid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.InputAction)
  return target;
}

size_t InputAction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.InputAction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string objectId = 6;
  if (this->objectid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->objectid());
  }

  // int32 frameIndex = 1;
  if (this->frameindex() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->frameindex());
  }

  // float yaw = 2;
  if (this->yaw() != 0) {
    total_size += 1 + 4;
  }

  // float pitch = 3;
  if (this->pitch() != 0) {
    total_size += 1 + 4;
  }

  // float rotationSpeed = 4;
  if (this->rotationspeed() != 0) {
    total_size += 1 + 4;
  }

  // float rollAngle = 5;
  if (this->rollangle() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InputAction::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.InputAction)
  GOOGLE_DCHECK_NE(&from, this);
  const InputAction* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const InputAction>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.InputAction)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.InputAction)
    MergeFrom(*source);
  }
}

void InputAction::MergeFrom(const InputAction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.InputAction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.objectid().size() > 0) {

    objectid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.objectid_);
  }
  if (from.frameindex() != 0) {
    set_frameindex(from.frameindex());
  }
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

void InputAction::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.InputAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InputAction::CopyFrom(const InputAction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.InputAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InputAction::IsInitialized() const {
  return true;
}

void InputAction::Swap(InputAction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InputAction::InternalSwap(InputAction* other) {
  using std::swap;
  objectid_.Swap(&other->objectid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(frameindex_, other->frameindex_);
  swap(yaw_, other->yaw_);
  swap(pitch_, other->pitch_);
  swap(rotationspeed_, other->rotationspeed_);
  swap(rollangle_, other->rollangle_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata InputAction::GetMetadata() const {
  protobuf_input_2daction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_input_2daction_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::InputAction* Arena::CreateMaybeMessage< ::multiplayer::InputAction >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::InputAction >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

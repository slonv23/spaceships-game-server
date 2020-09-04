// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space-fighter/space-fighter-state.proto

#include "space-fighter-state.pb.h"

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

namespace protobuf_float_2dvector_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_float_2dvector_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_FloatVector;
}  // namespace protobuf_float_2dvector_2eproto
namespace protobuf_object_2daction_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_object_2daction_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_ObjectAction;
}  // namespace protobuf_object_2daction_2eproto
namespace protobuf_quaternion_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_quaternion_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Quaternion;
}  // namespace protobuf_quaternion_2eproto
namespace multiplayer {
class SpaceFighterStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SpaceFighterState>
      _instance;
} _SpaceFighterState_default_instance_;
}  // namespace multiplayer
namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto {
static void InitDefaultsSpaceFighterState() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_SpaceFighterState_default_instance_;
    new (ptr) ::multiplayer::SpaceFighterState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::SpaceFighterState::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_SpaceFighterState =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsSpaceFighterState}, {
      &protobuf_float_2dvector_2eproto::scc_info_FloatVector.base,
      &protobuf_quaternion_2eproto::scc_info_Quaternion.base,
      &protobuf_object_2daction_2eproto::scc_info_ObjectAction.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SpaceFighterState.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, position_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, quaternion_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, speed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, acceleration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, angularvelocity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, rollanglebtwcurrentandtargetorientation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, controlquaternion_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, controlrotquaternion_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, shooting_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::SpaceFighterState, actions_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::SpaceFighterState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_SpaceFighterState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "space-fighter/space-fighter-state.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\'space-fighter/space-fighter-state.prot"
      "o\022\013multiplayer\032\022float-vector.proto\032\020quat"
      "ernion.proto\032\023object-action.proto\"\236\003\n\021Sp"
      "aceFighterState\022*\n\010position\030\001 \001(\0132\030.mult"
      "iplayer.FloatVector\022+\n\nquaternion\030\002 \001(\0132"
      "\027.multiplayer.Quaternion\022\r\n\005speed\030\003 \001(\002\022"
      "\024\n\014acceleration\030\004 \001(\002\0221\n\017angularVelocity"
      "\030\005 \001(\0132\030.multiplayer.FloatVector\022/\n\'roll"
      "AngleBtwCurrentAndTargetOrientation\030\006 \001("
      "\002\0222\n\021controlQuaternion\030\007 \001(\0132\027.multiplay"
      "er.Quaternion\0225\n\024controlRotQuaternion\030\010 "
      "\001(\0132\027.multiplayer.Quaternion\022\020\n\010shooting"
      "\030\t \001(\010\022*\n\007actions\030\n \003(\0132\031.multiplayer.Ob"
      "jectActionb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 538);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "space-fighter/space-fighter-state.proto", &protobuf_RegisterTypes);
  ::protobuf_float_2dvector_2eproto::AddDescriptors();
  ::protobuf_quaternion_2eproto::AddDescriptors();
  ::protobuf_object_2daction_2eproto::AddDescriptors();
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
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto
namespace multiplayer {

// ===================================================================

void SpaceFighterState::InitAsDefaultInstance() {
  ::multiplayer::_SpaceFighterState_default_instance_._instance.get_mutable()->position_ = const_cast< ::multiplayer::FloatVector*>(
      ::multiplayer::FloatVector::internal_default_instance());
  ::multiplayer::_SpaceFighterState_default_instance_._instance.get_mutable()->quaternion_ = const_cast< ::multiplayer::Quaternion*>(
      ::multiplayer::Quaternion::internal_default_instance());
  ::multiplayer::_SpaceFighterState_default_instance_._instance.get_mutable()->angularvelocity_ = const_cast< ::multiplayer::FloatVector*>(
      ::multiplayer::FloatVector::internal_default_instance());
  ::multiplayer::_SpaceFighterState_default_instance_._instance.get_mutable()->controlquaternion_ = const_cast< ::multiplayer::Quaternion*>(
      ::multiplayer::Quaternion::internal_default_instance());
  ::multiplayer::_SpaceFighterState_default_instance_._instance.get_mutable()->controlrotquaternion_ = const_cast< ::multiplayer::Quaternion*>(
      ::multiplayer::Quaternion::internal_default_instance());
}
void SpaceFighterState::clear_position() {
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
}
void SpaceFighterState::clear_quaternion() {
  if (GetArenaNoVirtual() == NULL && quaternion_ != NULL) {
    delete quaternion_;
  }
  quaternion_ = NULL;
}
void SpaceFighterState::clear_angularvelocity() {
  if (GetArenaNoVirtual() == NULL && angularvelocity_ != NULL) {
    delete angularvelocity_;
  }
  angularvelocity_ = NULL;
}
void SpaceFighterState::clear_controlquaternion() {
  if (GetArenaNoVirtual() == NULL && controlquaternion_ != NULL) {
    delete controlquaternion_;
  }
  controlquaternion_ = NULL;
}
void SpaceFighterState::clear_controlrotquaternion() {
  if (GetArenaNoVirtual() == NULL && controlrotquaternion_ != NULL) {
    delete controlrotquaternion_;
  }
  controlrotquaternion_ = NULL;
}
void SpaceFighterState::clear_actions() {
  actions_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpaceFighterState::kPositionFieldNumber;
const int SpaceFighterState::kQuaternionFieldNumber;
const int SpaceFighterState::kSpeedFieldNumber;
const int SpaceFighterState::kAccelerationFieldNumber;
const int SpaceFighterState::kAngularVelocityFieldNumber;
const int SpaceFighterState::kRollAngleBtwCurrentAndTargetOrientationFieldNumber;
const int SpaceFighterState::kControlQuaternionFieldNumber;
const int SpaceFighterState::kControlRotQuaternionFieldNumber;
const int SpaceFighterState::kShootingFieldNumber;
const int SpaceFighterState::kActionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpaceFighterState::SpaceFighterState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::scc_info_SpaceFighterState.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.SpaceFighterState)
}
SpaceFighterState::SpaceFighterState(const SpaceFighterState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      actions_(from.actions_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_position()) {
    position_ = new ::multiplayer::FloatVector(*from.position_);
  } else {
    position_ = NULL;
  }
  if (from.has_quaternion()) {
    quaternion_ = new ::multiplayer::Quaternion(*from.quaternion_);
  } else {
    quaternion_ = NULL;
  }
  if (from.has_angularvelocity()) {
    angularvelocity_ = new ::multiplayer::FloatVector(*from.angularvelocity_);
  } else {
    angularvelocity_ = NULL;
  }
  if (from.has_controlquaternion()) {
    controlquaternion_ = new ::multiplayer::Quaternion(*from.controlquaternion_);
  } else {
    controlquaternion_ = NULL;
  }
  if (from.has_controlrotquaternion()) {
    controlrotquaternion_ = new ::multiplayer::Quaternion(*from.controlrotquaternion_);
  } else {
    controlrotquaternion_ = NULL;
  }
  ::memcpy(&speed_, &from.speed_,
    static_cast<size_t>(reinterpret_cast<char*>(&shooting_) -
    reinterpret_cast<char*>(&speed_)) + sizeof(shooting_));
  // @@protoc_insertion_point(copy_constructor:multiplayer.SpaceFighterState)
}

void SpaceFighterState::SharedCtor() {
  ::memset(&position_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&shooting_) -
      reinterpret_cast<char*>(&position_)) + sizeof(shooting_));
}

SpaceFighterState::~SpaceFighterState() {
  // @@protoc_insertion_point(destructor:multiplayer.SpaceFighterState)
  SharedDtor();
}

void SpaceFighterState::SharedDtor() {
  if (this != internal_default_instance()) delete position_;
  if (this != internal_default_instance()) delete quaternion_;
  if (this != internal_default_instance()) delete angularvelocity_;
  if (this != internal_default_instance()) delete controlquaternion_;
  if (this != internal_default_instance()) delete controlrotquaternion_;
}

void SpaceFighterState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SpaceFighterState::descriptor() {
  ::protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SpaceFighterState& SpaceFighterState::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::scc_info_SpaceFighterState.base);
  return *internal_default_instance();
}


void SpaceFighterState::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.SpaceFighterState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  actions_.Clear();
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
  if (GetArenaNoVirtual() == NULL && quaternion_ != NULL) {
    delete quaternion_;
  }
  quaternion_ = NULL;
  if (GetArenaNoVirtual() == NULL && angularvelocity_ != NULL) {
    delete angularvelocity_;
  }
  angularvelocity_ = NULL;
  if (GetArenaNoVirtual() == NULL && controlquaternion_ != NULL) {
    delete controlquaternion_;
  }
  controlquaternion_ = NULL;
  if (GetArenaNoVirtual() == NULL && controlrotquaternion_ != NULL) {
    delete controlrotquaternion_;
  }
  controlrotquaternion_ = NULL;
  ::memset(&speed_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&shooting_) -
      reinterpret_cast<char*>(&speed_)) + sizeof(shooting_));
  _internal_metadata_.Clear();
}

bool SpaceFighterState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.SpaceFighterState)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .multiplayer.FloatVector position = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.Quaternion quaternion = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_quaternion()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float speed = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float acceleration = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &acceleration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.FloatVector angularVelocity = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_angularvelocity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float rollAngleBtwCurrentAndTargetOrientation = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rollanglebtwcurrentandtargetorientation_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.Quaternion controlQuaternion = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_controlquaternion()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.Quaternion controlRotQuaternion = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_controlrotquaternion()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool shooting = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &shooting_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .multiplayer.ObjectAction actions = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_actions()));
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
  // @@protoc_insertion_point(parse_success:multiplayer.SpaceFighterState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.SpaceFighterState)
  return false;
#undef DO_
}

void SpaceFighterState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.SpaceFighterState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .multiplayer.FloatVector position = 1;
  if (this->has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_position(), output);
  }

  // .multiplayer.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_quaternion(), output);
  }

  // float speed = 3;
  if (this->speed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->speed(), output);
  }

  // float acceleration = 4;
  if (this->acceleration() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->acceleration(), output);
  }

  // .multiplayer.FloatVector angularVelocity = 5;
  if (this->has_angularvelocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_angularvelocity(), output);
  }

  // float rollAngleBtwCurrentAndTargetOrientation = 6;
  if (this->rollanglebtwcurrentandtargetorientation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->rollanglebtwcurrentandtargetorientation(), output);
  }

  // .multiplayer.Quaternion controlQuaternion = 7;
  if (this->has_controlquaternion()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_controlquaternion(), output);
  }

  // .multiplayer.Quaternion controlRotQuaternion = 8;
  if (this->has_controlrotquaternion()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_controlrotquaternion(), output);
  }

  // bool shooting = 9;
  if (this->shooting() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->shooting(), output);
  }

  // repeated .multiplayer.ObjectAction actions = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->actions_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10,
      this->actions(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.SpaceFighterState)
}

::google::protobuf::uint8* SpaceFighterState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.SpaceFighterState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .multiplayer.FloatVector position = 1;
  if (this->has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_position(), deterministic, target);
  }

  // .multiplayer.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_quaternion(), deterministic, target);
  }

  // float speed = 3;
  if (this->speed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->speed(), target);
  }

  // float acceleration = 4;
  if (this->acceleration() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->acceleration(), target);
  }

  // .multiplayer.FloatVector angularVelocity = 5;
  if (this->has_angularvelocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_angularvelocity(), deterministic, target);
  }

  // float rollAngleBtwCurrentAndTargetOrientation = 6;
  if (this->rollanglebtwcurrentandtargetorientation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->rollanglebtwcurrentandtargetorientation(), target);
  }

  // .multiplayer.Quaternion controlQuaternion = 7;
  if (this->has_controlquaternion()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_controlquaternion(), deterministic, target);
  }

  // .multiplayer.Quaternion controlRotQuaternion = 8;
  if (this->has_controlrotquaternion()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_controlrotquaternion(), deterministic, target);
  }

  // bool shooting = 9;
  if (this->shooting() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->shooting(), target);
  }

  // repeated .multiplayer.ObjectAction actions = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->actions_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, this->actions(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.SpaceFighterState)
  return target;
}

size_t SpaceFighterState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.SpaceFighterState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .multiplayer.ObjectAction actions = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->actions_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->actions(static_cast<int>(i)));
    }
  }

  // .multiplayer.FloatVector position = 1;
  if (this->has_position()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // .multiplayer.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *quaternion_);
  }

  // .multiplayer.FloatVector angularVelocity = 5;
  if (this->has_angularvelocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *angularvelocity_);
  }

  // .multiplayer.Quaternion controlQuaternion = 7;
  if (this->has_controlquaternion()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *controlquaternion_);
  }

  // .multiplayer.Quaternion controlRotQuaternion = 8;
  if (this->has_controlrotquaternion()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *controlrotquaternion_);
  }

  // float speed = 3;
  if (this->speed() != 0) {
    total_size += 1 + 4;
  }

  // float acceleration = 4;
  if (this->acceleration() != 0) {
    total_size += 1 + 4;
  }

  // float rollAngleBtwCurrentAndTargetOrientation = 6;
  if (this->rollanglebtwcurrentandtargetorientation() != 0) {
    total_size += 1 + 4;
  }

  // bool shooting = 9;
  if (this->shooting() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SpaceFighterState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.SpaceFighterState)
  GOOGLE_DCHECK_NE(&from, this);
  const SpaceFighterState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SpaceFighterState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.SpaceFighterState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.SpaceFighterState)
    MergeFrom(*source);
  }
}

void SpaceFighterState::MergeFrom(const SpaceFighterState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.SpaceFighterState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  actions_.MergeFrom(from.actions_);
  if (from.has_position()) {
    mutable_position()->::multiplayer::FloatVector::MergeFrom(from.position());
  }
  if (from.has_quaternion()) {
    mutable_quaternion()->::multiplayer::Quaternion::MergeFrom(from.quaternion());
  }
  if (from.has_angularvelocity()) {
    mutable_angularvelocity()->::multiplayer::FloatVector::MergeFrom(from.angularvelocity());
  }
  if (from.has_controlquaternion()) {
    mutable_controlquaternion()->::multiplayer::Quaternion::MergeFrom(from.controlquaternion());
  }
  if (from.has_controlrotquaternion()) {
    mutable_controlrotquaternion()->::multiplayer::Quaternion::MergeFrom(from.controlrotquaternion());
  }
  if (from.speed() != 0) {
    set_speed(from.speed());
  }
  if (from.acceleration() != 0) {
    set_acceleration(from.acceleration());
  }
  if (from.rollanglebtwcurrentandtargetorientation() != 0) {
    set_rollanglebtwcurrentandtargetorientation(from.rollanglebtwcurrentandtargetorientation());
  }
  if (from.shooting() != 0) {
    set_shooting(from.shooting());
  }
}

void SpaceFighterState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.SpaceFighterState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpaceFighterState::CopyFrom(const SpaceFighterState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.SpaceFighterState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpaceFighterState::IsInitialized() const {
  return true;
}

void SpaceFighterState::Swap(SpaceFighterState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpaceFighterState::InternalSwap(SpaceFighterState* other) {
  using std::swap;
  CastToBase(&actions_)->InternalSwap(CastToBase(&other->actions_));
  swap(position_, other->position_);
  swap(quaternion_, other->quaternion_);
  swap(angularvelocity_, other->angularvelocity_);
  swap(controlquaternion_, other->controlquaternion_);
  swap(controlrotquaternion_, other->controlrotquaternion_);
  swap(speed_, other->speed_);
  swap(acceleration_, other->acceleration_);
  swap(rollanglebtwcurrentandtargetorientation_, other->rollanglebtwcurrentandtargetorientation_);
  swap(shooting_, other->shooting_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SpaceFighterState::GetMetadata() const {
  protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::SpaceFighterState* Arena::CreateMaybeMessage< ::multiplayer::SpaceFighterState >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::SpaceFighterState >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

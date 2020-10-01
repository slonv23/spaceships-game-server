// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object-action.proto

#include "object-action.pb.h"

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

namespace protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterDestroy;
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto
namespace protobuf_space_2dfighter_2fspace_2dfighter_2dgot_2dhit_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2dgot_2dhit_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterGotHit;
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dgot_2dhit_2eproto
namespace protobuf_space_2dfighter_2fspace_2dfighter_2dinput_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2dinput_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterInput;
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dinput_2eproto
namespace protobuf_space_2dfighter_2fspace_2dfighter_2dopen_2dfire_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2dopen_2dfire_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterOpenFire;
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dopen_2dfire_2eproto
namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SpaceFighterStopFire;
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto
namespace multiplayer {
class ObjectActionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ObjectAction>
      _instance;
  const ::multiplayer::SpaceFighterInput* spacefighterinput_;
  const ::multiplayer::SpaceFighterOpenFire* spacefighteropenfire_;
  const ::multiplayer::SpaceFighterDestroy* spacefighterdestroy_;
  const ::multiplayer::SpaceFighterStopFire* spacefighterstopfire_;
  const ::multiplayer::SpaceFighterGotHit* spacefightergothit_;
} _ObjectAction_default_instance_;
}  // namespace multiplayer
namespace protobuf_object_2daction_2eproto {
static void InitDefaultsObjectAction() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_ObjectAction_default_instance_;
    new (ptr) ::multiplayer::ObjectAction();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::ObjectAction::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<5> scc_info_ObjectAction =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsObjectAction}, {
      &protobuf_space_2dfighter_2fspace_2dfighter_2dinput_2eproto::scc_info_SpaceFighterInput.base,
      &protobuf_space_2dfighter_2fspace_2dfighter_2dopen_2dfire_2eproto::scc_info_SpaceFighterOpenFire.base,
      &protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::scc_info_SpaceFighterDestroy.base,
      &protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto::scc_info_SpaceFighterStopFire.base,
      &protobuf_space_2dfighter_2fspace_2dfighter_2dgot_2dhit_2eproto::scc_info_SpaceFighterGotHit.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ObjectAction.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::ObjectAction, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::ObjectAction, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::ObjectAction, objectid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::ObjectAction, frameindex_),
  offsetof(::multiplayer::ObjectActionDefaultTypeInternal, spacefighterinput_),
  offsetof(::multiplayer::ObjectActionDefaultTypeInternal, spacefighteropenfire_),
  offsetof(::multiplayer::ObjectActionDefaultTypeInternal, spacefighterdestroy_),
  offsetof(::multiplayer::ObjectActionDefaultTypeInternal, spacefighterstopfire_),
  offsetof(::multiplayer::ObjectActionDefaultTypeInternal, spacefightergothit_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::ObjectAction, action_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::ObjectAction)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_ObjectAction_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "object-action.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\023object-action.proto\022\013multiplayer\032\'spac"
      "e-fighter/space-fighter-input.proto\032+spa"
      "ce-fighter/space-fighter-open-fire.proto"
      "\032+space-fighter/space-fighter-stop-fire."
      "proto\032)space-fighter/space-fighter-destr"
      "oy.proto\032)space-fighter/space-fighter-go"
      "t-hit.proto\"\201\003\n\014ObjectAction\022\020\n\010objectId"
      "\030\001 \001(\005\022\022\n\nframeIndex\030\002 \001(\005\022;\n\021spaceFight"
      "erInput\030\003 \001(\0132\036.multiplayer.SpaceFighter"
      "InputH\000\022A\n\024spaceFighterOpenFire\030\004 \001(\0132!."
      "multiplayer.SpaceFighterOpenFireH\000\022\?\n\023sp"
      "aceFighterDestroy\030\005 \001(\0132 .multiplayer.Sp"
      "aceFighterDestroyH\000\022A\n\024spaceFighterStopF"
      "ire\030\006 \001(\0132!.multiplayer.SpaceFighterStop"
      "FireH\000\022=\n\022spaceFighterGotHit\030\007 \001(\0132\037.mul"
      "tiplayer.SpaceFighterGotHitH\000B\010\n\006actionb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 647);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "object-action.proto", &protobuf_RegisterTypes);
  ::protobuf_space_2dfighter_2fspace_2dfighter_2dinput_2eproto::AddDescriptors();
  ::protobuf_space_2dfighter_2fspace_2dfighter_2dopen_2dfire_2eproto::AddDescriptors();
  ::protobuf_space_2dfighter_2fspace_2dfighter_2dstop_2dfire_2eproto::AddDescriptors();
  ::protobuf_space_2dfighter_2fspace_2dfighter_2ddestroy_2eproto::AddDescriptors();
  ::protobuf_space_2dfighter_2fspace_2dfighter_2dgot_2dhit_2eproto::AddDescriptors();
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
}  // namespace protobuf_object_2daction_2eproto
namespace multiplayer {

// ===================================================================

void ObjectAction::InitAsDefaultInstance() {
  ::multiplayer::_ObjectAction_default_instance_.spacefighterinput_ = const_cast< ::multiplayer::SpaceFighterInput*>(
      ::multiplayer::SpaceFighterInput::internal_default_instance());
  ::multiplayer::_ObjectAction_default_instance_.spacefighteropenfire_ = const_cast< ::multiplayer::SpaceFighterOpenFire*>(
      ::multiplayer::SpaceFighterOpenFire::internal_default_instance());
  ::multiplayer::_ObjectAction_default_instance_.spacefighterdestroy_ = const_cast< ::multiplayer::SpaceFighterDestroy*>(
      ::multiplayer::SpaceFighterDestroy::internal_default_instance());
  ::multiplayer::_ObjectAction_default_instance_.spacefighterstopfire_ = const_cast< ::multiplayer::SpaceFighterStopFire*>(
      ::multiplayer::SpaceFighterStopFire::internal_default_instance());
  ::multiplayer::_ObjectAction_default_instance_.spacefightergothit_ = const_cast< ::multiplayer::SpaceFighterGotHit*>(
      ::multiplayer::SpaceFighterGotHit::internal_default_instance());
}
void ObjectAction::set_allocated_spacefighterinput(::multiplayer::SpaceFighterInput* spacefighterinput) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_action();
  if (spacefighterinput) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      spacefighterinput = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, spacefighterinput, submessage_arena);
    }
    set_has_spacefighterinput();
    action_.spacefighterinput_ = spacefighterinput;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.ObjectAction.spaceFighterInput)
}
void ObjectAction::clear_spacefighterinput() {
  if (has_spacefighterinput()) {
    delete action_.spacefighterinput_;
    clear_has_action();
  }
}
void ObjectAction::set_allocated_spacefighteropenfire(::multiplayer::SpaceFighterOpenFire* spacefighteropenfire) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_action();
  if (spacefighteropenfire) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      spacefighteropenfire = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, spacefighteropenfire, submessage_arena);
    }
    set_has_spacefighteropenfire();
    action_.spacefighteropenfire_ = spacefighteropenfire;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.ObjectAction.spaceFighterOpenFire)
}
void ObjectAction::clear_spacefighteropenfire() {
  if (has_spacefighteropenfire()) {
    delete action_.spacefighteropenfire_;
    clear_has_action();
  }
}
void ObjectAction::set_allocated_spacefighterdestroy(::multiplayer::SpaceFighterDestroy* spacefighterdestroy) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_action();
  if (spacefighterdestroy) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      spacefighterdestroy = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, spacefighterdestroy, submessage_arena);
    }
    set_has_spacefighterdestroy();
    action_.spacefighterdestroy_ = spacefighterdestroy;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.ObjectAction.spaceFighterDestroy)
}
void ObjectAction::clear_spacefighterdestroy() {
  if (has_spacefighterdestroy()) {
    delete action_.spacefighterdestroy_;
    clear_has_action();
  }
}
void ObjectAction::set_allocated_spacefighterstopfire(::multiplayer::SpaceFighterStopFire* spacefighterstopfire) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_action();
  if (spacefighterstopfire) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      spacefighterstopfire = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, spacefighterstopfire, submessage_arena);
    }
    set_has_spacefighterstopfire();
    action_.spacefighterstopfire_ = spacefighterstopfire;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.ObjectAction.spaceFighterStopFire)
}
void ObjectAction::clear_spacefighterstopfire() {
  if (has_spacefighterstopfire()) {
    delete action_.spacefighterstopfire_;
    clear_has_action();
  }
}
void ObjectAction::set_allocated_spacefightergothit(::multiplayer::SpaceFighterGotHit* spacefightergothit) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_action();
  if (spacefightergothit) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      spacefightergothit = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, spacefightergothit, submessage_arena);
    }
    set_has_spacefightergothit();
    action_.spacefightergothit_ = spacefightergothit;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.ObjectAction.spaceFighterGotHit)
}
void ObjectAction::clear_spacefightergothit() {
  if (has_spacefightergothit()) {
    delete action_.spacefightergothit_;
    clear_has_action();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ObjectAction::kObjectIdFieldNumber;
const int ObjectAction::kFrameIndexFieldNumber;
const int ObjectAction::kSpaceFighterInputFieldNumber;
const int ObjectAction::kSpaceFighterOpenFireFieldNumber;
const int ObjectAction::kSpaceFighterDestroyFieldNumber;
const int ObjectAction::kSpaceFighterStopFireFieldNumber;
const int ObjectAction::kSpaceFighterGotHitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ObjectAction::ObjectAction()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_object_2daction_2eproto::scc_info_ObjectAction.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.ObjectAction)
}
ObjectAction::ObjectAction(const ObjectAction& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&objectid_, &from.objectid_,
    static_cast<size_t>(reinterpret_cast<char*>(&frameindex_) -
    reinterpret_cast<char*>(&objectid_)) + sizeof(frameindex_));
  clear_has_action();
  switch (from.action_case()) {
    case kSpaceFighterInput: {
      mutable_spacefighterinput()->::multiplayer::SpaceFighterInput::MergeFrom(from.spacefighterinput());
      break;
    }
    case kSpaceFighterOpenFire: {
      mutable_spacefighteropenfire()->::multiplayer::SpaceFighterOpenFire::MergeFrom(from.spacefighteropenfire());
      break;
    }
    case kSpaceFighterDestroy: {
      mutable_spacefighterdestroy()->::multiplayer::SpaceFighterDestroy::MergeFrom(from.spacefighterdestroy());
      break;
    }
    case kSpaceFighterStopFire: {
      mutable_spacefighterstopfire()->::multiplayer::SpaceFighterStopFire::MergeFrom(from.spacefighterstopfire());
      break;
    }
    case kSpaceFighterGotHit: {
      mutable_spacefightergothit()->::multiplayer::SpaceFighterGotHit::MergeFrom(from.spacefightergothit());
      break;
    }
    case ACTION_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:multiplayer.ObjectAction)
}

void ObjectAction::SharedCtor() {
  ::memset(&objectid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&frameindex_) -
      reinterpret_cast<char*>(&objectid_)) + sizeof(frameindex_));
  clear_has_action();
}

ObjectAction::~ObjectAction() {
  // @@protoc_insertion_point(destructor:multiplayer.ObjectAction)
  SharedDtor();
}

void ObjectAction::SharedDtor() {
  if (has_action()) {
    clear_action();
  }
}

void ObjectAction::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ObjectAction::descriptor() {
  ::protobuf_object_2daction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_object_2daction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ObjectAction& ObjectAction::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_object_2daction_2eproto::scc_info_ObjectAction.base);
  return *internal_default_instance();
}


void ObjectAction::clear_action() {
// @@protoc_insertion_point(one_of_clear_start:multiplayer.ObjectAction)
  switch (action_case()) {
    case kSpaceFighterInput: {
      delete action_.spacefighterinput_;
      break;
    }
    case kSpaceFighterOpenFire: {
      delete action_.spacefighteropenfire_;
      break;
    }
    case kSpaceFighterDestroy: {
      delete action_.spacefighterdestroy_;
      break;
    }
    case kSpaceFighterStopFire: {
      delete action_.spacefighterstopfire_;
      break;
    }
    case kSpaceFighterGotHit: {
      delete action_.spacefightergothit_;
      break;
    }
    case ACTION_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = ACTION_NOT_SET;
}


void ObjectAction::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.ObjectAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&objectid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&frameindex_) -
      reinterpret_cast<char*>(&objectid_)) + sizeof(frameindex_));
  clear_action();
  _internal_metadata_.Clear();
}

bool ObjectAction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.ObjectAction)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 objectId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &objectid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 frameIndex = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &frameindex_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.SpaceFighterInput spaceFighterInput = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spacefighterinput()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.SpaceFighterOpenFire spaceFighterOpenFire = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spacefighteropenfire()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.SpaceFighterDestroy spaceFighterDestroy = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spacefighterdestroy()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.SpaceFighterStopFire spaceFighterStopFire = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spacefighterstopfire()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.SpaceFighterGotHit spaceFighterGotHit = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spacefightergothit()));
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
  // @@protoc_insertion_point(parse_success:multiplayer.ObjectAction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.ObjectAction)
  return false;
#undef DO_
}

void ObjectAction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.ObjectAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 objectId = 1;
  if (this->objectid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->objectid(), output);
  }

  // int32 frameIndex = 2;
  if (this->frameindex() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->frameindex(), output);
  }

  // .multiplayer.SpaceFighterInput spaceFighterInput = 3;
  if (has_spacefighterinput()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_spacefighterinput(), output);
  }

  // .multiplayer.SpaceFighterOpenFire spaceFighterOpenFire = 4;
  if (has_spacefighteropenfire()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_spacefighteropenfire(), output);
  }

  // .multiplayer.SpaceFighterDestroy spaceFighterDestroy = 5;
  if (has_spacefighterdestroy()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_spacefighterdestroy(), output);
  }

  // .multiplayer.SpaceFighterStopFire spaceFighterStopFire = 6;
  if (has_spacefighterstopfire()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_spacefighterstopfire(), output);
  }

  // .multiplayer.SpaceFighterGotHit spaceFighterGotHit = 7;
  if (has_spacefightergothit()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_spacefightergothit(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.ObjectAction)
}

::google::protobuf::uint8* ObjectAction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.ObjectAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 objectId = 1;
  if (this->objectid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->objectid(), target);
  }

  // int32 frameIndex = 2;
  if (this->frameindex() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->frameindex(), target);
  }

  // .multiplayer.SpaceFighterInput spaceFighterInput = 3;
  if (has_spacefighterinput()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_spacefighterinput(), deterministic, target);
  }

  // .multiplayer.SpaceFighterOpenFire spaceFighterOpenFire = 4;
  if (has_spacefighteropenfire()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_spacefighteropenfire(), deterministic, target);
  }

  // .multiplayer.SpaceFighterDestroy spaceFighterDestroy = 5;
  if (has_spacefighterdestroy()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_spacefighterdestroy(), deterministic, target);
  }

  // .multiplayer.SpaceFighterStopFire spaceFighterStopFire = 6;
  if (has_spacefighterstopfire()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_spacefighterstopfire(), deterministic, target);
  }

  // .multiplayer.SpaceFighterGotHit spaceFighterGotHit = 7;
  if (has_spacefightergothit()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_spacefightergothit(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.ObjectAction)
  return target;
}

size_t ObjectAction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.ObjectAction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 objectId = 1;
  if (this->objectid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->objectid());
  }

  // int32 frameIndex = 2;
  if (this->frameindex() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->frameindex());
  }

  switch (action_case()) {
    // .multiplayer.SpaceFighterInput spaceFighterInput = 3;
    case kSpaceFighterInput: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *action_.spacefighterinput_);
      break;
    }
    // .multiplayer.SpaceFighterOpenFire spaceFighterOpenFire = 4;
    case kSpaceFighterOpenFire: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *action_.spacefighteropenfire_);
      break;
    }
    // .multiplayer.SpaceFighterDestroy spaceFighterDestroy = 5;
    case kSpaceFighterDestroy: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *action_.spacefighterdestroy_);
      break;
    }
    // .multiplayer.SpaceFighterStopFire spaceFighterStopFire = 6;
    case kSpaceFighterStopFire: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *action_.spacefighterstopfire_);
      break;
    }
    // .multiplayer.SpaceFighterGotHit spaceFighterGotHit = 7;
    case kSpaceFighterGotHit: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *action_.spacefightergothit_);
      break;
    }
    case ACTION_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ObjectAction::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.ObjectAction)
  GOOGLE_DCHECK_NE(&from, this);
  const ObjectAction* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ObjectAction>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.ObjectAction)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.ObjectAction)
    MergeFrom(*source);
  }
}

void ObjectAction::MergeFrom(const ObjectAction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.ObjectAction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.objectid() != 0) {
    set_objectid(from.objectid());
  }
  if (from.frameindex() != 0) {
    set_frameindex(from.frameindex());
  }
  switch (from.action_case()) {
    case kSpaceFighterInput: {
      mutable_spacefighterinput()->::multiplayer::SpaceFighterInput::MergeFrom(from.spacefighterinput());
      break;
    }
    case kSpaceFighterOpenFire: {
      mutable_spacefighteropenfire()->::multiplayer::SpaceFighterOpenFire::MergeFrom(from.spacefighteropenfire());
      break;
    }
    case kSpaceFighterDestroy: {
      mutable_spacefighterdestroy()->::multiplayer::SpaceFighterDestroy::MergeFrom(from.spacefighterdestroy());
      break;
    }
    case kSpaceFighterStopFire: {
      mutable_spacefighterstopfire()->::multiplayer::SpaceFighterStopFire::MergeFrom(from.spacefighterstopfire());
      break;
    }
    case kSpaceFighterGotHit: {
      mutable_spacefightergothit()->::multiplayer::SpaceFighterGotHit::MergeFrom(from.spacefightergothit());
      break;
    }
    case ACTION_NOT_SET: {
      break;
    }
  }
}

void ObjectAction::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.ObjectAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ObjectAction::CopyFrom(const ObjectAction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.ObjectAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ObjectAction::IsInitialized() const {
  return true;
}

void ObjectAction::Swap(ObjectAction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ObjectAction::InternalSwap(ObjectAction* other) {
  using std::swap;
  swap(objectid_, other->objectid_);
  swap(frameindex_, other->frameindex_);
  swap(action_, other->action_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ObjectAction::GetMetadata() const {
  protobuf_object_2daction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_object_2daction_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::ObjectAction* Arena::CreateMaybeMessage< ::multiplayer::ObjectAction >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::ObjectAction >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: space-fighter/space-fighter-state.proto

#ifndef PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2dstate_2eproto
#define PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2dstate_2eproto

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
#include "../float-vector.pb.h"
#include "../quaternion.pb.h"
#include "../object-action.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto 

namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto {
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
}  // namespace protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto
namespace multiplayer {
class SpaceFighterState;
class SpaceFighterStateDefaultTypeInternal;
extern SpaceFighterStateDefaultTypeInternal _SpaceFighterState_default_instance_;
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> ::multiplayer::SpaceFighterState* Arena::CreateMaybeMessage<::multiplayer::SpaceFighterState>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace multiplayer {

// ===================================================================

class SpaceFighterState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:multiplayer.SpaceFighterState) */ {
 public:
  SpaceFighterState();
  virtual ~SpaceFighterState();

  SpaceFighterState(const SpaceFighterState& from);

  inline SpaceFighterState& operator=(const SpaceFighterState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpaceFighterState(SpaceFighterState&& from) noexcept
    : SpaceFighterState() {
    *this = ::std::move(from);
  }

  inline SpaceFighterState& operator=(SpaceFighterState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SpaceFighterState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SpaceFighterState* internal_default_instance() {
    return reinterpret_cast<const SpaceFighterState*>(
               &_SpaceFighterState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SpaceFighterState* other);
  friend void swap(SpaceFighterState& a, SpaceFighterState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpaceFighterState* New() const final {
    return CreateMaybeMessage<SpaceFighterState>(NULL);
  }

  SpaceFighterState* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SpaceFighterState>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SpaceFighterState& from);
  void MergeFrom(const SpaceFighterState& from);
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
  void InternalSwap(SpaceFighterState* other);
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

  // repeated .multiplayer.ObjectAction actions = 10;
  int actions_size() const;
  void clear_actions();
  static const int kActionsFieldNumber = 10;
  ::multiplayer::ObjectAction* mutable_actions(int index);
  ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectAction >*
      mutable_actions();
  const ::multiplayer::ObjectAction& actions(int index) const;
  ::multiplayer::ObjectAction* add_actions();
  const ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectAction >&
      actions() const;

  // .multiplayer.FloatVector position = 1;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  private:
  const ::multiplayer::FloatVector& _internal_position() const;
  public:
  const ::multiplayer::FloatVector& position() const;
  ::multiplayer::FloatVector* release_position();
  ::multiplayer::FloatVector* mutable_position();
  void set_allocated_position(::multiplayer::FloatVector* position);

  // .multiplayer.Quaternion quaternion = 2;
  bool has_quaternion() const;
  void clear_quaternion();
  static const int kQuaternionFieldNumber = 2;
  private:
  const ::multiplayer::Quaternion& _internal_quaternion() const;
  public:
  const ::multiplayer::Quaternion& quaternion() const;
  ::multiplayer::Quaternion* release_quaternion();
  ::multiplayer::Quaternion* mutable_quaternion();
  void set_allocated_quaternion(::multiplayer::Quaternion* quaternion);

  // .multiplayer.FloatVector angularVelocity = 5;
  bool has_angularvelocity() const;
  void clear_angularvelocity();
  static const int kAngularVelocityFieldNumber = 5;
  private:
  const ::multiplayer::FloatVector& _internal_angularvelocity() const;
  public:
  const ::multiplayer::FloatVector& angularvelocity() const;
  ::multiplayer::FloatVector* release_angularvelocity();
  ::multiplayer::FloatVector* mutable_angularvelocity();
  void set_allocated_angularvelocity(::multiplayer::FloatVector* angularvelocity);

  // .multiplayer.Quaternion controlQuaternion = 7;
  bool has_controlquaternion() const;
  void clear_controlquaternion();
  static const int kControlQuaternionFieldNumber = 7;
  private:
  const ::multiplayer::Quaternion& _internal_controlquaternion() const;
  public:
  const ::multiplayer::Quaternion& controlquaternion() const;
  ::multiplayer::Quaternion* release_controlquaternion();
  ::multiplayer::Quaternion* mutable_controlquaternion();
  void set_allocated_controlquaternion(::multiplayer::Quaternion* controlquaternion);

  // .multiplayer.Quaternion controlRotQuaternion = 8;
  bool has_controlrotquaternion() const;
  void clear_controlrotquaternion();
  static const int kControlRotQuaternionFieldNumber = 8;
  private:
  const ::multiplayer::Quaternion& _internal_controlrotquaternion() const;
  public:
  const ::multiplayer::Quaternion& controlrotquaternion() const;
  ::multiplayer::Quaternion* release_controlrotquaternion();
  ::multiplayer::Quaternion* mutable_controlrotquaternion();
  void set_allocated_controlrotquaternion(::multiplayer::Quaternion* controlrotquaternion);

  // float speed = 3;
  void clear_speed();
  static const int kSpeedFieldNumber = 3;
  float speed() const;
  void set_speed(float value);

  // float acceleration = 4;
  void clear_acceleration();
  static const int kAccelerationFieldNumber = 4;
  float acceleration() const;
  void set_acceleration(float value);

  // float rollAngleBtwCurrentAndTargetOrientation = 6;
  void clear_rollanglebtwcurrentandtargetorientation();
  static const int kRollAngleBtwCurrentAndTargetOrientationFieldNumber = 6;
  float rollanglebtwcurrentandtargetorientation() const;
  void set_rollanglebtwcurrentandtargetorientation(float value);

  // bool shooting = 9;
  void clear_shooting();
  static const int kShootingFieldNumber = 9;
  bool shooting() const;
  void set_shooting(bool value);

  // @@protoc_insertion_point(class_scope:multiplayer.SpaceFighterState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectAction > actions_;
  ::multiplayer::FloatVector* position_;
  ::multiplayer::Quaternion* quaternion_;
  ::multiplayer::FloatVector* angularvelocity_;
  ::multiplayer::Quaternion* controlquaternion_;
  ::multiplayer::Quaternion* controlrotquaternion_;
  float speed_;
  float acceleration_;
  float rollanglebtwcurrentandtargetorientation_;
  bool shooting_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_space_2dfighter_2fspace_2dfighter_2dstate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpaceFighterState

// .multiplayer.FloatVector position = 1;
inline bool SpaceFighterState::has_position() const {
  return this != internal_default_instance() && position_ != NULL;
}
inline const ::multiplayer::FloatVector& SpaceFighterState::_internal_position() const {
  return *position_;
}
inline const ::multiplayer::FloatVector& SpaceFighterState::position() const {
  const ::multiplayer::FloatVector* p = position_;
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.position)
  return p != NULL ? *p : *reinterpret_cast<const ::multiplayer::FloatVector*>(
      &::multiplayer::_FloatVector_default_instance_);
}
inline ::multiplayer::FloatVector* SpaceFighterState::release_position() {
  // @@protoc_insertion_point(field_release:multiplayer.SpaceFighterState.position)
  
  ::multiplayer::FloatVector* temp = position_;
  position_ = NULL;
  return temp;
}
inline ::multiplayer::FloatVector* SpaceFighterState::mutable_position() {
  
  if (position_ == NULL) {
    auto* p = CreateMaybeMessage<::multiplayer::FloatVector>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.SpaceFighterState.position)
  return position_;
}
inline void SpaceFighterState::set_allocated_position(::multiplayer::FloatVector* position) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(position_);
  }
  if (position) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      position = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpaceFighterState.position)
}

// .multiplayer.Quaternion quaternion = 2;
inline bool SpaceFighterState::has_quaternion() const {
  return this != internal_default_instance() && quaternion_ != NULL;
}
inline const ::multiplayer::Quaternion& SpaceFighterState::_internal_quaternion() const {
  return *quaternion_;
}
inline const ::multiplayer::Quaternion& SpaceFighterState::quaternion() const {
  const ::multiplayer::Quaternion* p = quaternion_;
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.quaternion)
  return p != NULL ? *p : *reinterpret_cast<const ::multiplayer::Quaternion*>(
      &::multiplayer::_Quaternion_default_instance_);
}
inline ::multiplayer::Quaternion* SpaceFighterState::release_quaternion() {
  // @@protoc_insertion_point(field_release:multiplayer.SpaceFighterState.quaternion)
  
  ::multiplayer::Quaternion* temp = quaternion_;
  quaternion_ = NULL;
  return temp;
}
inline ::multiplayer::Quaternion* SpaceFighterState::mutable_quaternion() {
  
  if (quaternion_ == NULL) {
    auto* p = CreateMaybeMessage<::multiplayer::Quaternion>(GetArenaNoVirtual());
    quaternion_ = p;
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.SpaceFighterState.quaternion)
  return quaternion_;
}
inline void SpaceFighterState::set_allocated_quaternion(::multiplayer::Quaternion* quaternion) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(quaternion_);
  }
  if (quaternion) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      quaternion = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, quaternion, submessage_arena);
    }
    
  } else {
    
  }
  quaternion_ = quaternion;
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpaceFighterState.quaternion)
}

// float speed = 3;
inline void SpaceFighterState::clear_speed() {
  speed_ = 0;
}
inline float SpaceFighterState::speed() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.speed)
  return speed_;
}
inline void SpaceFighterState::set_speed(float value) {
  
  speed_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.SpaceFighterState.speed)
}

// float acceleration = 4;
inline void SpaceFighterState::clear_acceleration() {
  acceleration_ = 0;
}
inline float SpaceFighterState::acceleration() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.acceleration)
  return acceleration_;
}
inline void SpaceFighterState::set_acceleration(float value) {
  
  acceleration_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.SpaceFighterState.acceleration)
}

// .multiplayer.FloatVector angularVelocity = 5;
inline bool SpaceFighterState::has_angularvelocity() const {
  return this != internal_default_instance() && angularvelocity_ != NULL;
}
inline const ::multiplayer::FloatVector& SpaceFighterState::_internal_angularvelocity() const {
  return *angularvelocity_;
}
inline const ::multiplayer::FloatVector& SpaceFighterState::angularvelocity() const {
  const ::multiplayer::FloatVector* p = angularvelocity_;
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.angularVelocity)
  return p != NULL ? *p : *reinterpret_cast<const ::multiplayer::FloatVector*>(
      &::multiplayer::_FloatVector_default_instance_);
}
inline ::multiplayer::FloatVector* SpaceFighterState::release_angularvelocity() {
  // @@protoc_insertion_point(field_release:multiplayer.SpaceFighterState.angularVelocity)
  
  ::multiplayer::FloatVector* temp = angularvelocity_;
  angularvelocity_ = NULL;
  return temp;
}
inline ::multiplayer::FloatVector* SpaceFighterState::mutable_angularvelocity() {
  
  if (angularvelocity_ == NULL) {
    auto* p = CreateMaybeMessage<::multiplayer::FloatVector>(GetArenaNoVirtual());
    angularvelocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.SpaceFighterState.angularVelocity)
  return angularvelocity_;
}
inline void SpaceFighterState::set_allocated_angularvelocity(::multiplayer::FloatVector* angularvelocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(angularvelocity_);
  }
  if (angularvelocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      angularvelocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, angularvelocity, submessage_arena);
    }
    
  } else {
    
  }
  angularvelocity_ = angularvelocity;
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpaceFighterState.angularVelocity)
}

// float rollAngleBtwCurrentAndTargetOrientation = 6;
inline void SpaceFighterState::clear_rollanglebtwcurrentandtargetorientation() {
  rollanglebtwcurrentandtargetorientation_ = 0;
}
inline float SpaceFighterState::rollanglebtwcurrentandtargetorientation() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.rollAngleBtwCurrentAndTargetOrientation)
  return rollanglebtwcurrentandtargetorientation_;
}
inline void SpaceFighterState::set_rollanglebtwcurrentandtargetorientation(float value) {
  
  rollanglebtwcurrentandtargetorientation_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.SpaceFighterState.rollAngleBtwCurrentAndTargetOrientation)
}

// .multiplayer.Quaternion controlQuaternion = 7;
inline bool SpaceFighterState::has_controlquaternion() const {
  return this != internal_default_instance() && controlquaternion_ != NULL;
}
inline const ::multiplayer::Quaternion& SpaceFighterState::_internal_controlquaternion() const {
  return *controlquaternion_;
}
inline const ::multiplayer::Quaternion& SpaceFighterState::controlquaternion() const {
  const ::multiplayer::Quaternion* p = controlquaternion_;
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.controlQuaternion)
  return p != NULL ? *p : *reinterpret_cast<const ::multiplayer::Quaternion*>(
      &::multiplayer::_Quaternion_default_instance_);
}
inline ::multiplayer::Quaternion* SpaceFighterState::release_controlquaternion() {
  // @@protoc_insertion_point(field_release:multiplayer.SpaceFighterState.controlQuaternion)
  
  ::multiplayer::Quaternion* temp = controlquaternion_;
  controlquaternion_ = NULL;
  return temp;
}
inline ::multiplayer::Quaternion* SpaceFighterState::mutable_controlquaternion() {
  
  if (controlquaternion_ == NULL) {
    auto* p = CreateMaybeMessage<::multiplayer::Quaternion>(GetArenaNoVirtual());
    controlquaternion_ = p;
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.SpaceFighterState.controlQuaternion)
  return controlquaternion_;
}
inline void SpaceFighterState::set_allocated_controlquaternion(::multiplayer::Quaternion* controlquaternion) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(controlquaternion_);
  }
  if (controlquaternion) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      controlquaternion = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, controlquaternion, submessage_arena);
    }
    
  } else {
    
  }
  controlquaternion_ = controlquaternion;
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpaceFighterState.controlQuaternion)
}

// .multiplayer.Quaternion controlRotQuaternion = 8;
inline bool SpaceFighterState::has_controlrotquaternion() const {
  return this != internal_default_instance() && controlrotquaternion_ != NULL;
}
inline const ::multiplayer::Quaternion& SpaceFighterState::_internal_controlrotquaternion() const {
  return *controlrotquaternion_;
}
inline const ::multiplayer::Quaternion& SpaceFighterState::controlrotquaternion() const {
  const ::multiplayer::Quaternion* p = controlrotquaternion_;
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.controlRotQuaternion)
  return p != NULL ? *p : *reinterpret_cast<const ::multiplayer::Quaternion*>(
      &::multiplayer::_Quaternion_default_instance_);
}
inline ::multiplayer::Quaternion* SpaceFighterState::release_controlrotquaternion() {
  // @@protoc_insertion_point(field_release:multiplayer.SpaceFighterState.controlRotQuaternion)
  
  ::multiplayer::Quaternion* temp = controlrotquaternion_;
  controlrotquaternion_ = NULL;
  return temp;
}
inline ::multiplayer::Quaternion* SpaceFighterState::mutable_controlrotquaternion() {
  
  if (controlrotquaternion_ == NULL) {
    auto* p = CreateMaybeMessage<::multiplayer::Quaternion>(GetArenaNoVirtual());
    controlrotquaternion_ = p;
  }
  // @@protoc_insertion_point(field_mutable:multiplayer.SpaceFighterState.controlRotQuaternion)
  return controlrotquaternion_;
}
inline void SpaceFighterState::set_allocated_controlrotquaternion(::multiplayer::Quaternion* controlrotquaternion) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(controlrotquaternion_);
  }
  if (controlrotquaternion) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      controlrotquaternion = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, controlrotquaternion, submessage_arena);
    }
    
  } else {
    
  }
  controlrotquaternion_ = controlrotquaternion;
  // @@protoc_insertion_point(field_set_allocated:multiplayer.SpaceFighterState.controlRotQuaternion)
}

// bool shooting = 9;
inline void SpaceFighterState::clear_shooting() {
  shooting_ = false;
}
inline bool SpaceFighterState::shooting() const {
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.shooting)
  return shooting_;
}
inline void SpaceFighterState::set_shooting(bool value) {
  
  shooting_ = value;
  // @@protoc_insertion_point(field_set:multiplayer.SpaceFighterState.shooting)
}

// repeated .multiplayer.ObjectAction actions = 10;
inline int SpaceFighterState::actions_size() const {
  return actions_.size();
}
inline ::multiplayer::ObjectAction* SpaceFighterState::mutable_actions(int index) {
  // @@protoc_insertion_point(field_mutable:multiplayer.SpaceFighterState.actions)
  return actions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectAction >*
SpaceFighterState::mutable_actions() {
  // @@protoc_insertion_point(field_mutable_list:multiplayer.SpaceFighterState.actions)
  return &actions_;
}
inline const ::multiplayer::ObjectAction& SpaceFighterState::actions(int index) const {
  // @@protoc_insertion_point(field_get:multiplayer.SpaceFighterState.actions)
  return actions_.Get(index);
}
inline ::multiplayer::ObjectAction* SpaceFighterState::add_actions() {
  // @@protoc_insertion_point(field_add:multiplayer.SpaceFighterState.actions)
  return actions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::multiplayer::ObjectAction >&
SpaceFighterState::actions() const {
  // @@protoc_insertion_point(field_list:multiplayer.SpaceFighterState.actions)
  return actions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace multiplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_space_2dfighter_2fspace_2dfighter_2dstate_2eproto

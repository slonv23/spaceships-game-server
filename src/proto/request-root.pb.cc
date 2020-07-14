// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request-root.proto

#include "request-root.pb.h"

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

namespace protobuf_input_2daction_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_input_2daction_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_InputAction;
}  // namespace protobuf_input_2daction_2eproto
namespace protobuf_spawn_2drequest_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_spawn_2drequest_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SpawnRequest;
}  // namespace protobuf_spawn_2drequest_2eproto
namespace multiplayer {
class RequestRootDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RequestRoot>
      _instance;
  const ::multiplayer::InputAction* inputaction_;
  const ::multiplayer::SpawnRequest* spawnrequest_;
} _RequestRoot_default_instance_;
}  // namespace multiplayer
namespace protobuf_request_2droot_2eproto {
static void InitDefaultsRequestRoot() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_RequestRoot_default_instance_;
    new (ptr) ::multiplayer::RequestRoot();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::RequestRoot::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_RequestRoot =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsRequestRoot}, {
      &protobuf_input_2daction_2eproto::scc_info_InputAction.base,
      &protobuf_spawn_2drequest_2eproto::scc_info_SpawnRequest.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RequestRoot.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestRoot, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestRoot, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestRoot, requestid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestRoot, requestsenttimestamp_),
  offsetof(::multiplayer::RequestRootDefaultTypeInternal, inputaction_),
  offsetof(::multiplayer::RequestRootDefaultTypeInternal, spawnrequest_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestRoot, message_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::RequestRoot)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_RequestRoot_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "request-root.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\022request-root.proto\022\013multiplayer\032\022input"
      "-action.proto\032\023spawn-request.proto\"\255\001\n\013R"
      "equestRoot\022\021\n\trequestId\030\001 \001(\005\022\034\n\024request"
      "SentTimestamp\030\002 \001(\r\022/\n\013inputAction\030\003 \001(\013"
      "2\030.multiplayer.InputActionH\000\0221\n\014spawnReq"
      "uest\030\004 \001(\0132\031.multiplayer.SpawnRequestH\000B"
      "\t\n\007messageb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 258);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "request-root.proto", &protobuf_RegisterTypes);
  ::protobuf_input_2daction_2eproto::AddDescriptors();
  ::protobuf_spawn_2drequest_2eproto::AddDescriptors();
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
}  // namespace protobuf_request_2droot_2eproto
namespace multiplayer {

// ===================================================================

void RequestRoot::InitAsDefaultInstance() {
  ::multiplayer::_RequestRoot_default_instance_.inputaction_ = const_cast< ::multiplayer::InputAction*>(
      ::multiplayer::InputAction::internal_default_instance());
  ::multiplayer::_RequestRoot_default_instance_.spawnrequest_ = const_cast< ::multiplayer::SpawnRequest*>(
      ::multiplayer::SpawnRequest::internal_default_instance());
}
void RequestRoot::set_allocated_inputaction(::multiplayer::InputAction* inputaction) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_message();
  if (inputaction) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      inputaction = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, inputaction, submessage_arena);
    }
    set_has_inputaction();
    message_.inputaction_ = inputaction;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.RequestRoot.inputAction)
}
void RequestRoot::clear_inputaction() {
  if (has_inputaction()) {
    delete message_.inputaction_;
    clear_has_message();
  }
}
void RequestRoot::set_allocated_spawnrequest(::multiplayer::SpawnRequest* spawnrequest) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_message();
  if (spawnrequest) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      spawnrequest = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, spawnrequest, submessage_arena);
    }
    set_has_spawnrequest();
    message_.spawnrequest_ = spawnrequest;
  }
  // @@protoc_insertion_point(field_set_allocated:multiplayer.RequestRoot.spawnRequest)
}
void RequestRoot::clear_spawnrequest() {
  if (has_spawnrequest()) {
    delete message_.spawnrequest_;
    clear_has_message();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RequestRoot::kRequestIdFieldNumber;
const int RequestRoot::kRequestSentTimestampFieldNumber;
const int RequestRoot::kInputActionFieldNumber;
const int RequestRoot::kSpawnRequestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RequestRoot::RequestRoot()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_request_2droot_2eproto::scc_info_RequestRoot.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.RequestRoot)
}
RequestRoot::RequestRoot(const RequestRoot& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&requestid_, &from.requestid_,
    static_cast<size_t>(reinterpret_cast<char*>(&requestsenttimestamp_) -
    reinterpret_cast<char*>(&requestid_)) + sizeof(requestsenttimestamp_));
  clear_has_message();
  switch (from.message_case()) {
    case kInputAction: {
      mutable_inputaction()->::multiplayer::InputAction::MergeFrom(from.inputaction());
      break;
    }
    case kSpawnRequest: {
      mutable_spawnrequest()->::multiplayer::SpawnRequest::MergeFrom(from.spawnrequest());
      break;
    }
    case MESSAGE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:multiplayer.RequestRoot)
}

void RequestRoot::SharedCtor() {
  ::memset(&requestid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&requestsenttimestamp_) -
      reinterpret_cast<char*>(&requestid_)) + sizeof(requestsenttimestamp_));
  clear_has_message();
}

RequestRoot::~RequestRoot() {
  // @@protoc_insertion_point(destructor:multiplayer.RequestRoot)
  SharedDtor();
}

void RequestRoot::SharedDtor() {
  if (has_message()) {
    clear_message();
  }
}

void RequestRoot::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RequestRoot::descriptor() {
  ::protobuf_request_2droot_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_request_2droot_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RequestRoot& RequestRoot::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_request_2droot_2eproto::scc_info_RequestRoot.base);
  return *internal_default_instance();
}


void RequestRoot::clear_message() {
// @@protoc_insertion_point(one_of_clear_start:multiplayer.RequestRoot)
  switch (message_case()) {
    case kInputAction: {
      delete message_.inputaction_;
      break;
    }
    case kSpawnRequest: {
      delete message_.spawnrequest_;
      break;
    }
    case MESSAGE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = MESSAGE_NOT_SET;
}


void RequestRoot::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.RequestRoot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&requestid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&requestsenttimestamp_) -
      reinterpret_cast<char*>(&requestid_)) + sizeof(requestsenttimestamp_));
  clear_message();
  _internal_metadata_.Clear();
}

bool RequestRoot::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.RequestRoot)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 requestId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &requestid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 requestSentTimestamp = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &requestsenttimestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.InputAction inputAction = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_inputaction()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .multiplayer.SpawnRequest spawnRequest = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_spawnrequest()));
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
  // @@protoc_insertion_point(parse_success:multiplayer.RequestRoot)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.RequestRoot)
  return false;
#undef DO_
}

void RequestRoot::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.RequestRoot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 requestId = 1;
  if (this->requestid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->requestid(), output);
  }

  // uint32 requestSentTimestamp = 2;
  if (this->requestsenttimestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->requestsenttimestamp(), output);
  }

  // .multiplayer.InputAction inputAction = 3;
  if (has_inputaction()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_inputaction(), output);
  }

  // .multiplayer.SpawnRequest spawnRequest = 4;
  if (has_spawnrequest()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_spawnrequest(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.RequestRoot)
}

::google::protobuf::uint8* RequestRoot::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.RequestRoot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 requestId = 1;
  if (this->requestid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->requestid(), target);
  }

  // uint32 requestSentTimestamp = 2;
  if (this->requestsenttimestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->requestsenttimestamp(), target);
  }

  // .multiplayer.InputAction inputAction = 3;
  if (has_inputaction()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_inputaction(), deterministic, target);
  }

  // .multiplayer.SpawnRequest spawnRequest = 4;
  if (has_spawnrequest()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_spawnrequest(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.RequestRoot)
  return target;
}

size_t RequestRoot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.RequestRoot)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 requestId = 1;
  if (this->requestid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->requestid());
  }

  // uint32 requestSentTimestamp = 2;
  if (this->requestsenttimestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->requestsenttimestamp());
  }

  switch (message_case()) {
    // .multiplayer.InputAction inputAction = 3;
    case kInputAction: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *message_.inputaction_);
      break;
    }
    // .multiplayer.SpawnRequest spawnRequest = 4;
    case kSpawnRequest: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *message_.spawnrequest_);
      break;
    }
    case MESSAGE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestRoot::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.RequestRoot)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestRoot* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RequestRoot>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.RequestRoot)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.RequestRoot)
    MergeFrom(*source);
  }
}

void RequestRoot::MergeFrom(const RequestRoot& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.RequestRoot)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.requestid() != 0) {
    set_requestid(from.requestid());
  }
  if (from.requestsenttimestamp() != 0) {
    set_requestsenttimestamp(from.requestsenttimestamp());
  }
  switch (from.message_case()) {
    case kInputAction: {
      mutable_inputaction()->::multiplayer::InputAction::MergeFrom(from.inputaction());
      break;
    }
    case kSpawnRequest: {
      mutable_spawnrequest()->::multiplayer::SpawnRequest::MergeFrom(from.spawnrequest());
      break;
    }
    case MESSAGE_NOT_SET: {
      break;
    }
  }
}

void RequestRoot::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.RequestRoot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestRoot::CopyFrom(const RequestRoot& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.RequestRoot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestRoot::IsInitialized() const {
  return true;
}

void RequestRoot::Swap(RequestRoot* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RequestRoot::InternalSwap(RequestRoot* other) {
  using std::swap;
  swap(requestid_, other->requestid_);
  swap(requestsenttimestamp_, other->requestsenttimestamp_);
  swap(message_, other->message_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RequestRoot::GetMetadata() const {
  protobuf_request_2droot_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_request_2droot_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::RequestRoot* Arena::CreateMaybeMessage< ::multiplayer::RequestRoot >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::RequestRoot >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

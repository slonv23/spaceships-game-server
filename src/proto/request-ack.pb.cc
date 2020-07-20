// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request-ack.proto

#include "request-ack.pb.h"

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
class RequestAckDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RequestAck>
      _instance;
} _RequestAck_default_instance_;
}  // namespace multiplayer
namespace protobuf_request_2dack_2eproto {
static void InitDefaultsRequestAck() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::multiplayer::_RequestAck_default_instance_;
    new (ptr) ::multiplayer::RequestAck();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiplayer::RequestAck::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RequestAck =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRequestAck}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RequestAck.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestAck, requestid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiplayer::RequestAck, requestsenttimestamp_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiplayer::RequestAck)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiplayer::_RequestAck_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "request-ack.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021request-ack.proto\022\013multiplayer\"=\n\nRequ"
      "estAck\022\021\n\trequestId\030\001 \001(\005\022\034\n\024requestSent"
      "Timestamp\030\002 \001(\004b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "request-ack.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_request_2dack_2eproto
namespace multiplayer {

// ===================================================================

void RequestAck::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RequestAck::kRequestIdFieldNumber;
const int RequestAck::kRequestSentTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RequestAck::RequestAck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_request_2dack_2eproto::scc_info_RequestAck.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiplayer.RequestAck)
}
RequestAck::RequestAck(const RequestAck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&requestsenttimestamp_, &from.requestsenttimestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&requestid_) -
    reinterpret_cast<char*>(&requestsenttimestamp_)) + sizeof(requestid_));
  // @@protoc_insertion_point(copy_constructor:multiplayer.RequestAck)
}

void RequestAck::SharedCtor() {
  ::memset(&requestsenttimestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&requestid_) -
      reinterpret_cast<char*>(&requestsenttimestamp_)) + sizeof(requestid_));
}

RequestAck::~RequestAck() {
  // @@protoc_insertion_point(destructor:multiplayer.RequestAck)
  SharedDtor();
}

void RequestAck::SharedDtor() {
}

void RequestAck::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RequestAck::descriptor() {
  ::protobuf_request_2dack_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_request_2dack_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RequestAck& RequestAck::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_request_2dack_2eproto::scc_info_RequestAck.base);
  return *internal_default_instance();
}


void RequestAck::Clear() {
// @@protoc_insertion_point(message_clear_start:multiplayer.RequestAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&requestsenttimestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&requestid_) -
      reinterpret_cast<char*>(&requestsenttimestamp_)) + sizeof(requestid_));
  _internal_metadata_.Clear();
}

bool RequestAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiplayer.RequestAck)
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

      // uint64 requestSentTimestamp = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &requestsenttimestamp_)));
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
  // @@protoc_insertion_point(parse_success:multiplayer.RequestAck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiplayer.RequestAck)
  return false;
#undef DO_
}

void RequestAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiplayer.RequestAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 requestId = 1;
  if (this->requestid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->requestid(), output);
  }

  // uint64 requestSentTimestamp = 2;
  if (this->requestsenttimestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->requestsenttimestamp(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiplayer.RequestAck)
}

::google::protobuf::uint8* RequestAck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiplayer.RequestAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 requestId = 1;
  if (this->requestid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->requestid(), target);
  }

  // uint64 requestSentTimestamp = 2;
  if (this->requestsenttimestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->requestsenttimestamp(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiplayer.RequestAck)
  return target;
}

size_t RequestAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiplayer.RequestAck)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 requestSentTimestamp = 2;
  if (this->requestsenttimestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->requestsenttimestamp());
  }

  // int32 requestId = 1;
  if (this->requestid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->requestid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestAck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiplayer.RequestAck)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestAck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RequestAck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiplayer.RequestAck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiplayer.RequestAck)
    MergeFrom(*source);
  }
}

void RequestAck::MergeFrom(const RequestAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiplayer.RequestAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.requestsenttimestamp() != 0) {
    set_requestsenttimestamp(from.requestsenttimestamp());
  }
  if (from.requestid() != 0) {
    set_requestid(from.requestid());
  }
}

void RequestAck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiplayer.RequestAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestAck::CopyFrom(const RequestAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiplayer.RequestAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestAck::IsInitialized() const {
  return true;
}

void RequestAck::Swap(RequestAck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RequestAck::InternalSwap(RequestAck* other) {
  using std::swap;
  swap(requestsenttimestamp_, other->requestsenttimestamp_);
  swap(requestid_, other->requestid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RequestAck::GetMetadata() const {
  protobuf_request_2dack_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_request_2dack_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiplayer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::multiplayer::RequestAck* Arena::CreateMaybeMessage< ::multiplayer::RequestAck >(Arena* arena) {
  return Arena::CreateInternal< ::multiplayer::RequestAck >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

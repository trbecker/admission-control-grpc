// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: admission.proto

#include "admission.pb.h"

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

namespace admission {
class AdmissionRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AdmissionRequest>
      _instance;
} _AdmissionRequest_default_instance_;
class AdmissionResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AdmissionResponse>
      _instance;
} _AdmissionResponse_default_instance_;
}  // namespace admission
namespace protobuf_admission_2eproto {
static void InitDefaultsAdmissionRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::admission::_AdmissionRequest_default_instance_;
    new (ptr) ::admission::AdmissionRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::admission::AdmissionRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AdmissionRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAdmissionRequest}, {}};

static void InitDefaultsAdmissionResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::admission::_AdmissionResponse_default_instance_;
    new (ptr) ::admission::AdmissionResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::admission::AdmissionResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AdmissionResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAdmissionResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AdmissionRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AdmissionResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::admission::AdmissionRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::admission::AdmissionRequest, imsi_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::admission::AdmissionRequest, gnb_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::admission::AdmissionRequest, sinr_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::admission::AdmissionResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::admission::AdmissionResponse, accept_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::admission::AdmissionRequest)},
  { 8, -1, sizeof(::admission::AdmissionResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::admission::_AdmissionRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::admission::_AdmissionResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "admission.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\017admission.proto\022\tadmission\";\n\020Admissio"
      "nRequest\022\014\n\004iMSI\030\001 \001(\t\022\013\n\003gnb\030\002 \001(\005\022\014\n\004s"
      "inr\030\003 \001(\002\"#\n\021AdmissionResponse\022\016\n\006accept"
      "\030\001 \001(\0102U\n\tAdmission\022H\n\tAdmission\022\033.admis"
      "sion.AdmissionRequest\032\034.admission.Admiss"
      "ionResponse\"\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 221);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "admission.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_admission_2eproto
namespace admission {

// ===================================================================

void AdmissionRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AdmissionRequest::kIMSIFieldNumber;
const int AdmissionRequest::kGnbFieldNumber;
const int AdmissionRequest::kSinrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AdmissionRequest::AdmissionRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_admission_2eproto::scc_info_AdmissionRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:admission.AdmissionRequest)
}
AdmissionRequest::AdmissionRequest(const AdmissionRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  imsi_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.imsi().size() > 0) {
    imsi_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.imsi_);
  }
  ::memcpy(&gnb_, &from.gnb_,
    static_cast<size_t>(reinterpret_cast<char*>(&sinr_) -
    reinterpret_cast<char*>(&gnb_)) + sizeof(sinr_));
  // @@protoc_insertion_point(copy_constructor:admission.AdmissionRequest)
}

void AdmissionRequest::SharedCtor() {
  imsi_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&gnb_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sinr_) -
      reinterpret_cast<char*>(&gnb_)) + sizeof(sinr_));
}

AdmissionRequest::~AdmissionRequest() {
  // @@protoc_insertion_point(destructor:admission.AdmissionRequest)
  SharedDtor();
}

void AdmissionRequest::SharedDtor() {
  imsi_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AdmissionRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AdmissionRequest::descriptor() {
  ::protobuf_admission_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_admission_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AdmissionRequest& AdmissionRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_admission_2eproto::scc_info_AdmissionRequest.base);
  return *internal_default_instance();
}


void AdmissionRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:admission.AdmissionRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  imsi_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&gnb_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sinr_) -
      reinterpret_cast<char*>(&gnb_)) + sizeof(sinr_));
  _internal_metadata_.Clear();
}

bool AdmissionRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:admission.AdmissionRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string iMSI = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_imsi()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->imsi().data(), static_cast<int>(this->imsi().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "admission.AdmissionRequest.iMSI"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 gnb = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gnb_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float sinr = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sinr_)));
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
  // @@protoc_insertion_point(parse_success:admission.AdmissionRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:admission.AdmissionRequest)
  return false;
#undef DO_
}

void AdmissionRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:admission.AdmissionRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string iMSI = 1;
  if (this->imsi().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->imsi().data(), static_cast<int>(this->imsi().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "admission.AdmissionRequest.iMSI");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->imsi(), output);
  }

  // int32 gnb = 2;
  if (this->gnb() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->gnb(), output);
  }

  // float sinr = 3;
  if (this->sinr() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->sinr(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:admission.AdmissionRequest)
}

::google::protobuf::uint8* AdmissionRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:admission.AdmissionRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string iMSI = 1;
  if (this->imsi().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->imsi().data(), static_cast<int>(this->imsi().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "admission.AdmissionRequest.iMSI");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->imsi(), target);
  }

  // int32 gnb = 2;
  if (this->gnb() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->gnb(), target);
  }

  // float sinr = 3;
  if (this->sinr() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->sinr(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:admission.AdmissionRequest)
  return target;
}

size_t AdmissionRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:admission.AdmissionRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string iMSI = 1;
  if (this->imsi().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->imsi());
  }

  // int32 gnb = 2;
  if (this->gnb() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->gnb());
  }

  // float sinr = 3;
  if (this->sinr() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AdmissionRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:admission.AdmissionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const AdmissionRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AdmissionRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:admission.AdmissionRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:admission.AdmissionRequest)
    MergeFrom(*source);
  }
}

void AdmissionRequest::MergeFrom(const AdmissionRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:admission.AdmissionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.imsi().size() > 0) {

    imsi_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.imsi_);
  }
  if (from.gnb() != 0) {
    set_gnb(from.gnb());
  }
  if (from.sinr() != 0) {
    set_sinr(from.sinr());
  }
}

void AdmissionRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:admission.AdmissionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AdmissionRequest::CopyFrom(const AdmissionRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:admission.AdmissionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AdmissionRequest::IsInitialized() const {
  return true;
}

void AdmissionRequest::Swap(AdmissionRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AdmissionRequest::InternalSwap(AdmissionRequest* other) {
  using std::swap;
  imsi_.Swap(&other->imsi_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(gnb_, other->gnb_);
  swap(sinr_, other->sinr_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AdmissionRequest::GetMetadata() const {
  protobuf_admission_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_admission_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void AdmissionResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AdmissionResponse::kAcceptFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AdmissionResponse::AdmissionResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_admission_2eproto::scc_info_AdmissionResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:admission.AdmissionResponse)
}
AdmissionResponse::AdmissionResponse(const AdmissionResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  accept_ = from.accept_;
  // @@protoc_insertion_point(copy_constructor:admission.AdmissionResponse)
}

void AdmissionResponse::SharedCtor() {
  accept_ = false;
}

AdmissionResponse::~AdmissionResponse() {
  // @@protoc_insertion_point(destructor:admission.AdmissionResponse)
  SharedDtor();
}

void AdmissionResponse::SharedDtor() {
}

void AdmissionResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AdmissionResponse::descriptor() {
  ::protobuf_admission_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_admission_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AdmissionResponse& AdmissionResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_admission_2eproto::scc_info_AdmissionResponse.base);
  return *internal_default_instance();
}


void AdmissionResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:admission.AdmissionResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  accept_ = false;
  _internal_metadata_.Clear();
}

bool AdmissionResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:admission.AdmissionResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool accept = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &accept_)));
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
  // @@protoc_insertion_point(parse_success:admission.AdmissionResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:admission.AdmissionResponse)
  return false;
#undef DO_
}

void AdmissionResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:admission.AdmissionResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool accept = 1;
  if (this->accept() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->accept(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:admission.AdmissionResponse)
}

::google::protobuf::uint8* AdmissionResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:admission.AdmissionResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool accept = 1;
  if (this->accept() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->accept(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:admission.AdmissionResponse)
  return target;
}

size_t AdmissionResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:admission.AdmissionResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool accept = 1;
  if (this->accept() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AdmissionResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:admission.AdmissionResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const AdmissionResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AdmissionResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:admission.AdmissionResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:admission.AdmissionResponse)
    MergeFrom(*source);
  }
}

void AdmissionResponse::MergeFrom(const AdmissionResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:admission.AdmissionResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.accept() != 0) {
    set_accept(from.accept());
  }
}

void AdmissionResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:admission.AdmissionResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AdmissionResponse::CopyFrom(const AdmissionResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:admission.AdmissionResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AdmissionResponse::IsInitialized() const {
  return true;
}

void AdmissionResponse::Swap(AdmissionResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AdmissionResponse::InternalSwap(AdmissionResponse* other) {
  using std::swap;
  swap(accept_, other->accept_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AdmissionResponse::GetMetadata() const {
  protobuf_admission_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_admission_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace admission
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::admission::AdmissionRequest* Arena::CreateMaybeMessage< ::admission::AdmissionRequest >(Arena* arena) {
  return Arena::CreateInternal< ::admission::AdmissionRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::admission::AdmissionResponse* Arena::CreateMaybeMessage< ::admission::AdmissionResponse >(Arena* arena) {
  return Arena::CreateInternal< ::admission::AdmissionResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pose.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Proto {

namespace {

const ::google::protobuf::Descriptor* Position_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Position_reflection_ = NULL;
const ::google::protobuf::Descriptor* Attitude_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Attitude_reflection_ = NULL;
const ::google::protobuf::Descriptor* Pose_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Pose_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_pose_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_pose_2eproto() {
  protobuf_AddDesc_pose_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pose.proto");
  GOOGLE_CHECK(file != NULL);
  Position_descriptor_ = file->message_type(0);
  static const int Position_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, z_),
  };
  Position_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Position_descriptor_,
      Position::default_instance_,
      Position_offsets_,
      -1,
      -1,
      -1,
      sizeof(Position),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, _is_default_instance_));
  Attitude_descriptor_ = file->message_type(1);
  static const int Attitude_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Attitude, qw_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Attitude, qx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Attitude, qy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Attitude, qz_),
  };
  Attitude_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Attitude_descriptor_,
      Attitude::default_instance_,
      Attitude_offsets_,
      -1,
      -1,
      -1,
      sizeof(Attitude),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Attitude, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Attitude, _is_default_instance_));
  Pose_descriptor_ = file->message_type(2);
  static const int Pose_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose, pos_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose, att_),
  };
  Pose_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Pose_descriptor_,
      Pose::default_instance_,
      Pose_offsets_,
      -1,
      -1,
      -1,
      sizeof(Pose),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pose_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Position_descriptor_, &Position::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Attitude_descriptor_, &Attitude::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Pose_descriptor_, &Pose::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pose_2eproto() {
  delete Position::default_instance_;
  delete Position_reflection_;
  delete Attitude::default_instance_;
  delete Attitude_reflection_;
  delete Pose::default_instance_;
  delete Pose_reflection_;
}

void protobuf_AddDesc_pose_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_pose_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\npose.proto\022\005Proto\"+\n\010Position\022\t\n\001x\030\001 \001"
    "(\001\022\t\n\001y\030\002 \001(\001\022\t\n\001z\030\003 \001(\001\":\n\010Attitude\022\n\n\002"
    "qw\030\001 \001(\001\022\n\n\002qx\030\002 \001(\001\022\n\n\002qy\030\003 \001(\001\022\n\n\002qz\030\004"
    " \001(\001\"B\n\004Pose\022\034\n\003pos\030\001 \001(\0132\017.Proto.Positi"
    "on\022\034\n\003att\030\002 \001(\0132\017.Proto.Attitudeb\006proto3", 200);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pose.proto", &protobuf_RegisterTypes);
  Position::default_instance_ = new Position();
  Attitude::default_instance_ = new Attitude();
  Pose::default_instance_ = new Pose();
  Position::default_instance_->InitAsDefaultInstance();
  Attitude::default_instance_->InitAsDefaultInstance();
  Pose::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pose_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pose_2eproto {
  StaticDescriptorInitializer_pose_2eproto() {
    protobuf_AddDesc_pose_2eproto();
  }
} static_descriptor_initializer_pose_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Position::kXFieldNumber;
const int Position::kYFieldNumber;
const int Position::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Position::Position()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Proto.Position)
}

void Position::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Position::Position(const Position& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Proto.Position)
}

void Position::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  z_ = 0;
}

Position::~Position() {
  // @@protoc_insertion_point(destructor:Proto.Position)
  SharedDtor();
}

void Position::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Position::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Position::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Position_descriptor_;
}

const Position& Position::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pose_2eproto();
  return *default_instance_;
}

Position* Position::default_instance_ = NULL;

Position* Position::New(::google::protobuf::Arena* arena) const {
  Position* n = new Position;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Position::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Position)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Position, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Position*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(x_, z_);

#undef ZR_HELPER_
#undef ZR_

}

bool Position::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Proto.Position)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double x = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }

      // optional double y = 2;
      case 2: {
        if (tag == 17) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_z;
        break;
      }

      // optional double z = 3;
      case 3: {
        if (tag == 25) {
         parse_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Proto.Position)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Proto.Position)
  return false;
#undef DO_
}

void Position::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Proto.Position)
  // optional double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // optional double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // optional double z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  // @@protoc_insertion_point(serialize_end:Proto.Position)
}

::google::protobuf::uint8* Position::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Position)
  // optional double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // optional double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // optional double z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Proto.Position)
  return target;
}

int Position::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Position)
  int total_size = 0;

  // optional double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // optional double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  // optional double z = 3;
  if (this->z() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Position::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Proto.Position)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Position* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Position>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Proto.Position)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Proto.Position)
    MergeFrom(*source);
  }
}

void Position::MergeFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Proto.Position)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Position::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Proto.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Position::CopyFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Position::IsInitialized() const {

  return true;
}

void Position::Swap(Position* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Position::InternalSwap(Position* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Position::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Position_descriptor_;
  metadata.reflection = Position_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Position

// optional double x = 1;
void Position::clear_x() {
  x_ = 0;
}
 double Position::x() const {
  // @@protoc_insertion_point(field_get:Proto.Position.x)
  return x_;
}
 void Position::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:Proto.Position.x)
}

// optional double y = 2;
void Position::clear_y() {
  y_ = 0;
}
 double Position::y() const {
  // @@protoc_insertion_point(field_get:Proto.Position.y)
  return y_;
}
 void Position::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:Proto.Position.y)
}

// optional double z = 3;
void Position::clear_z() {
  z_ = 0;
}
 double Position::z() const {
  // @@protoc_insertion_point(field_get:Proto.Position.z)
  return z_;
}
 void Position::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:Proto.Position.z)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Attitude::kQwFieldNumber;
const int Attitude::kQxFieldNumber;
const int Attitude::kQyFieldNumber;
const int Attitude::kQzFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Attitude::Attitude()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Proto.Attitude)
}

void Attitude::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Attitude::Attitude(const Attitude& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Proto.Attitude)
}

void Attitude::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  qw_ = 0;
  qx_ = 0;
  qy_ = 0;
  qz_ = 0;
}

Attitude::~Attitude() {
  // @@protoc_insertion_point(destructor:Proto.Attitude)
  SharedDtor();
}

void Attitude::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Attitude::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Attitude::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Attitude_descriptor_;
}

const Attitude& Attitude::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pose_2eproto();
  return *default_instance_;
}

Attitude* Attitude::default_instance_ = NULL;

Attitude* Attitude::New(::google::protobuf::Arena* arena) const {
  Attitude* n = new Attitude;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Attitude::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Attitude)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Attitude, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Attitude*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(qw_, qz_);

#undef ZR_HELPER_
#undef ZR_

}

bool Attitude::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Proto.Attitude)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double qw = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &qw_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_qx;
        break;
      }

      // optional double qx = 2;
      case 2: {
        if (tag == 17) {
         parse_qx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &qx_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_qy;
        break;
      }

      // optional double qy = 3;
      case 3: {
        if (tag == 25) {
         parse_qy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &qy_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_qz;
        break;
      }

      // optional double qz = 4;
      case 4: {
        if (tag == 33) {
         parse_qz:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &qz_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Proto.Attitude)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Proto.Attitude)
  return false;
#undef DO_
}

void Attitude::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Proto.Attitude)
  // optional double qw = 1;
  if (this->qw() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->qw(), output);
  }

  // optional double qx = 2;
  if (this->qx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->qx(), output);
  }

  // optional double qy = 3;
  if (this->qy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->qy(), output);
  }

  // optional double qz = 4;
  if (this->qz() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->qz(), output);
  }

  // @@protoc_insertion_point(serialize_end:Proto.Attitude)
}

::google::protobuf::uint8* Attitude::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Attitude)
  // optional double qw = 1;
  if (this->qw() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->qw(), target);
  }

  // optional double qx = 2;
  if (this->qx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->qx(), target);
  }

  // optional double qy = 3;
  if (this->qy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->qy(), target);
  }

  // optional double qz = 4;
  if (this->qz() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->qz(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Proto.Attitude)
  return target;
}

int Attitude::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Attitude)
  int total_size = 0;

  // optional double qw = 1;
  if (this->qw() != 0) {
    total_size += 1 + 8;
  }

  // optional double qx = 2;
  if (this->qx() != 0) {
    total_size += 1 + 8;
  }

  // optional double qy = 3;
  if (this->qy() != 0) {
    total_size += 1 + 8;
  }

  // optional double qz = 4;
  if (this->qz() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Attitude::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Proto.Attitude)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Attitude* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Attitude>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Proto.Attitude)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Proto.Attitude)
    MergeFrom(*source);
  }
}

void Attitude::MergeFrom(const Attitude& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Proto.Attitude)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.qw() != 0) {
    set_qw(from.qw());
  }
  if (from.qx() != 0) {
    set_qx(from.qx());
  }
  if (from.qy() != 0) {
    set_qy(from.qy());
  }
  if (from.qz() != 0) {
    set_qz(from.qz());
  }
}

void Attitude::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Proto.Attitude)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Attitude::CopyFrom(const Attitude& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Attitude)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Attitude::IsInitialized() const {

  return true;
}

void Attitude::Swap(Attitude* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Attitude::InternalSwap(Attitude* other) {
  std::swap(qw_, other->qw_);
  std::swap(qx_, other->qx_);
  std::swap(qy_, other->qy_);
  std::swap(qz_, other->qz_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Attitude::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Attitude_descriptor_;
  metadata.reflection = Attitude_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Attitude

// optional double qw = 1;
void Attitude::clear_qw() {
  qw_ = 0;
}
 double Attitude::qw() const {
  // @@protoc_insertion_point(field_get:Proto.Attitude.qw)
  return qw_;
}
 void Attitude::set_qw(double value) {
  
  qw_ = value;
  // @@protoc_insertion_point(field_set:Proto.Attitude.qw)
}

// optional double qx = 2;
void Attitude::clear_qx() {
  qx_ = 0;
}
 double Attitude::qx() const {
  // @@protoc_insertion_point(field_get:Proto.Attitude.qx)
  return qx_;
}
 void Attitude::set_qx(double value) {
  
  qx_ = value;
  // @@protoc_insertion_point(field_set:Proto.Attitude.qx)
}

// optional double qy = 3;
void Attitude::clear_qy() {
  qy_ = 0;
}
 double Attitude::qy() const {
  // @@protoc_insertion_point(field_get:Proto.Attitude.qy)
  return qy_;
}
 void Attitude::set_qy(double value) {
  
  qy_ = value;
  // @@protoc_insertion_point(field_set:Proto.Attitude.qy)
}

// optional double qz = 4;
void Attitude::clear_qz() {
  qz_ = 0;
}
 double Attitude::qz() const {
  // @@protoc_insertion_point(field_get:Proto.Attitude.qz)
  return qz_;
}
 void Attitude::set_qz(double value) {
  
  qz_ = value;
  // @@protoc_insertion_point(field_set:Proto.Attitude.qz)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Pose::kPosFieldNumber;
const int Pose::kAttFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Pose::Pose()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Proto.Pose)
}

void Pose::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  pos_ = const_cast< ::Proto::Position*>(&::Proto::Position::default_instance());
  att_ = const_cast< ::Proto::Attitude*>(&::Proto::Attitude::default_instance());
}

Pose::Pose(const Pose& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Proto.Pose)
}

void Pose::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  pos_ = NULL;
  att_ = NULL;
}

Pose::~Pose() {
  // @@protoc_insertion_point(destructor:Proto.Pose)
  SharedDtor();
}

void Pose::SharedDtor() {
  if (this != default_instance_) {
    delete pos_;
    delete att_;
  }
}

void Pose::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Pose::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pose_descriptor_;
}

const Pose& Pose::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pose_2eproto();
  return *default_instance_;
}

Pose* Pose::default_instance_ = NULL;

Pose* Pose::New(::google::protobuf::Arena* arena) const {
  Pose* n = new Pose;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Pose::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Pose)
  if (GetArenaNoVirtual() == NULL && pos_ != NULL) delete pos_;
  pos_ = NULL;
  if (GetArenaNoVirtual() == NULL && att_ != NULL) delete att_;
  att_ = NULL;
}

bool Pose::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Proto.Pose)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Proto.Position pos = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_att;
        break;
      }

      // optional .Proto.Attitude att = 2;
      case 2: {
        if (tag == 18) {
         parse_att:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_att()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Proto.Pose)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Proto.Pose)
  return false;
#undef DO_
}

void Pose::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Proto.Pose)
  // optional .Proto.Position pos = 1;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->pos_, output);
  }

  // optional .Proto.Attitude att = 2;
  if (this->has_att()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->att_, output);
  }

  // @@protoc_insertion_point(serialize_end:Proto.Pose)
}

::google::protobuf::uint8* Pose::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Pose)
  // optional .Proto.Position pos = 1;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->pos_, false, target);
  }

  // optional .Proto.Attitude att = 2;
  if (this->has_att()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->att_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Proto.Pose)
  return target;
}

int Pose::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Pose)
  int total_size = 0;

  // optional .Proto.Position pos = 1;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // optional .Proto.Attitude att = 2;
  if (this->has_att()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->att_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Pose::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Proto.Pose)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Pose* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Pose>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Proto.Pose)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Proto.Pose)
    MergeFrom(*source);
  }
}

void Pose::MergeFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Proto.Pose)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_pos()) {
    mutable_pos()->::Proto::Position::MergeFrom(from.pos());
  }
  if (from.has_att()) {
    mutable_att()->::Proto::Attitude::MergeFrom(from.att());
  }
}

void Pose::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Proto.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose::CopyFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose::IsInitialized() const {

  return true;
}

void Pose::Swap(Pose* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Pose::InternalSwap(Pose* other) {
  std::swap(pos_, other->pos_);
  std::swap(att_, other->att_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Pose::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Pose_descriptor_;
  metadata.reflection = Pose_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Pose

// optional .Proto.Position pos = 1;
bool Pose::has_pos() const {
  return !_is_default_instance_ && pos_ != NULL;
}
void Pose::clear_pos() {
  if (GetArenaNoVirtual() == NULL && pos_ != NULL) delete pos_;
  pos_ = NULL;
}
const ::Proto::Position& Pose::pos() const {
  // @@protoc_insertion_point(field_get:Proto.Pose.pos)
  return pos_ != NULL ? *pos_ : *default_instance_->pos_;
}
::Proto::Position* Pose::mutable_pos() {
  
  if (pos_ == NULL) {
    pos_ = new ::Proto::Position;
  }
  // @@protoc_insertion_point(field_mutable:Proto.Pose.pos)
  return pos_;
}
::Proto::Position* Pose::release_pos() {
  // @@protoc_insertion_point(field_release:Proto.Pose.pos)
  
  ::Proto::Position* temp = pos_;
  pos_ = NULL;
  return temp;
}
void Pose::set_allocated_pos(::Proto::Position* pos) {
  delete pos_;
  pos_ = pos;
  if (pos) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Proto.Pose.pos)
}

// optional .Proto.Attitude att = 2;
bool Pose::has_att() const {
  return !_is_default_instance_ && att_ != NULL;
}
void Pose::clear_att() {
  if (GetArenaNoVirtual() == NULL && att_ != NULL) delete att_;
  att_ = NULL;
}
const ::Proto::Attitude& Pose::att() const {
  // @@protoc_insertion_point(field_get:Proto.Pose.att)
  return att_ != NULL ? *att_ : *default_instance_->att_;
}
::Proto::Attitude* Pose::mutable_att() {
  
  if (att_ == NULL) {
    att_ = new ::Proto::Attitude;
  }
  // @@protoc_insertion_point(field_mutable:Proto.Pose.att)
  return att_;
}
::Proto::Attitude* Pose::release_att() {
  // @@protoc_insertion_point(field_release:Proto.Pose.att)
  
  ::Proto::Attitude* temp = att_;
  att_ = NULL;
  return temp;
}
void Pose::set_allocated_att(::Proto::Attitude* att) {
  delete att_;
  att_ = att;
  if (att) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Proto.Pose.att)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto

// @@protoc_insertion_point(global_scope)

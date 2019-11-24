// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensor_bundle.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/tensor_slice.pb.h"
#include "tensorflow/core/framework/types.pb.h"
#include "tensorflow/core/framework/versions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto();
namespace tensorflow {
class BundleEntryProto;
class BundleEntryProtoDefaultTypeInternal;
extern BundleEntryProtoDefaultTypeInternal _BundleEntryProto_default_instance_;
class BundleHeaderProto;
class BundleHeaderProtoDefaultTypeInternal;
extern BundleHeaderProtoDefaultTypeInternal _BundleHeaderProto_default_instance_;
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::BundleEntryProto* Arena::CreateMaybeMessage<::tensorflow::BundleEntryProto>(Arena*);
template<> ::tensorflow::BundleHeaderProto* Arena::CreateMaybeMessage<::tensorflow::BundleHeaderProto>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {

enum BundleHeaderProto_Endianness {
  BundleHeaderProto_Endianness_LITTLE = 0,
  BundleHeaderProto_Endianness_BIG = 1,
  BundleHeaderProto_Endianness_BundleHeaderProto_Endianness_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  BundleHeaderProto_Endianness_BundleHeaderProto_Endianness_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool BundleHeaderProto_Endianness_IsValid(int value);
const BundleHeaderProto_Endianness BundleHeaderProto_Endianness_Endianness_MIN = BundleHeaderProto_Endianness_LITTLE;
const BundleHeaderProto_Endianness BundleHeaderProto_Endianness_Endianness_MAX = BundleHeaderProto_Endianness_BIG;
const int BundleHeaderProto_Endianness_Endianness_ARRAYSIZE = BundleHeaderProto_Endianness_Endianness_MAX + 1;

const ::google::protobuf::EnumDescriptor* BundleHeaderProto_Endianness_descriptor();
inline const ::std::string& BundleHeaderProto_Endianness_Name(BundleHeaderProto_Endianness value) {
  return ::google::protobuf::internal::NameOfEnum(
    BundleHeaderProto_Endianness_descriptor(), value);
}
inline bool BundleHeaderProto_Endianness_Parse(
    const ::std::string& name, BundleHeaderProto_Endianness* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BundleHeaderProto_Endianness>(
    BundleHeaderProto_Endianness_descriptor(), name, value);
}
// ===================================================================

class BundleHeaderProto :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.BundleHeaderProto) */ {
 public:
  BundleHeaderProto();
  virtual ~BundleHeaderProto();

  BundleHeaderProto(const BundleHeaderProto& from);

  inline BundleHeaderProto& operator=(const BundleHeaderProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BundleHeaderProto(BundleHeaderProto&& from) noexcept
    : BundleHeaderProto() {
    *this = ::std::move(from);
  }

  inline BundleHeaderProto& operator=(BundleHeaderProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const BundleHeaderProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BundleHeaderProto* internal_default_instance() {
    return reinterpret_cast<const BundleHeaderProto*>(
               &_BundleHeaderProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(BundleHeaderProto* other);
  void Swap(BundleHeaderProto* other);
  friend void swap(BundleHeaderProto& a, BundleHeaderProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BundleHeaderProto* New() const final {
    return CreateMaybeMessage<BundleHeaderProto>(nullptr);
  }

  BundleHeaderProto* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BundleHeaderProto>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BundleHeaderProto& from);
  void MergeFrom(const BundleHeaderProto& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BundleHeaderProto* other);
  protected:
  explicit BundleHeaderProto(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef BundleHeaderProto_Endianness Endianness;
  static const Endianness LITTLE =
    BundleHeaderProto_Endianness_LITTLE;
  static const Endianness BIG =
    BundleHeaderProto_Endianness_BIG;
  static inline bool Endianness_IsValid(int value) {
    return BundleHeaderProto_Endianness_IsValid(value);
  }
  static const Endianness Endianness_MIN =
    BundleHeaderProto_Endianness_Endianness_MIN;
  static const Endianness Endianness_MAX =
    BundleHeaderProto_Endianness_Endianness_MAX;
  static const int Endianness_ARRAYSIZE =
    BundleHeaderProto_Endianness_Endianness_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Endianness_descriptor() {
    return BundleHeaderProto_Endianness_descriptor();
  }
  static inline const ::std::string& Endianness_Name(Endianness value) {
    return BundleHeaderProto_Endianness_Name(value);
  }
  static inline bool Endianness_Parse(const ::std::string& name,
      Endianness* value) {
    return BundleHeaderProto_Endianness_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .tensorflow.VersionDef version = 3;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  const ::tensorflow::VersionDef& version() const;
  ::tensorflow::VersionDef* release_version();
  ::tensorflow::VersionDef* mutable_version();
  void set_allocated_version(::tensorflow::VersionDef* version);
  void unsafe_arena_set_allocated_version(
      ::tensorflow::VersionDef* version);
  ::tensorflow::VersionDef* unsafe_arena_release_version();

  // int32 num_shards = 1;
  void clear_num_shards();
  static const int kNumShardsFieldNumber = 1;
  ::google::protobuf::int32 num_shards() const;
  void set_num_shards(::google::protobuf::int32 value);

  // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
  void clear_endianness();
  static const int kEndiannessFieldNumber = 2;
  ::tensorflow::BundleHeaderProto_Endianness endianness() const;
  void set_endianness(::tensorflow::BundleHeaderProto_Endianness value);

  // @@protoc_insertion_point(class_scope:tensorflow.BundleHeaderProto)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::VersionDef* version_;
  ::google::protobuf::int32 num_shards_;
  int endianness_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto;
};
// -------------------------------------------------------------------

class BundleEntryProto :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.BundleEntryProto) */ {
 public:
  BundleEntryProto();
  virtual ~BundleEntryProto();

  BundleEntryProto(const BundleEntryProto& from);

  inline BundleEntryProto& operator=(const BundleEntryProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BundleEntryProto(BundleEntryProto&& from) noexcept
    : BundleEntryProto() {
    *this = ::std::move(from);
  }

  inline BundleEntryProto& operator=(BundleEntryProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const BundleEntryProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BundleEntryProto* internal_default_instance() {
    return reinterpret_cast<const BundleEntryProto*>(
               &_BundleEntryProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(BundleEntryProto* other);
  void Swap(BundleEntryProto* other);
  friend void swap(BundleEntryProto& a, BundleEntryProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BundleEntryProto* New() const final {
    return CreateMaybeMessage<BundleEntryProto>(nullptr);
  }

  BundleEntryProto* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BundleEntryProto>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BundleEntryProto& from);
  void MergeFrom(const BundleEntryProto& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BundleEntryProto* other);
  protected:
  explicit BundleEntryProto(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.TensorSliceProto slices = 7;
  int slices_size() const;
  void clear_slices();
  static const int kSlicesFieldNumber = 7;
  ::tensorflow::TensorSliceProto* mutable_slices(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
      mutable_slices();
  const ::tensorflow::TensorSliceProto& slices(int index) const;
  ::tensorflow::TensorSliceProto* add_slices();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
      slices() const;

  // .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 2;
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* release_shape();
  ::tensorflow::TensorShapeProto* mutable_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  static const int kDtypeFieldNumber = 1;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // int32 shard_id = 3;
  void clear_shard_id();
  static const int kShardIdFieldNumber = 3;
  ::google::protobuf::int32 shard_id() const;
  void set_shard_id(::google::protobuf::int32 value);

  // int64 offset = 4;
  void clear_offset();
  static const int kOffsetFieldNumber = 4;
  ::google::protobuf::int64 offset() const;
  void set_offset(::google::protobuf::int64 value);

  // int64 size = 5;
  void clear_size();
  static const int kSizeFieldNumber = 5;
  ::google::protobuf::int64 size() const;
  void set_size(::google::protobuf::int64 value);

  // fixed32 crc32c = 6;
  void clear_crc32c();
  static const int kCrc32CFieldNumber = 6;
  ::google::protobuf::uint32 crc32c() const;
  void set_crc32c(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.BundleEntryProto)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto > slices_;
  ::tensorflow::TensorShapeProto* shape_;
  int dtype_;
  ::google::protobuf::int32 shard_id_;
  ::google::protobuf::int64 offset_;
  ::google::protobuf::int64 size_;
  ::google::protobuf::uint32 crc32c_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BundleHeaderProto

// int32 num_shards = 1;
inline void BundleHeaderProto::clear_num_shards() {
  num_shards_ = 0;
}
inline ::google::protobuf::int32 BundleHeaderProto::num_shards() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleHeaderProto.num_shards)
  return num_shards_;
}
inline void BundleHeaderProto::set_num_shards(::google::protobuf::int32 value) {
  
  num_shards_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleHeaderProto.num_shards)
}

// .tensorflow.BundleHeaderProto.Endianness endianness = 2;
inline void BundleHeaderProto::clear_endianness() {
  endianness_ = 0;
}
inline ::tensorflow::BundleHeaderProto_Endianness BundleHeaderProto::endianness() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleHeaderProto.endianness)
  return static_cast< ::tensorflow::BundleHeaderProto_Endianness >(endianness_);
}
inline void BundleHeaderProto::set_endianness(::tensorflow::BundleHeaderProto_Endianness value) {
  
  endianness_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleHeaderProto.endianness)
}

// .tensorflow.VersionDef version = 3;
inline bool BundleHeaderProto::has_version() const {
  return this != internal_default_instance() && version_ != nullptr;
}
inline const ::tensorflow::VersionDef& BundleHeaderProto::version() const {
  const ::tensorflow::VersionDef* p = version_;
  // @@protoc_insertion_point(field_get:tensorflow.BundleHeaderProto.version)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::VersionDef*>(
      &::tensorflow::_VersionDef_default_instance_);
}
inline ::tensorflow::VersionDef* BundleHeaderProto::release_version() {
  // @@protoc_insertion_point(field_release:tensorflow.BundleHeaderProto.version)
  
  ::tensorflow::VersionDef* temp = version_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  version_ = nullptr;
  return temp;
}
inline ::tensorflow::VersionDef* BundleHeaderProto::unsafe_arena_release_version() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.BundleHeaderProto.version)
  
  ::tensorflow::VersionDef* temp = version_;
  version_ = nullptr;
  return temp;
}
inline ::tensorflow::VersionDef* BundleHeaderProto::mutable_version() {
  
  if (version_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::VersionDef>(GetArenaNoVirtual());
    version_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.BundleHeaderProto.version)
  return version_;
}
inline void BundleHeaderProto::set_allocated_version(::tensorflow::VersionDef* version) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(version_);
  }
  if (version) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(version)->GetArena();
    if (message_arena != submessage_arena) {
      version = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    
  } else {
    
  }
  version_ = version;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.BundleHeaderProto.version)
}

// -------------------------------------------------------------------

// BundleEntryProto

// .tensorflow.DataType dtype = 1;
inline void BundleEntryProto::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType BundleEntryProto::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void BundleEntryProto::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.dtype)
}

// .tensorflow.TensorShapeProto shape = 2;
inline bool BundleEntryProto::has_shape() const {
  return this != internal_default_instance() && shape_ != nullptr;
}
inline const ::tensorflow::TensorShapeProto& BundleEntryProto::shape() const {
  const ::tensorflow::TensorShapeProto* p = shape_;
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.shape)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::TensorShapeProto*>(
      &::tensorflow::_TensorShapeProto_default_instance_);
}
inline ::tensorflow::TensorShapeProto* BundleEntryProto::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.BundleEntryProto.shape)
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* BundleEntryProto::unsafe_arena_release_shape() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.BundleEntryProto.shape)
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* BundleEntryProto::mutable_shape() {
  
  if (shape_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::TensorShapeProto>(GetArenaNoVirtual());
    shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.BundleEntryProto.shape)
  return shape_;
}
inline void BundleEntryProto::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(shape_);
  }
  if (shape) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(shape)->GetArena();
    if (message_arena != submessage_arena) {
      shape = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, shape, submessage_arena);
    }
    
  } else {
    
  }
  shape_ = shape;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.BundleEntryProto.shape)
}

// int32 shard_id = 3;
inline void BundleEntryProto::clear_shard_id() {
  shard_id_ = 0;
}
inline ::google::protobuf::int32 BundleEntryProto::shard_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.shard_id)
  return shard_id_;
}
inline void BundleEntryProto::set_shard_id(::google::protobuf::int32 value) {
  
  shard_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.shard_id)
}

// int64 offset = 4;
inline void BundleEntryProto::clear_offset() {
  offset_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 BundleEntryProto::offset() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.offset)
  return offset_;
}
inline void BundleEntryProto::set_offset(::google::protobuf::int64 value) {
  
  offset_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.offset)
}

// int64 size = 5;
inline void BundleEntryProto::clear_size() {
  size_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 BundleEntryProto::size() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.size)
  return size_;
}
inline void BundleEntryProto::set_size(::google::protobuf::int64 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.size)
}

// fixed32 crc32c = 6;
inline void BundleEntryProto::clear_crc32c() {
  crc32c_ = 0u;
}
inline ::google::protobuf::uint32 BundleEntryProto::crc32c() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.crc32c)
  return crc32c_;
}
inline void BundleEntryProto::set_crc32c(::google::protobuf::uint32 value) {
  
  crc32c_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.crc32c)
}

// repeated .tensorflow.TensorSliceProto slices = 7;
inline int BundleEntryProto::slices_size() const {
  return slices_.size();
}
inline ::tensorflow::TensorSliceProto* BundleEntryProto::mutable_slices(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.BundleEntryProto.slices)
  return slices_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
BundleEntryProto::mutable_slices() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.BundleEntryProto.slices)
  return &slices_;
}
inline const ::tensorflow::TensorSliceProto& BundleEntryProto::slices(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.slices)
  return slices_.Get(index);
}
inline ::tensorflow::TensorSliceProto* BundleEntryProto::add_slices() {
  // @@protoc_insertion_point(field_add:tensorflow.BundleEntryProto.slices)
  return slices_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
BundleEntryProto::slices() const {
  // @@protoc_insertion_point(field_list:tensorflow.BundleEntryProto.slices)
  return slices_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::BundleHeaderProto_Endianness> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::BundleHeaderProto_Endianness>() {
  return ::tensorflow::BundleHeaderProto_Endianness_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto

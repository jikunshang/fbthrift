/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/no_metadata/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyEnum>::size;
folly::Range<::cpp2::MyEnum const*> const TEnumTraits<::cpp2::MyEnum>::values = folly::range(TEnumDataStorage<::cpp2::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyEnum>::names = folly::range(TEnumDataStorage<::cpp2::MyEnum>::names);

bool TEnumTraits<::cpp2::MyEnum>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::MyEnum>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace cpp2 {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
FOLLY_POP_WARNING
#endif
} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece MyStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyStruct>::name;
}

MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
MyStruct::MyStruct() :
      __fbthrift_field_MyIntField(),
      __fbthrift_field_myEnum() {
}


MyStruct::~MyStruct() {}

MyStruct::MyStruct(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept :
    __fbthrift_field_MyIntField(std::move(other.__fbthrift_field_MyIntField)),
    __fbthrift_field_MyStringField(std::move(other.__fbthrift_field_MyStringField)),
    __fbthrift_field_MyDataField(std::move(other.__fbthrift_field_MyDataField)),
    __fbthrift_field_myEnum(std::move(other.__fbthrift_field_myEnum)),
    __isset(other.__isset) {
}

MyStruct& MyStruct::operator=(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept {
    this->__fbthrift_field_MyIntField = std::move(other.__fbthrift_field_MyIntField);
    this->__fbthrift_field_MyStringField = std::move(other.__fbthrift_field_MyStringField);
    this->__fbthrift_field_MyDataField = std::move(other.__fbthrift_field_MyDataField);
    this->__fbthrift_field_myEnum = std::move(other.__fbthrift_field_myEnum);
    __isset = other.__isset;
    return *this;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::std::string MyStringField__arg, ::cpp2::MyDataItem MyDataField__arg, ::cpp2::MyEnum myEnum__arg) :
    __fbthrift_field_MyIntField(std::move(MyIntField__arg)),
    __fbthrift_field_MyStringField(std::move(MyStringField__arg)),
    __fbthrift_field_MyDataField(std::move(MyDataField__arg)),
    __fbthrift_field_myEnum(std::move(myEnum__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_MyIntField = ::std::int64_t();
  this->__fbthrift_field_MyStringField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_myEnum = ::cpp2::MyEnum();
  __isset = {};
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==(FOLLY_MAYBE_UNUSED const MyStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.MyIntField_ref() == rhs.MyIntField_ref())) {
    return false;
  }
  if (!(lhs.MyStringField_ref() == rhs.MyStringField_ref())) {
    return false;
  }
  if (!(lhs.MyDataField_ref() == rhs.MyDataField_ref())) {
    return false;
  }
  if (!(lhs.myEnum_ref() == rhs.myEnum_ref())) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(FOLLY_MAYBE_UNUSED const MyStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.MyIntField_ref() == rhs.MyIntField_ref())) {
    return lhs.MyIntField_ref() < rhs.MyIntField_ref();
  }
  if (!(lhs.MyStringField_ref() == rhs.MyStringField_ref())) {
    return lhs.MyStringField_ref() < rhs.MyStringField_ref();
  }
  if (!(lhs.MyDataField_ref() == rhs.MyDataField_ref())) {
    return lhs.MyDataField_ref() < rhs.MyDataField_ref();
  }
  if (!(lhs.myEnum_ref() == rhs.myEnum_ref())) {
    return lhs.myEnum_ref() < rhs.myEnum_ref();
  }
  return false;
}

const ::cpp2::MyDataItem& MyStruct::get_MyDataField() const& {
  return __fbthrift_field_MyDataField;
}

::cpp2::MyDataItem MyStruct::get_MyDataField() && {
  return std::move(__fbthrift_field_MyDataField);
}


void swap(FOLLY_MAYBE_UNUSED MyStruct& a, FOLLY_MAYBE_UNUSED MyStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_MyIntField, b.__fbthrift_field_MyIntField);
  swap(a.__fbthrift_field_MyStringField, b.__fbthrift_field_MyStringField);
  swap(a.__fbthrift_field_MyDataField, b.__fbthrift_field_MyDataField);
  swap(a.__fbthrift_field_myEnum, b.__fbthrift_field_myEnum);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of json option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyDataItem>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyDataItem>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece MyDataItem::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyDataItem>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece MyDataItem::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyDataItem>::name;
}


MyDataItem::MyDataItem(apache::thrift::FragileConstructor) {}


void MyDataItem::__fbthrift_clear() {
  // clear all fields
}

void MyDataItem::__fbthrift_clear_terse_fields() {
}

bool MyDataItem::__fbthrift_is_empty() const {
  return true;
}

bool MyDataItem::operator==(FOLLY_MAYBE_UNUSED const MyDataItem& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  return true;
}

bool MyDataItem::operator<(FOLLY_MAYBE_UNUSED const MyDataItem& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  return false;
}


void swap(FOLLY_MAYBE_UNUSED MyDataItem& a, FOLLY_MAYBE_UNUSED MyDataItem& b) {
  using ::std::swap;
}

template void MyDataItem::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyDataItem::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyUnion::Type>::size;
folly::Range<::cpp2::MyUnion::Type const*> const TEnumTraits<::cpp2::MyUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::names);

bool TEnumTraits<::cpp2::MyUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::MyUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece MyUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece MyUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyUnion>::name;
}

void MyUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::myEnum:
      destruct(value_.myEnum);
      break;
    case Type::myStruct:
      destruct(value_.myStruct);
      break;
    case Type::myDataItem:
      destruct(value_.myDataItem);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool MyUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool MyUnion::operator==(const MyUnion& rhs) const {
  if (getType() != rhs.getType()) { return false; }
  switch(getType()) {
    case Type::myEnum:
      return value_.myEnum == rhs.value_.myEnum;
    case Type::myStruct:
      return value_.myStruct == rhs.value_.myStruct;
    case Type::myDataItem:
      return value_.myDataItem == rhs.value_.myDataItem;
    default:
      return true;
  }
}

bool MyUnion::operator<(FOLLY_MAYBE_UNUSED const MyUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::myEnum:
      return lhs.value_.myEnum < rhs.value_.myEnum;
    case Type::myStruct:
      return lhs.value_.myStruct < rhs.value_.myStruct;
    case Type::myDataItem:
      return lhs.value_.myDataItem < rhs.value_.myDataItem;
    default:
      return false;
  }
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2

/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Foo>;
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

Foo::Foo(const Foo& srcObj) {
  intField = srcObj.intField;
  __isset.__fbthrift_set(folly::index_constant<0>(),srcObj.__isset.__fbthrift_get(folly::index_constant<0>()));
  optionalIntField = srcObj.optionalIntField;
  __isset.__fbthrift_set(folly::index_constant<1>(),srcObj.__isset.__fbthrift_get(folly::index_constant<1>()));
  intFieldWithDefault = srcObj.intFieldWithDefault;
  __isset.__fbthrift_set(folly::index_constant<2>(),srcObj.__isset.__fbthrift_get(folly::index_constant<2>()));
  setField = srcObj.setField;
  __isset.__fbthrift_set(folly::index_constant<3>(),srcObj.__isset.__fbthrift_get(folly::index_constant<3>()));
  optionalSetField = srcObj.optionalSetField;
  __isset.__fbthrift_set(folly::index_constant<4>(),srcObj.__isset.__fbthrift_get(folly::index_constant<4>()));
  mapField = srcObj.mapField;
  __isset.__fbthrift_set(folly::index_constant<5>(),srcObj.__isset.__fbthrift_get(folly::index_constant<5>()));
  optionalMapField = srcObj.optionalMapField;
  __isset.__fbthrift_set(folly::index_constant<6>(),srcObj.__isset.__fbthrift_get(folly::index_constant<6>()));
  binaryField = srcObj.binaryField;
  __isset.__fbthrift_set(folly::index_constant<7>(),srcObj.__isset.__fbthrift_get(folly::index_constant<7>()));
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(intField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalIntField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 3>(intFieldWithDefault, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter2, 4>(setField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter2, 5>(optionalSetField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter3, 6>(mapField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter3, 7>(optionalMapField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 8>(binaryField, *this);
}

Foo& Foo::operator=(const Foo& src) {
  Foo tmp(src);
  swap(*this, tmp);
  return *this;
}

Foo::Foo() :
      intField(),
      optionalIntField(),
      intFieldWithDefault(::apache::thrift::adapt_detail::fromThriftField<my::Adapter1, 3>(static_cast<::std::int32_t>(13), *this)) {
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(intField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalIntField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 3>(intFieldWithDefault, *this);
}


Foo::~Foo() {}

Foo::Foo(Foo&& other) noexcept  :
    intField(std::move(other.intField)),
    optionalIntField(std::move(other.optionalIntField)),
    intFieldWithDefault(std::move(other.intFieldWithDefault)),
    setField(std::move(other.setField)),
    optionalSetField(std::move(other.optionalSetField)),
    mapField(std::move(other.mapField)),
    optionalMapField(std::move(other.optionalMapField)),
    binaryField(std::move(other.binaryField)),
    __isset(other.__isset) {
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(intField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalIntField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 3>(intFieldWithDefault, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter2, 4>(setField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter2, 5>(optionalSetField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter3, 6>(mapField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter3, 7>(optionalMapField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 8>(binaryField, *this);
}

Foo& Foo::operator=(FOLLY_MAYBE_UNUSED Foo&& other) noexcept {
    this->intField = std::move(other.intField);
    this->optionalIntField = std::move(other.optionalIntField);
    this->intFieldWithDefault = std::move(other.intFieldWithDefault);
    this->setField = std::move(other.setField);
    this->optionalSetField = std::move(other.optionalSetField);
    this->mapField = std::move(other.mapField);
    this->optionalMapField = std::move(other.optionalMapField);
    this->binaryField = std::move(other.binaryField);
    __isset = other.__isset;
    return *this;
}


Foo::Foo(apache::thrift::FragileConstructor, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> intField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> optionalIntField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> intFieldWithDefault__arg, ::cpp2::SetWithAdapter setField__arg, ::cpp2::SetWithAdapter optionalSetField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter3, ::std::map<::std::string, ::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::cpp2::ListWithElemAdapter>>> mapField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter3, ::std::map<::std::string, ::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::cpp2::ListWithElemAdapter>>> optionalMapField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::string> binaryField__arg) :
    intField(std::move(intField__arg)),
    optionalIntField(std::move(optionalIntField__arg)),
    intFieldWithDefault(std::move(intFieldWithDefault__arg)),
    setField(std::move(setField__arg)),
    optionalSetField(std::move(optionalSetField__arg)),
    mapField(std::move(mapField__arg)),
    optionalMapField(std::move(optionalMapField__arg)),
    binaryField(std::move(binaryField__arg)) {
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(intField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalIntField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 3>(intFieldWithDefault, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter2, 4>(setField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter2, 5>(optionalSetField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter3, 6>(mapField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter3, 7>(optionalMapField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 8>(binaryField, *this);
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
  __isset.__fbthrift_set(folly::index_constant<3>(), true);
  __isset.__fbthrift_set(folly::index_constant<4>(), true);
  __isset.__fbthrift_set(folly::index_constant<5>(), true);
  __isset.__fbthrift_set(folly::index_constant<6>(), true);
  __isset.__fbthrift_set(folly::index_constant<7>(), true);
}


void Foo::__clear() {
  // clear all fields
  this->intField = {};
  this->optionalIntField = {};
  this->intFieldWithDefault = {};
  this->setField.clear();
  this->optionalSetField.clear();
  this->mapField.clear();
  this->optionalMapField.clear();
  this->binaryField = {};
  __isset = {};
}

bool Foo::operator==(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.intField, rhs.intField)) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter1>(lhs.optionalIntField_ref(), rhs.optionalIntField_ref())) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.intFieldWithDefault, rhs.intFieldWithDefault)) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter2>(lhs.setField, rhs.setField)) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter2>(lhs.optionalSetField_ref(), rhs.optionalSetField_ref())) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter3>(lhs.mapField, rhs.mapField)) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter3>(lhs.optionalMapField_ref(), rhs.optionalMapField_ref())) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.binaryField, rhs.binaryField)) {
    return false;
  }
  return true;
}

bool Foo::operator<(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.intField, rhs.intField)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter1>(lhs.intField, rhs.intField);
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter1>(lhs.optionalIntField_ref(), rhs.optionalIntField_ref())) {
    return ::apache::thrift::adapt_detail::neq_less_opt<my::Adapter1>(lhs.optionalIntField_ref(), rhs.optionalIntField_ref());
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.intFieldWithDefault, rhs.intFieldWithDefault)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter1>(lhs.intFieldWithDefault, rhs.intFieldWithDefault);
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter2>(lhs.setField, rhs.setField)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter2>(lhs.setField, rhs.setField);
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter2>(lhs.optionalSetField_ref(), rhs.optionalSetField_ref())) {
    return ::apache::thrift::adapt_detail::neq_less_opt<my::Adapter2>(lhs.optionalSetField_ref(), rhs.optionalSetField_ref());
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter3>(lhs.mapField, rhs.mapField)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter3>(lhs.mapField, rhs.mapField);
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter3>(lhs.optionalMapField_ref(), rhs.optionalMapField_ref())) {
    return ::apache::thrift::adapt_detail::neq_less_opt<my::Adapter3>(lhs.optionalMapField_ref(), rhs.optionalMapField_ref());
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.binaryField, rhs.binaryField)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter1>(lhs.binaryField, rhs.binaryField);
  }
  return false;
}


void swap(Foo& a, Foo& b) {
  using ::std::swap;
  swap(a.intField_ref().value(), b.intField_ref().value());
  swap(a.optionalIntField_ref().value_unchecked(), b.optionalIntField_ref().value_unchecked());
  swap(a.intFieldWithDefault_ref().value(), b.intFieldWithDefault_ref().value());
  swap(a.setField_ref().value(), b.setField_ref().value());
  swap(a.optionalSetField_ref().value_unchecked(), b.optionalSetField_ref().value_unchecked());
  swap(a.mapField_ref().value(), b.mapField_ref().value());
  swap(a.optionalMapField_ref().value_unchecked(), b.optionalMapField_ref().value_unchecked());
  swap(a.binaryField_ref().value(), b.binaryField_ref().value());
  swap(a.__isset, b.__isset);
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Baz>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Baz>;
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

constexpr std::size_t const TEnumTraits<::cpp2::Baz::Type>::size;
folly::Range<::cpp2::Baz::Type const*> const TEnumTraits<::cpp2::Baz::Type>::values = folly::range(TEnumDataStorage<::cpp2::Baz::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Baz::Type>::names = folly::range(TEnumDataStorage<::cpp2::Baz::Type>::names);

char const* TEnumTraits<::cpp2::Baz::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::Baz::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::Baz::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::Baz::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void Baz::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::intField:
      destruct(value_.intField);
      break;
    case Type::setField:
      destruct(value_.setField);
      break;
    case Type::mapField:
      destruct(value_.mapField);
      break;
    case Type::binaryField:
      destruct(value_.binaryField);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool Baz::operator==(const Baz& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::intField:
      return value_.intField == rhs.value_.intField;
    case Type::setField:
      return value_.setField == rhs.value_.setField;
    case Type::mapField:
      return value_.mapField == rhs.value_.mapField;
    case Type::binaryField:
      return value_.binaryField == rhs.value_.binaryField;
    default:
      return true;
  }
}

bool Baz::operator<(const Baz& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::intField:
      return lhs.value_.intField < rhs.value_.intField;
    case Type::setField:
      return lhs.value_.setField < rhs.value_.setField;
    case Type::mapField:
      return lhs.value_.mapField < rhs.value_.mapField;
    case Type::binaryField:
      return lhs.value_.binaryField < rhs.value_.binaryField;
    default:
      return false;
  }
}

void swap(Baz& a, Baz& b) {
  Baz temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void Baz::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Baz::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Baz::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Baz::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Baz::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Baz::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Baz::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Baz::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Bar>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Bar>;
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

Bar::Bar(const Bar& srcObj) {
  structField = srcObj.structField;
  __isset.__fbthrift_set(folly::index_constant<0>(),srcObj.__isset.__fbthrift_get(folly::index_constant<0>()));
  optionalStructField = srcObj.optionalStructField;
  __isset.__fbthrift_set(folly::index_constant<1>(),srcObj.__isset.__fbthrift_get(folly::index_constant<1>()));
  structListField = srcObj.structListField;
  __isset.__fbthrift_set(folly::index_constant<2>(),srcObj.__isset.__fbthrift_get(folly::index_constant<2>()));
  optionalStructListField = srcObj.optionalStructListField;
  __isset.__fbthrift_set(folly::index_constant<3>(),srcObj.__isset.__fbthrift_get(folly::index_constant<3>()));
  unionField = srcObj.unionField;
  __isset.__fbthrift_set(folly::index_constant<4>(),srcObj.__isset.__fbthrift_get(folly::index_constant<4>()));
  optionalUnionField = srcObj.optionalUnionField;
  __isset.__fbthrift_set(folly::index_constant<5>(),srcObj.__isset.__fbthrift_get(folly::index_constant<5>()));
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(structField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalStructField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 5>(unionField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 6>(optionalUnionField, *this);
}

Bar& Bar::operator=(const Bar& src) {
  Bar tmp(src);
  swap(*this, tmp);
  return *this;
}

Bar::Bar() {
}


Bar::~Bar() {}

Bar::Bar(Bar&& other) noexcept  :
    structField(std::move(other.structField)),
    optionalStructField(std::move(other.optionalStructField)),
    structListField(std::move(other.structListField)),
    optionalStructListField(std::move(other.optionalStructListField)),
    unionField(std::move(other.unionField)),
    optionalUnionField(std::move(other.optionalUnionField)),
    __isset(other.__isset) {
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(structField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalStructField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 5>(unionField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 6>(optionalUnionField, *this);
}

Bar& Bar::operator=(FOLLY_MAYBE_UNUSED Bar&& other) noexcept {
    this->structField = std::move(other.structField);
    this->optionalStructField = std::move(other.optionalStructField);
    this->structListField = std::move(other.structListField);
    this->optionalStructListField = std::move(other.optionalStructListField);
    this->unionField = std::move(other.unionField);
    this->optionalUnionField = std::move(other.optionalUnionField);
    __isset = other.__isset;
    return *this;
}


Bar::Bar(apache::thrift::FragileConstructor, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo> structField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo> optionalStructField__arg, ::std::vector<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>> structListField__arg, ::std::vector<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>> optionalStructListField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Baz> unionField__arg, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Baz> optionalUnionField__arg) :
    structField(std::move(structField__arg)),
    optionalStructField(std::move(optionalStructField__arg)),
    structListField(std::move(structListField__arg)),
    optionalStructListField(std::move(optionalStructListField__arg)),
    unionField(std::move(unionField__arg)),
    optionalUnionField(std::move(optionalUnionField__arg)) {
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(structField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 2>(optionalStructField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 5>(unionField, *this);
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 6>(optionalUnionField, *this);
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
  __isset.__fbthrift_set(folly::index_constant<3>(), true);
  __isset.__fbthrift_set(folly::index_constant<4>(), true);
  __isset.__fbthrift_set(folly::index_constant<5>(), true);
}


void Bar::__clear() {
  // clear all fields
  this->structField = {};
  this->optionalStructField = {};
  this->structListField.clear();
  this->optionalStructListField.clear();
  this->unionField = {};
  this->optionalUnionField = {};
  __isset = {};
}

bool Bar::operator==(const Bar& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.structField, rhs.structField)) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter1>(lhs.optionalStructField_ref(), rhs.optionalStructField_ref())) {
    return false;
  }
  if (!(lhs.structListField_ref() == rhs.structListField_ref())) {
    return false;
  }
  if (!(lhs.optionalStructListField_ref() == rhs.optionalStructListField_ref())) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.unionField, rhs.unionField)) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter1>(lhs.optionalUnionField_ref(), rhs.optionalUnionField_ref())) {
    return false;
  }
  return true;
}

bool Bar::operator<(const Bar& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.structField, rhs.structField)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter1>(lhs.structField, rhs.structField);
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter1>(lhs.optionalStructField_ref(), rhs.optionalStructField_ref())) {
    return ::apache::thrift::adapt_detail::neq_less_opt<my::Adapter1>(lhs.optionalStructField_ref(), rhs.optionalStructField_ref());
  }
  if (!(lhs.structListField_ref() == rhs.structListField_ref())) {
    return lhs.structListField_ref() < rhs.structListField_ref();
  }
  if (!(lhs.optionalStructListField_ref() == rhs.optionalStructListField_ref())) {
    return lhs.optionalStructListField_ref() < rhs.optionalStructListField_ref();
  }
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.unionField, rhs.unionField)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter1>(lhs.unionField, rhs.unionField);
  }
  if (::apache::thrift::adapt_detail::not_equal_opt<my::Adapter1>(lhs.optionalUnionField_ref(), rhs.optionalUnionField_ref())) {
    return ::apache::thrift::adapt_detail::neq_less_opt<my::Adapter1>(lhs.optionalUnionField_ref(), rhs.optionalUnionField_ref());
  }
  return false;
}

const ::std::vector<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>& Bar::get_structListField() const& {
  return structListField;
}

::std::vector<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>> Bar::get_structListField() && {
  return std::move(structListField);
}

const ::std::vector<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>* Bar::get_optionalStructListField() const& {
  return optionalStructListField_ref().has_value() ? std::addressof(optionalStructListField) : nullptr;
}

::std::vector<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>* Bar::get_optionalStructListField() & {
  return optionalStructListField_ref().has_value() ? std::addressof(optionalStructListField) : nullptr;
}


void swap(Bar& a, Bar& b) {
  using ::std::swap;
  swap(a.structField_ref().value(), b.structField_ref().value());
  swap(a.optionalStructField_ref().value_unchecked(), b.optionalStructField_ref().value_unchecked());
  swap(a.structListField_ref().value(), b.structListField_ref().value());
  swap(a.optionalStructListField_ref().value_unchecked(), b.optionalStructListField_ref().value_unchecked());
  swap(a.unionField_ref().value(), b.unionField_ref().value());
  swap(a.optionalUnionField_ref().value_unchecked(), b.optionalUnionField_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void Bar::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Bar::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Bar::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Bar::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Bar::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Bar::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Bar::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Bar::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Bar,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Bar,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Bar,
        ::apache::thrift::type_class::variant,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Baz>>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Bar,
        ::apache::thrift::type_class::variant,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Baz>>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Bar,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Bar,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Foo>>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Bar,
        ::apache::thrift::type_class::variant,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Baz>>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Bar,
        ::apache::thrift::type_class::variant,
        ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::cpp2::Baz>>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::StructWithFieldAdapter>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::StructWithFieldAdapter>;
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

StructWithFieldAdapter::StructWithFieldAdapter(const StructWithFieldAdapter& srcObj) {
  field = srcObj.field;
  __isset.__fbthrift_set(folly::index_constant<0>(),srcObj.__isset.__fbthrift_get(folly::index_constant<0>()));
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(field, *this);
}

StructWithFieldAdapter& StructWithFieldAdapter::operator=(const StructWithFieldAdapter& src) {
  StructWithFieldAdapter tmp(src);
  swap(*this, tmp);
  return *this;
}


StructWithFieldAdapter::StructWithFieldAdapter(apache::thrift::FragileConstructor, ::apache::thrift::adapt_detail::adapted_field_t<my::Adapter1, 1, ::std::int32_t, __fbthrift_cpp2_type> field__arg) :
    field(std::move(field__arg)) {
  ::apache::thrift::adapt_detail::construct<my::Adapter1, 1>(field, *this);
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void StructWithFieldAdapter::__clear() {
  // clear all fields
  this->field = {};
  __isset = {};
}

bool StructWithFieldAdapter::operator==(const StructWithFieldAdapter& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.field, rhs.field)) {
    return false;
  }
  return true;
}

bool StructWithFieldAdapter::operator<(const StructWithFieldAdapter& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (::apache::thrift::adapt_detail::not_equal<my::Adapter1>(lhs.field, rhs.field)) {
    return ::apache::thrift::adapt_detail::less<my::Adapter1>(lhs.field, rhs.field);
  }
  return false;
}


void swap(StructWithFieldAdapter& a, StructWithFieldAdapter& b) {
  using ::std::swap;
  swap(a.field_ref().value(), b.field_ref().value());
  swap(a.__isset, b.__isset);
}

template void StructWithFieldAdapter::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithFieldAdapter::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithFieldAdapter::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithFieldAdapter::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void StructWithFieldAdapter::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithFieldAdapter::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithFieldAdapter::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithFieldAdapter::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 1, ::std::int32_t, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 2, ::std::int32_t, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 3, ::std::int32_t, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter2, 4, ::std::set<::std::string>, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter2, 5, ::std::set<::std::string>, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter3, 6, ::std::map<::std::string, ::cpp2::ListWithElemAdapter>, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter3, 7, ::std::map<::std::string, ::cpp2::ListWithElemAdapter>, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 8, ::std::string, ::cpp2::Foo>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 1, ::std::int32_t, ::cpp2::Baz>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter2, 4, ::std::set<::std::string>, ::cpp2::Baz>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter3, 6, ::std::map<::std::string, ::cpp2::ListWithElemAdapter>, ::cpp2::Baz>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 8, ::std::string, ::cpp2::Baz>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 1, ::cpp2::Foo, ::cpp2::Bar>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 2, ::cpp2::Foo, ::cpp2::Bar>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 5, ::cpp2::Baz, ::cpp2::Bar>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 6, ::cpp2::Baz, ::cpp2::Bar>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<my::Adapter1, 1, ::std::int32_t, ::cpp2::StructWithFieldAdapter>();
  ::apache::thrift::adapt_detail::validateAdapter<my::Adapter2, ::std::set<::std::string>>();
  ::apache::thrift::adapt_detail::validateAdapter<my::Adapter2, ::cpp2::Bar>();
  ::apache::thrift::adapt_detail::validateAdapter<my::Adapter2, ::cpp2::Baz>();
}
}} // cpp2

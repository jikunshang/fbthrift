/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mixin/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Mixin1>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Mixin1>;
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

const folly::StringPiece Mixin1::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Mixin1>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Mixin1::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Mixin1>::name;
}

Mixin1::Mixin1(const Mixin1&) = default;
Mixin1& Mixin1::operator=(const Mixin1&) = default;
Mixin1::Mixin1() {
}


Mixin1::~Mixin1() {}

Mixin1::Mixin1(FOLLY_MAYBE_UNUSED Mixin1&& other) noexcept :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __isset(other.__isset) {
}

Mixin1& Mixin1::operator=(FOLLY_MAYBE_UNUSED Mixin1&& other) noexcept {
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    __isset = other.__isset;
    return *this;
}


Mixin1::Mixin1(apache::thrift::FragileConstructor, ::std::string field1__arg) :
    __fbthrift_field_field1(std::move(field1__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Mixin1::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1 = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void Mixin1::__fbthrift_clear_terse_fields() {
}

bool Mixin1::__fbthrift_is_empty() const {
  return false;
}

bool Mixin1::operator==(FOLLY_MAYBE_UNUSED const Mixin1& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return false;
  }
  return true;
}

bool Mixin1::operator<(FOLLY_MAYBE_UNUSED const Mixin1& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return lhs.field1_ref() < rhs.field1_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED Mixin1& a, FOLLY_MAYBE_UNUSED Mixin1& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_field1, b.__fbthrift_field_field1);
  swap(a.__isset, b.__isset);
}

template void Mixin1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Mixin1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Mixin1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Mixin1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Mixin1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Mixin1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Mixin1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Mixin1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Mixin2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Mixin2>;
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

const folly::StringPiece Mixin2::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Mixin2>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Mixin2::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Mixin2>::name;
}

Mixin2::Mixin2(const Mixin2&) = default;
Mixin2& Mixin2::operator=(const Mixin2&) = default;
Mixin2::Mixin2() {
}


Mixin2::~Mixin2() {}

Mixin2::Mixin2(FOLLY_MAYBE_UNUSED Mixin2&& other) noexcept :
    __fbthrift_field_m1(std::move(other.__fbthrift_field_m1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __isset(other.__isset) {
}

Mixin2& Mixin2::operator=(FOLLY_MAYBE_UNUSED Mixin2&& other) noexcept {
    this->__fbthrift_field_m1 = std::move(other.__fbthrift_field_m1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    __isset = other.__isset;
    return *this;
}


Mixin2::Mixin2(apache::thrift::FragileConstructor, ::cpp2::Mixin1 m1__arg, ::std::string field2__arg) :
    __fbthrift_field_m1(std::move(m1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void Mixin2::__fbthrift_clear() {
  // clear all fields
  ::apache::thrift::clear(this->__fbthrift_field_m1);
  this->__fbthrift_field_field2 = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void Mixin2::__fbthrift_clear_terse_fields() {
}

bool Mixin2::__fbthrift_is_empty() const {
  return false;
}

bool Mixin2::operator==(FOLLY_MAYBE_UNUSED const Mixin2& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.m1_ref() == rhs.m1_ref())) {
    return false;
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return false;
  }
  return true;
}

bool Mixin2::operator<(FOLLY_MAYBE_UNUSED const Mixin2& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.m1_ref() == rhs.m1_ref())) {
    return lhs.m1_ref() < rhs.m1_ref();
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return lhs.field2_ref() < rhs.field2_ref();
  }
  return false;
}

const ::cpp2::Mixin1& Mixin2::get_m1() const& {
  return __fbthrift_field_m1;
}

::cpp2::Mixin1 Mixin2::get_m1() && {
  return std::move(__fbthrift_field_m1);
}


void swap(FOLLY_MAYBE_UNUSED Mixin2& a, FOLLY_MAYBE_UNUSED Mixin2& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_m1, b.__fbthrift_field_m1);
  swap(a.__fbthrift_field_field2, b.__fbthrift_field_field2);
  swap(a.__isset, b.__isset);
}

template void Mixin2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Mixin2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Mixin2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Mixin2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Mixin2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Mixin2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Mixin2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Mixin2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Mixin2,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin1>,
    "inconsistent use of json option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Mixin3Base>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Mixin3Base>;
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

const folly::StringPiece Mixin3Base::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Mixin3Base>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Mixin3Base::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Mixin3Base>::name;
}

Mixin3Base::Mixin3Base(const Mixin3Base&) = default;
Mixin3Base& Mixin3Base::operator=(const Mixin3Base&) = default;
Mixin3Base::Mixin3Base() {
}


Mixin3Base::~Mixin3Base() {}

Mixin3Base::Mixin3Base(FOLLY_MAYBE_UNUSED Mixin3Base&& other) noexcept :
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __isset(other.__isset) {
}

Mixin3Base& Mixin3Base::operator=(FOLLY_MAYBE_UNUSED Mixin3Base&& other) noexcept {
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    __isset = other.__isset;
    return *this;
}


Mixin3Base::Mixin3Base(apache::thrift::FragileConstructor, ::std::string field3__arg) :
    __fbthrift_field_field3(std::move(field3__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Mixin3Base::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field3 = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void Mixin3Base::__fbthrift_clear_terse_fields() {
}

bool Mixin3Base::__fbthrift_is_empty() const {
  return false;
}

bool Mixin3Base::operator==(FOLLY_MAYBE_UNUSED const Mixin3Base& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return false;
  }
  return true;
}

bool Mixin3Base::operator<(FOLLY_MAYBE_UNUSED const Mixin3Base& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return lhs.field3_ref() < rhs.field3_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED Mixin3Base& a, FOLLY_MAYBE_UNUSED Mixin3Base& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_field3, b.__fbthrift_field_field3);
  swap(a.__isset, b.__isset);
}

template void Mixin3Base::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Mixin3Base::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Mixin3Base::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Mixin3Base::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Mixin3Base::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Mixin3Base::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Mixin3Base::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Mixin3Base::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

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

const folly::StringPiece Foo::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Foo>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Foo::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Foo>::name;
}

Foo::Foo(const Foo&) = default;
Foo& Foo::operator=(const Foo&) = default;
Foo::Foo() {
}


Foo::~Foo() {}

Foo::Foo(FOLLY_MAYBE_UNUSED Foo&& other) noexcept :
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __fbthrift_field_m2(std::move(other.__fbthrift_field_m2)),
    __fbthrift_field_m3(std::move(other.__fbthrift_field_m3)),
    __isset(other.__isset) {
}

Foo& Foo::operator=(FOLLY_MAYBE_UNUSED Foo&& other) noexcept {
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    this->__fbthrift_field_m2 = std::move(other.__fbthrift_field_m2);
    this->__fbthrift_field_m3 = std::move(other.__fbthrift_field_m3);
    __isset = other.__isset;
    return *this;
}


Foo::Foo(apache::thrift::FragileConstructor, ::std::string field4__arg, ::cpp2::Mixin2 m2__arg, ::cpp2::Mixin3 m3__arg) :
    __fbthrift_field_field4(std::move(field4__arg)),
    __fbthrift_field_m2(std::move(m2__arg)),
    __fbthrift_field_m3(std::move(m3__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
}


void Foo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field4 = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  ::apache::thrift::clear(this->__fbthrift_field_m2);
  ::apache::thrift::clear(this->__fbthrift_field_m3);
  __isset = {};
}

void Foo::__fbthrift_clear_terse_fields() {
}

bool Foo::__fbthrift_is_empty() const {
  return false;
}

bool Foo::operator==(FOLLY_MAYBE_UNUSED const Foo& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return false;
  }
  if (!(lhs.m2_ref() == rhs.m2_ref())) {
    return false;
  }
  if (!(lhs.m3_ref() == rhs.m3_ref())) {
    return false;
  }
  return true;
}

bool Foo::operator<(FOLLY_MAYBE_UNUSED const Foo& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return lhs.field4_ref() < rhs.field4_ref();
  }
  if (!(lhs.m2_ref() == rhs.m2_ref())) {
    return lhs.m2_ref() < rhs.m2_ref();
  }
  if (!(lhs.m3_ref() == rhs.m3_ref())) {
    return lhs.m3_ref() < rhs.m3_ref();
  }
  return false;
}

const ::cpp2::Mixin2& Foo::get_m2() const& {
  return __fbthrift_field_m2;
}

::cpp2::Mixin2 Foo::get_m2() && {
  return std::move(__fbthrift_field_m2);
}

const ::cpp2::Mixin3& Foo::get_m3() const& {
  return __fbthrift_field_m3;
}

::cpp2::Mixin3 Foo::get_m3() && {
  return std::move(__fbthrift_field_m3);
}


void swap(FOLLY_MAYBE_UNUSED Foo& a, FOLLY_MAYBE_UNUSED Foo& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_field4, b.__fbthrift_field_field4);
  swap(a.__fbthrift_field_m2, b.__fbthrift_field_m2);
  swap(a.__fbthrift_field_m3, b.__fbthrift_field_m3);
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

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Foo,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin2>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Foo,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin3>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2

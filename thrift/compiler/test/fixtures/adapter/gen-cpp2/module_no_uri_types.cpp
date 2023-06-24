/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/adapter/src/module_no_uri.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_no_uri_types.h"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_no_uri_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_no_uri_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::RefUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::RefUnion>;
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

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::RefUnion::Type>::size;
#endif
folly::Range<::cpp2::RefUnion::Type const*> const TEnumTraits<::cpp2::RefUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::RefUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::RefUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::RefUnion::Type>::names);

bool TEnumTraits<::cpp2::RefUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::RefUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece RefUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<RefUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece RefUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<RefUnion>::name;
}

void RefUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::field1:
      destruct(value_.field1);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool RefUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool RefUnion::operator==(const RefUnion& rhs) const {
  if (getType() != rhs.getType()) { return false; }
  switch(getType()) {
    case Type::field1:
      return ::apache::thrift::adapt_detail::equal<::my::Adapter1, ::apache::thrift::adapt_detail::adapted_field_t<::my::Adapter1, 1, ::std::string, RefUnion>>(
*value_.field1, *rhs.value_.field1);
    default:
      return true;
  }
}

bool RefUnion::operator<(FOLLY_MAYBE_UNUSED const RefUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::field1:
      return ::apache::thrift::adapt_detail::less<::my::Adapter1, ::apache::thrift::adapt_detail::adapted_field_t<::my::Adapter1, 1, ::std::string, RefUnion>>(
*value_.field1, *rhs.value_.field1);
    default:
      return false;
  }
}

void swap(RefUnion& a, RefUnion& b) {
  RefUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void RefUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t RefUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t RefUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t RefUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void RefUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t RefUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t RefUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t RefUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
  ::apache::thrift::adapt_detail::validateFieldAdapter<::my::Adapter1, 1, ::std::string, ::cpp2::RefUnion>();
}
}} // cpp2
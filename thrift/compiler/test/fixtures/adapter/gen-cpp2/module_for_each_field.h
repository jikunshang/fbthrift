/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::Foo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).intField_ref()...);
    f(1, static_cast<T&&>(t).optionalIntField_ref()...);
    f(2, static_cast<T&&>(t).intFieldWithDefault_ref()...);
    f(3, static_cast<T&&>(t).setField_ref()...);
    f(4, static_cast<T&&>(t).optionalSetField_ref()...);
    f(5, static_cast<T&&>(t).mapField_ref()...);
    f(6, static_cast<T&&>(t).optionalMapField_ref()...);
    f(7, static_cast<T&&>(t).binaryField_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::Baz> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).intField_ref()...);
    f(1, static_cast<T&&>(t).setField_ref()...);
    f(2, static_cast<T&&>(t).mapField_ref()...);
    f(3, static_cast<T&&>(t).binaryField_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::Bar> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).structField_ref()...);
    f(1, static_cast<T&&>(t).optionalStructField_ref()...);
    f(2, static_cast<T&&>(t).structListField_ref()...);
    f(3, static_cast<T&&>(t).optionalStructListField_ref()...);
    f(4, static_cast<T&&>(t).unionField_ref()...);
    f(5, static_cast<T&&>(t).optionalUnionField_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::StructWithFieldAdapter> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field_ref()...);
    f(1, static_cast<T&&>(t).shared_field_ref()...);
    f(2, static_cast<T&&>(t).opt_shared_field_ref()...);
    f(3, static_cast<T&&>(t).opt_boxed_field_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache

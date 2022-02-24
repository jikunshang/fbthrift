/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "src/gen-cpp2/module_data.h"
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::Baz::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
void reset_field<::cpp2::Foo>(
    ::cpp2::Foo& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.intField_ref().copy_from(default_inst<::cpp2::Foo>().intField_ref());
      return;
    case 1:
      obj.optionalIntField_ref().copy_from(default_inst<::cpp2::Foo>().optionalIntField_ref());
      return;
    case 2:
      obj.intFieldWithDefault_ref().copy_from(default_inst<::cpp2::Foo>().intFieldWithDefault_ref());
      return;
    case 3:
      obj.setField_ref().copy_from(default_inst<::cpp2::Foo>().setField_ref());
      return;
    case 4:
      obj.optionalSetField_ref().copy_from(default_inst<::cpp2::Foo>().optionalSetField_ref());
      return;
    case 5:
      obj.mapField_ref().copy_from(default_inst<::cpp2::Foo>().mapField_ref());
      return;
    case 6:
      obj.optionalMapField_ref().copy_from(default_inst<::cpp2::Foo>().optionalMapField_ref());
      return;
    case 7:
      obj.binaryField_ref().copy_from(default_inst<::cpp2::Foo>().binaryField_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::Bar>(
    ::cpp2::Bar& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.structField_ref().copy_from(default_inst<::cpp2::Bar>().structField_ref());
      return;
    case 1:
      obj.optionalStructField_ref().copy_from(default_inst<::cpp2::Bar>().optionalStructField_ref());
      return;
    case 2:
      obj.structListField_ref().copy_from(default_inst<::cpp2::Bar>().structListField_ref());
      return;
    case 3:
      obj.optionalStructListField_ref().copy_from(default_inst<::cpp2::Bar>().optionalStructListField_ref());
      return;
    case 4:
      obj.unionField_ref().copy_from(default_inst<::cpp2::Bar>().unionField_ref());
      return;
    case 5:
      obj.optionalUnionField_ref().copy_from(default_inst<::cpp2::Bar>().optionalUnionField_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::StructWithFieldAdapter>(
    ::cpp2::StructWithFieldAdapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_ref().copy_from(default_inst<::cpp2::StructWithFieldAdapter>().field_ref());
      return;
    case 1:
      obj.shared_field_ref().reset();
      return;
    case 2:
      obj.opt_shared_field_ref().reset();
      return;
    case 3:
      obj.opt_boxed_field_ref().copy_from(default_inst<::cpp2::StructWithFieldAdapter>().opt_boxed_field_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Foo>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Baz>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Bar>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::StructWithFieldAdapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift

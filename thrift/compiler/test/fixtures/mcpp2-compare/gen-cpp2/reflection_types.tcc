/**
 * Autogenerated by Thrift for src/reflection.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>
#include <thrift/lib/cpp2/op/Clear.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::ReflectionStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void ReflectionStruct::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_fieldA:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_fieldA, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<ReflectionStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_fieldA;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t ReflectionStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ReflectionStruct");
  {
    xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldA);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ReflectionStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ReflectionStruct");
  {
    xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldA);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ReflectionStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ReflectionStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "fieldA", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_fieldA);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void ReflectionStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ReflectionStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ReflectionStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ReflectionStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template void ReflectionStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t ReflectionStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2

/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>




class MyData;

class MyData : private apache::thrift::detail::st::ComparisonOperators<MyData> {
 public:

  MyData() {}
  // FragileConstructor for use in initialization lists only

  MyData(apache::thrift::FragileConstructor, std::string datum__arg) :
      datum(std::move(datum__arg)) {
    __isset.datum = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyData(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyData(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    datum = arg.move();
    __isset.datum = true;
  }

  MyData(MyData&&) = default;

  MyData(const MyData&) = default;

  MyData& operator=(MyData&&) = default;

  MyData& operator=(const MyData&) = default;
  void __clear();

  virtual ~MyData() throw() {}

  std::string datum;

  struct __isset {
    void __clear() {
      datum = false;
    }

    bool datum = false;
  } __isset;
  bool operator==(const MyData& rhs) const;

  bool operator < (const MyData& rhs) const {
    if (!(datum == rhs.datum)) {
      return datum < rhs.datum;
    }
    return false;
  }

  const std::string& get_datum() const& {
    return datum;
  }

  std::string get_datum() && {
    return std::move(datum);
  }

  template <typename T_MyData_datum_struct_setter>
  std::string& set_datum(T_MyData_datum_struct_setter&& datum_) {
    datum = std::forward<T_MyData_datum_struct_setter>(datum_);
    __isset.datum = true;
    return datum;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(MyData& a, MyData& b);
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::MyData>::clear( ::MyData* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::MyData>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::MyData>::write(Protocol* proto, const  ::MyData* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::MyData>::read(Protocol* proto,   ::MyData* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::MyData>::serializedSize(Protocol* proto, const  ::MyData* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::MyData>::serializedSizeZC(Protocol* proto, const  ::MyData* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
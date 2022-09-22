/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/TestService.h"
#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/TestService.tcc"
#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::getProcessor() {
  return std::make_unique<::test::namespace_from_package::module::TestServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::test::namespace_from_package::module::TestServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::test::namespace_from_package::module::TestServiceServiceInfoHolder apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::__fbthrift_serviceInfoHolder;


::std::int64_t apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::init(::std::int64_t /*int1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("init");
}

::std::int64_t apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::sync_init(::std::int64_t p_int1) {
  return init(p_int1);
}

folly::SemiFuture<::std::int64_t> apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::semifuture_init(::std::int64_t p_int1) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return sync_init(p_int1);
}

folly::Future<::std::int64_t> apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::future_init(::std::int64_t p_int1) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_init(p_int1), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::std::int64_t> apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::co_init(::std::int64_t p_int1) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<::std::int64_t /*int1*/>(p_int1));
}

folly::coro::Task<::std::int64_t> apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::co_init(apache::thrift::RequestParams /* params */, ::std::int64_t p_int1) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_init(p_int1);
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>::async_tm_init(std::unique_ptr<apache::thrift::HandlerCallback<::std::int64_t>> callback, ::std::int64_t p_int1) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_init.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_init.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_init(params, p_int1);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_init.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_init(p_int1);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_init(p_int1);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_init(params, p_int1);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_init(p_int1);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(sync_init(p_int1));
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_int1) = std::move(ex).restoreArgs<::std::int64_t /*int1*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace test { namespace namespace_from_package { namespace module {

::std::int64_t TestServiceSvNull::init(::std::int64_t /*int1*/) {
  return 0;
}


const char* TestServiceAsyncProcessor::getServiceName() {
  return "TestService";
}

void TestServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>>::gen(response);
}

void TestServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void TestServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void TestServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const TestServiceAsyncProcessor::ProcessMap& TestServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const TestServiceAsyncProcessor::ProcessMap TestServiceAsyncProcessor::kOwnProcessMap_ {
  {"init",
    {&TestServiceAsyncProcessor::setUpAndProcess_init<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &TestServiceAsyncProcessor::setUpAndProcess_init<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &TestServiceAsyncProcessor::executeRequest_init<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &TestServiceAsyncProcessor::executeRequest_init<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& TestServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap TestServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"init",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "TestService.init",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  };

  return requestInfoMap;
}
}}} // test::namespace_from_package::module

/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FooService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace test { namespace fixtures { namespace basic {
typedef apache::thrift::ThriftPresult<false> FooService_simple_rpc_pargs;
typedef apache::thrift::ThriftPresult<true> FooService_simple_rpc_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void FooServiceAsyncProcessor::setUpAndProcess_simple_rpc(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, FOLLY_MAYBE_UNUSED apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &FooServiceAsyncProcessor::executeRequest_simple_rpc<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void FooServiceAsyncProcessor::executeRequest_simple_rpc(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::test::fixtures::basic::FooService_simple_rpc_pargs args;
  apache::thrift::ContextStack::UniquePtr ctxStack(this->getContextStack(this->getServiceName(), "FooService.simple_rpc", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "simple_rpc", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "simple_rpc");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_simple_rpc<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_simple_rpc<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_simple_rpc(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse FooServiceAsyncProcessor::return_simple_rpc(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::test::fixtures::basic::FooService_simple_rpc_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void FooServiceAsyncProcessor::throw_wrapped_simple_rpc(apache::thrift::ResponseChannelRequest::UniquePtr req,FOLLY_MAYBE_UNUSED int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "simple_rpc");
    return;
  }
}


}}} // test::fixtures::basic

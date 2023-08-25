// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greptime/v1/region/server.proto

#include "greptime/v1/region/server.pb.h"
#include "greptime/v1/region/server.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace greptime {
namespace v1 {
namespace region {

static const char* Region_method_names[] = {
  "/greptime.v1.region.Region/Handle",
  "/greptime.v1.region.Region/HandleRequests",
};

std::unique_ptr< Region::Stub> Region::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Region::Stub> stub(new Region::Stub(channel, options));
  return stub;
}

Region::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Handle_(Region_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_HandleRequests_(Region_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  {}

::grpc::Status Region::Stub::Handle(::grpc::ClientContext* context, const ::greptime::v1::region::RegionRequest& request, ::greptime::v1::region::RegionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::greptime::v1::region::RegionRequest, ::greptime::v1::region::RegionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Handle_, context, request, response);
}

void Region::Stub::async::Handle(::grpc::ClientContext* context, const ::greptime::v1::region::RegionRequest* request, ::greptime::v1::region::RegionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::greptime::v1::region::RegionRequest, ::greptime::v1::region::RegionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Handle_, context, request, response, std::move(f));
}

void Region::Stub::async::Handle(::grpc::ClientContext* context, const ::greptime::v1::region::RegionRequest* request, ::greptime::v1::region::RegionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Handle_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::region::RegionResponse>* Region::Stub::PrepareAsyncHandleRaw(::grpc::ClientContext* context, const ::greptime::v1::region::RegionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::greptime::v1::region::RegionResponse, ::greptime::v1::region::RegionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Handle_, context, request);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::region::RegionResponse>* Region::Stub::AsyncHandleRaw(::grpc::ClientContext* context, const ::greptime::v1::region::RegionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHandleRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::greptime::v1::region::RegionRequest>* Region::Stub::HandleRequestsRaw(::grpc::ClientContext* context, ::greptime::v1::region::RegionResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::greptime::v1::region::RegionRequest>::Create(channel_.get(), rpcmethod_HandleRequests_, context, response);
}

void Region::Stub::async::HandleRequests(::grpc::ClientContext* context, ::greptime::v1::region::RegionResponse* response, ::grpc::ClientWriteReactor< ::greptime::v1::region::RegionRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::greptime::v1::region::RegionRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_HandleRequests_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::greptime::v1::region::RegionRequest>* Region::Stub::AsyncHandleRequestsRaw(::grpc::ClientContext* context, ::greptime::v1::region::RegionResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::greptime::v1::region::RegionRequest>::Create(channel_.get(), cq, rpcmethod_HandleRequests_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::greptime::v1::region::RegionRequest>* Region::Stub::PrepareAsyncHandleRequestsRaw(::grpc::ClientContext* context, ::greptime::v1::region::RegionResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::greptime::v1::region::RegionRequest>::Create(channel_.get(), cq, rpcmethod_HandleRequests_, context, response, false, nullptr);
}

Region::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Region_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Region::Service, ::greptime::v1::region::RegionRequest, ::greptime::v1::region::RegionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Region::Service* service,
             ::grpc::ServerContext* ctx,
             const ::greptime::v1::region::RegionRequest* req,
             ::greptime::v1::region::RegionResponse* resp) {
               return service->Handle(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Region_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< Region::Service, ::greptime::v1::region::RegionRequest, ::greptime::v1::region::RegionResponse>(
          [](Region::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::greptime::v1::region::RegionRequest>* reader,
             ::greptime::v1::region::RegionResponse* resp) {
               return service->HandleRequests(ctx, reader, resp);
             }, this)));
}

Region::Service::~Service() {
}

::grpc::Status Region::Service::Handle(::grpc::ServerContext* context, const ::greptime::v1::region::RegionRequest* request, ::greptime::v1::region::RegionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Region::Service::HandleRequests(::grpc::ServerContext* context, ::grpc::ServerReader< ::greptime::v1::region::RegionRequest>* reader, ::greptime::v1::region::RegionResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace greptime
}  // namespace v1
}  // namespace region


// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: admission.proto

#include "admission.pb.h"
#include "admission.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace admission {

static const char* Admission_method_names[] = {
  "/admission.Admission/Admission",
};

std::unique_ptr< Admission::Stub> Admission::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Admission::Stub> stub(new Admission::Stub(channel));
  return stub;
}

Admission::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Admission_(Admission_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Admission::Stub::Admission(::grpc::ClientContext* context, const ::admission::AdmissionRequest& request, ::admission::AdmissionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Admission_, context, request, response);
}

void Admission::Stub::experimental_async::Admission(::grpc::ClientContext* context, const ::admission::AdmissionRequest* request, ::admission::AdmissionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Admission_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::admission::AdmissionResponse>* Admission::Stub::AsyncAdmissionRaw(::grpc::ClientContext* context, const ::admission::AdmissionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::admission::AdmissionResponse>::Create(channel_.get(), cq, rpcmethod_Admission_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::admission::AdmissionResponse>* Admission::Stub::PrepareAsyncAdmissionRaw(::grpc::ClientContext* context, const ::admission::AdmissionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::admission::AdmissionResponse>::Create(channel_.get(), cq, rpcmethod_Admission_, context, request, false);
}

Admission::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Admission_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Admission::Service, ::admission::AdmissionRequest, ::admission::AdmissionResponse>(
          std::mem_fn(&Admission::Service::Admission), this)));
}

Admission::Service::~Service() {
}

::grpc::Status Admission::Service::Admission(::grpc::ServerContext* context, const ::admission::AdmissionRequest* request, ::admission::AdmissionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace admission

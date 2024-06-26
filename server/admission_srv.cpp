#include "../proto/admission.grpc.pb.h"
#include <grpc++/grpc++.h>

using admission::Admission;
using admission::AdmissionRequest;
using admission::AdmissionResponse;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using std::string;

#include "admission_srv.h"

class AdmissionImpl : public Admission::Service {
public:
    AdmissionImpl(std::shared_ptr<AdmissionObserver> &observer);
    Status Admission(ServerContext *context,
            const AdmissionRequest *request,
            AdmissionResponse *response);
protected:
    std::shared_ptr<AdmissionObserver> observer;
};

AdmissionImpl::AdmissionImpl(std::shared_ptr<AdmissionObserver> &observer)
{
    this->observer = std::move(observer);
}

Status AdmissionImpl::Admission(ServerContext *context,
        const AdmissionRequest *request,
        AdmissionResponse *response)
{
    string imsi = request->imsi();
    int32_t gnb = request->gnb();
    float sinr = request->sinr();
    response->set_accept(observer->admission(imsi, gnb, sinr));
    return Status::OK;

}


void runServer(const string &serverAddress,
        std::shared_ptr<AdmissionObserver> &observer)
{
    AdmissionImpl impl(observer);
    ServerBuilder builder;

    builder.AddListeningPort(serverAddress,
            grpc::InsecureServerCredentials());
    builder.RegisterService(&impl);

    std::unique_ptr<Server> server(builder.BuildAndStart());

    server->Wait();
}
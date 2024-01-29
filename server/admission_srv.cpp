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
    AdmissionImpl(std::unique_ptr<AdmissionObserver> &observer);
    Status Admission(ServerContext *context,
            const AdmissionRequest *request,
            AdmissionResponse *response);
protected:
    std::unique_ptr<AdmissionObserver> observer;
};

AdmissionImpl::AdmissionImpl(std::unique_ptr<AdmissionObserver> &observer)
{
    this->observer = std::move(observer);
}

Status AdmissionImpl::Admission(ServerContext *context,
        const AdmissionRequest *request,
        AdmissionResponse *response)
{
    string imsi = request->imsi();
    string gnb = request->gnb();
    response->set_accept(observer->admission(imsi, gnb));
    return Status::OK;

}


void runServer(const string &serverAddress,
        std::unique_ptr<AdmissionObserver> &observer)
{
    AdmissionImpl impl(observer);
    ServerBuilder builder;

    builder.AddListeningPort(serverAddress,
            grpc::InsecureServerCredentials());
    builder.RegisterService(&impl);

    std::unique_ptr<Server> server(builder.BuildAndStart());

    server->Wait();
}
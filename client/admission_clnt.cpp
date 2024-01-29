#include <grpc++/grpc++.h>
#include "../proto/admission.grpc.pb.h"

#include "admission_clnt.h"

using admission::Admission;
using admission::AdmissionRequest;
using admission::AdmissionResponse;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

class AdmissionClientImpl : public AdmissionClient {
public:
    AdmissionClientImpl(std::shared_ptr<Channel> channel);
    bool requestAdmission(const string &imsi, const string &gnb);

protected:
    std::unique_ptr<Admission::Stub> stub;
};

AdmissionClientImpl::AdmissionClientImpl(std::shared_ptr<Channel> channel) :
        stub(Admission::NewStub(channel))
{
    /* pass */    
}

bool AdmissionClientImpl::requestAdmission(const string &imsi, const string &gnb)
{
    AdmissionRequest request;
    AdmissionResponse response;
    ClientContext ctx;

    request.set_imsi(imsi);
    request.set_gnb(gnb);
    Status status = stub->Admission(&ctx, request, &response);
    return response.accept();
}

std::unique_ptr<AdmissionClient> createClient(const string &serverAddress)
{
    return std::make_unique<AdmissionClientImpl>(
        grpc::CreateChannel(serverAddress, grpc::InsecureChannelCredentials())
    );
}
#include <admissiongrpc/admission_srv.h>

class JustOk : public AdmissionObserver {
public:
    bool admission(const string &imsi, const int32_t gnb, float sinr) {
        return true;
    }
};

int main(int argc, char **argv) {
    string serverAddress("0.0.0.0:50101");
    std::shared_ptr<AdmissionObserver> observer = std::make_shared<JustOk>();
    runServer(serverAddress, observer);
    return 0;
}
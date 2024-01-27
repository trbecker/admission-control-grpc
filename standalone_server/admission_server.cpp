#include <admissiongrpc/admission_srv.h>

class JustOk : public AdmissionObserver {
public:
    bool admission(const string &imsi) {
        return true;
    }
};

int main(int argc, char **argv) {
    string serverAddress("0.0.0.0:50101");
    std::unique_ptr<AdmissionObserver> observer = std::make_unique<JustOk>();
    runServer(serverAddress, observer);
    return 0;
}
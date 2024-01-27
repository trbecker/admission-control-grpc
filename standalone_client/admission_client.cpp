#include <iostream>
#include <admissiongrpc/admission_clnt.h>

int main(int argc, char **argv)
{
    string serverAddress(argv[1]);
    string imsi(argv[2]);
    
    auto clnt = createClient(serverAddress);
    if (clnt->requestAdmission(imsi)) {
        std::cout << "accepted" << std::endl;
        return 0;
    }

    std::cout << "denied" << std::endl;
    return 1;
}
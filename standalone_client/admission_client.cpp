#include <iostream>
#include <admissiongrpc/admission_clnt.h>

int main(int argc, char **argv)
{
    string serverAddress(argv[1]);
    string imsi(argv[2]);
    int32_t gnb = atoi(argv[3]);
    float sinr = atof(argv[4]);
    
    auto clnt = createClient(serverAddress);
    if (clnt->requestAdmission(imsi, gnb, sinr)) {
        std::cout << "accepted" << std::endl;
        return 0;
    }

    std::cout << "denied" << std::endl;
    return 1;
}
#include <memory>
#include <string>

using std::string;

class AdmissionObserver
{
public:
    virtual bool admission(const string &imsi, const string &gnb) = 0;
};

extern void runServer(const string &serverAddress,
        std::unique_ptr<AdmissionObserver> &observer);
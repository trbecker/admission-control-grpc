#include <memory>
#include <string>

using std::string;

class AdmissionObserver
{
public:
    virtual bool admission(const string &imsi, const string &gnb, const float sinr) = 0;
};

extern void runServer(const string &serverAddress,
        std::shared_ptr<AdmissionObserver> &observer);
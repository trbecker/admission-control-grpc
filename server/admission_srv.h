#include <memory>
#include <string>

using std::string;

class AdmissionObserver
{
public:
    virtual bool admission(const string &imsi) = 0;
};

extern void runServer(const string &serverAddress,
        std::unique_ptr<AdmissionObserver> &observer);
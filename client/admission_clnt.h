#include <memory>
#include <string>

using std::string;

class AdmissionClient {
public:
    virtual bool requestAdmission(const string &imsi, const int32_t gnb, const float sinr) = 0;
};

extern std::unique_ptr<AdmissionClient> createClient(const string &serverAddress);
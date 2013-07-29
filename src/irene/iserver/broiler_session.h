#ifndef BROILER_SESSION_H_
#define BROILER_SESSION_H_

#include <irene_common.h>

class BroilerSession
{
public:
    BroilerSession()
        : _sessionId(0)
    {
    }

    BroilerSession(uint64_t session_id)
        : _sessionId(session_id)
    {
    }

public:
    void set_session_id(uint64_t session_id)
    {
        _sessionId = session_id;
    }

    uint64_t session_id() const
    {
        return _sessionId;
    }

public:
    void login_request_handler(const google::protobuf::Message& message)
    {
        std::cout << "enter login handler, session id = " << _sessionId << std::endl;
    }

private:
    uint64_t _sessionId;
};

#endif
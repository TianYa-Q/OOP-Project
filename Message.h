#ifndef MESSAGE
#define MESSAGE

#include <string>

class Message
{
public:
    bool code;
    std::string info;

public:
    Message(bool code, std::string info);
};

#endif /* MESSAGE */

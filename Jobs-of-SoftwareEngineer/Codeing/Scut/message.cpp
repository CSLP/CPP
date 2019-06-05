#include "message.h"

Message::Message(std::__cxx11::string a, std::__cxx11::string c, int i, std::__cxx11::string t, std::__cxx11::string to)
{
    author=a;
    content=a;
    id=i;
    time=t;
    sendTo=to;
}

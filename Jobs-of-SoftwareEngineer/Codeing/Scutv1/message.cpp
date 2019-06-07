#include "message.h"

Message::Message(std::__cxx11::string a, std::__cxx11::string c, int i, std::__cxx11::string t, std::__cxx11::string to)
{
    author=QString::fromStdString(a);
    content=QString::fromStdString(c);
    id=i;
    time=QString::fromStdString(t);
    sendTo=QString::fromStdString(to);
}

Message::Message()
{
    author="";
    content="";
    id=0;
    time="";
    sendTo="";
}

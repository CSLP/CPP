#include "message.h"

Message::Message(std::__cxx11::string a, std::__cxx11::string c, std::__cxx11::string i, std::__cxx11::string t, std::__cxx11::string to)
{
    author=QString::fromStdString(a);
    content=QString::fromStdString(c);
    id=QString::fromStdString(i);
    time=QString::fromStdString(t);
    sendTo=QString::fromStdString(to);
}

Message::Message()
{
    author=" ";
    content=" ";
    id=" ";
    time=" ";
    sendTo=" ";
}

#ifndef MESSAGE_H
#define MESSAGE_H
#include<string>
using std::string;

class Message
{
public:
    Message(string,string,int,string,string);
    string author;
    string content;
    int  id;
    string time;
    string sendTo;
};

#endif // MESSAGE_H

#ifndef MESSAGE_H
#define MESSAGE_H
#include<string>
#include<QString>
using std::string;

class Message
{
public:
    Message(string,string,int,string,string);
    QString author;
    QString content;
    int  id;
    QString time;
    QString sendTo;
};

#endif // MESSAGE_H

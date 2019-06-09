#ifndef MESSAGE_H
#define MESSAGE_H
#include<string>
#include<QString>
using std::string;

class Message
{
public:
    Message(string=" ",string=" ",string=" ",string=" ",string=" ");
    QString author;
    QString content;
    QString  id;
    QString time;
    QString sendTo;
    Message();
};

#endif // MESSAGE_H

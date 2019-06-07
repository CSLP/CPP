#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<QString>
#include<string>
using std::string;

class StudentInfo
{
public:
    StudentInfo(string="",string="",string="");
    QString id;
    QString studentName;
    QString absent;
};

#endif // STUDENTINFO_H

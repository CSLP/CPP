#ifndef COURSEINFO_H
#define COURSEINFO_H
#include<QString>
#include<string>
using std::string;
class CourseInfo
{
public:
    CourseInfo(string,string);
    QString id;
    QString courseName;
};

#endif // COURSEINFO_H

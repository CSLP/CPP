#include "studentinfo.h"
StudentInfo::StudentInfo(std::__cxx11::string i, std::__cxx11::string name)
{
    id=QString::fromStdString(i);
    studentName=QString::fromStdString(name);
}

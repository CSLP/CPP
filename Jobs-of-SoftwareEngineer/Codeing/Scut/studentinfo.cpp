#include "studentinfo.h"
StudentInfo::StudentInfo(std::__cxx11::string i, std::__cxx11::string name, std::__cxx11::string ab)
{
    id=QString::fromStdString(i);
    studentName=QString::fromStdString(name);
    absent=QString::fromStdString(ab);
}

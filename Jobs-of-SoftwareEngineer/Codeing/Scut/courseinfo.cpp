#include "courseinfo.h"

CourseInfo::CourseInfo(std::__cxx11::string i, std::__cxx11::string name)
{
        id=QString::fromStdString(i);
        courseName=QString::fromStdString(name);
}

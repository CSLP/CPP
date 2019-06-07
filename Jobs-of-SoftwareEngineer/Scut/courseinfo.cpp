#include "courseinfo.h"

CourseInfo::CourseInfo(std::__cxx11::string i, std::__cxx11::string name, std::__cxx11::string tname)
{
        id=QString::fromStdString(i);
        courseName=QString::fromStdString(name);
        teacherName=QString::fromStdString(tname);
}

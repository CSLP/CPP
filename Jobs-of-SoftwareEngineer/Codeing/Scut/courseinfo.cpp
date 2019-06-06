#include "courseinfo.h"

CourseInfo::CourseInfo(int i, std::__cxx11::string name)
{
        id=i;
        courseName=QString::fromStdString(name);
}

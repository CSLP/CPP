#ifndef INTERFACE_H
#define INTERFACE_H
#include<string>
#include<list>
#include<map>
#include<QDate>
#include<QDebug>
using std::string;
using std::list;
using std::map;
bool loginMatch(string ,string ,string );
void signUpInfo(string,string,string,string,string,string,QDate);
list<string>  getStudentInfoByStudentId(string);
list<string>  getStudentAttendanceByStudentId(string);
map<string,string> getCourseInfoByStudentId(string);
string getTeacherInfoByCourseName(string);
string getCourseInfoByCourseName(string);
list<string> getHomeworkInfoByCourseName(string);
bool sendToSubmitFilePaths(list<string>);
#endif // INTERFACE_H

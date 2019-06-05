#ifndef INTERFACE_H
#define INTERFACE_H
#include<string>
#include<list>
#include<map>
#include<QDate>
#include<QDebug>
#include<vector>
#include"message.h"
using std::string;
using std::list;
using std::map;
using std::vector;
bool loginMatch(string ,string ,string );
void signUpInfo(string,string,string,string,string,string,QDate);
list<string>  getStudentInfoByStudentId(string);
list<string>  getStudentAttendanceByStudentId(string);
map<string,string> getCourseInfoByStudentId(string);
string getTeacherInfoByCourseName(string);
string getCourseInfoByCourseName(string);
vector<Message> getTopicsByCourseName(string);
list<string> getHomeworkInfoByCourseName(string);
bool sendToSubmitFilePaths(list<string>);
#endif // INTERFACE_H

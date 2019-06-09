#ifndef INTERFACE_H
#define INTERFACE_H
#include<string>
#include<list>
#include<map>
#include<QDate>
#include<QDebug>
#include<vector>
#include"message.h"
#include"courseinfo.h"
#include"studentinfo.h"
using std::string;
using std::list;
using std::map;
using std::vector;
using std::multimap;
bool loginMatch(string ,string ,string );
bool signUpInfo(string,string,string,string,string,string,string);
bool updateInfo(string,string,string,string);
bool sendEmail(string,string,string);
list<string>  getStudentInfoByStudentId(string);
list<string>  getStudentAttendanceByStudentId(string);
vector<CourseInfo> getCourseListByTeacherId(string);
vector<StudentInfo>  getStudentListByCourseId(string);
multimap<string,string> getCourseInfoByStudentId(string);
list<string> getTeacherInfoByCourseName(string);
string getCourseInfoByCourseName(string);
vector<Message> getTopicsByCourseName(string);
vector<Message> getCommentsByTopicId(string);
vector<Message> getReplysByCommentId(string);
list<string> getHomeworkInfoByCourseName(string);
bool sendToSubmitFilePaths(list<string>);
#endif // INTERFACE_H

#ifndef INTERFACE_H
#define INTERFACE_H
#include<string>
#include<list>
#include<map>
#include<QDate>
using std::string;
using std::list;
using std::map;
bool loginMatch(string ,string ,string );
void signUpInfo(string,string,string,string,string,string,QDate);
list<string>  getInfoStringList(string);
map<string,string> getCoursesMap(string);

#endif // INTERFACE_H

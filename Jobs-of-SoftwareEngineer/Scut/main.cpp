#include "login.h"
#include <QApplication>
#include"head.h"
#include"util.h"
#include"user.h"

json __C;
User* user;
int main(int argc, char *argv[])
{

google::InitGoogleLogging(argv[0]);
FLAGS_colorlogtostderr = true;
google::SetStderrLogging(google::GLOG_FATAL);  //大于指定级别的错误都输出到标准输出
google::SetLogDestination(google::GLOG_INFO,"../log/FileClient_");
    __C=read_config();
    user=new  User(__C["MAINSERVER"]["IP"].get<string>(), __C["MAINSERVER"]["PORT"].get<int>());
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}

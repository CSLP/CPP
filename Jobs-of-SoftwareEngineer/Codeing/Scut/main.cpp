#include "login.h"
#include <QApplication>
#include"head.h"
#include"util.h"
#include"user.h"
json __C;
User* user;
int main(int argc, char *argv[])
{
    __C=read_config();
    user=new  User(__C["MAINSERVER"]["IP"].get<string>(), __C["MAINSERVER"]["PORT"].get<int>());
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}

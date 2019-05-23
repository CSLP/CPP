#include "student1.h"
#include <QApplication>
#include"login.h"
#include"signup.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login login;
    SignUp s;
    if(login.exec()==QDialog::Accepted&&login.type=="student")
    {
        w.show();
        return a.exec();
    }
    else if(login.type=="signup")
    {
        s.show();
        return a.exec();
    }
    else return 0;
}

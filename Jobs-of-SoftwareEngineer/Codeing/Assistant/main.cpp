#include "mainwindow.h"
#include <QApplication>
#include"login.h"
#include"signup.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    SignUp s;
    Login login;
    if(login.exec()==QDialog::Accepted&&login.on_signUpPushButton_clicked())
    {
        s.show();
        return a.exec();
    }
    else if(login.exec()==QDialog::Accepted&&login.on_signInPushButton_clicked())
    {
        w.show();
        return a.exec();
    }
    else return 0;
}

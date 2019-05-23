#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<string>
#include"student1.h"
#include""
using std::string;
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    static string type;
    ~Login();

private slots:

    void  on_signInPushButton_clicked();

    void  on_signUpPushButton_clicked();

private:
    Ui::Login *ui;

};
bool loginMatch(string ,string ,string );
#endif // LOGIN_H

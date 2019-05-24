#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
class Student;
class Teacher;
class SignUp;
class studentab;
using std::string;
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_signInPushButton_clicked();

    void on_signUpPushButton_clicked();

private:
    Ui::Login *ui;
    Student * student;
    Teacher * teacher;
    SignUp * signup;
    studentab*stu;

};
bool loginMatch(string ,string ,string );
#endif // LOGIN_H

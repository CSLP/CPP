#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<string>
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

public slots:

    bool on_signInPushButton_clicked();

    bool on_signUpPushButton_clicked();

private:
    Ui::Login *ui;
};
bool loginMatch(string ,string ,string );
#endif // LOGIN_H

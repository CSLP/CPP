#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
class MainWindow;
class signup;
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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
   MainWindow *x;
   signup *y;
};

#endif // LOGIN_H

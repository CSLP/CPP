#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include<string>
class Course;
class UpdateInfo;
using std::string;
namespace Ui {
class Student;
}

class Student : public QMainWindow
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = 0);
    ~Student();

private slots:
    void on_loginAgainPushButton_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_modifyPushButton_clicked();

private:
    Ui::Student *ui;
    UpdateInfo * upd;
public slots:
    void idInfomation(string);
    void courseInformation(string);
    void completUpd(bool);
signals:
    void corInfo(string);

};

#endif // STUDENT_H

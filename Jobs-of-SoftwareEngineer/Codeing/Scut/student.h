#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include<string>
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

private:
    Ui::Student *ui;
public slots:
    void idInfomation(string);
    void courseInformation(string);
};

#endif // STUDENT_H

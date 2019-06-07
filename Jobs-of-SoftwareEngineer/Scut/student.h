#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include<string>
#include<map>
class QListWidgetItem;
class QListWidget;
class Course;
class UpdateInfo;
using std::string;
using std::map;
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

    void on_sendPushButton_clicked();

    void on_savePushButton_clicked();

private:
    Ui::Student *ui;
    UpdateInfo * upd;
    map<QString,QListWidgetItem *> ma;
    map<QString,QListWidgetItem *> mb;
    map<QString,QListWidgetItem *> mc;
    QListWidget *la;
    QListWidget *lb;
    QListWidget *lc;
public slots:
    void idInfomation(string,string);
    void courseInformation(string,string);
    void completUpd(bool);
    void delItem(QString);
signals:
    void corInfo(string);

};

#endif // STUDENT_H

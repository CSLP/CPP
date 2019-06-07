#ifndef TEACHER_H
#define TEACHER_H

#include <QMainWindow>
#include<string>
#include<vector>
class CourseInfo;
class UpdateInfo;
using std::vector;
using std::string;
namespace Ui {
class Teacher;
}

class Teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit Teacher(QWidget *parent = 0);
    ~Teacher();

private:
    Ui::Teacher *ui;
    vector<CourseInfo> cors;
    UpdateInfo *upd;
    void clearCache();
public slots:
    void corListInfo(string,string);
    void display(int);
    void completUpd(bool);
private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
};

#endif // TEACHER_H

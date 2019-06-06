#ifndef COURSE_H
#define COURSE_H

#include <QDialog>
#include<string>
#include<list>
#include<vector>
#include"interface.h"
class Topic;
class QListWidgetItem;
class MyClock;
using std::list;
using std::string;
using std::vector;
namespace Ui {
class Course;
}

class Course : public QDialog
{
    Q_OBJECT

public:
    explicit Course(QWidget *parent = 0);
    ~Course();

private slots:
    void on_backPushButton_clicked();

    void on_submitPushButton_clicked();
public slots:
    void courseInfo(string);
    void display(int);
private:
    Ui::Course *ui;
    vector<Topic*> tops;
    vector<QListWidgetItem*> items;
    int topicNum;
    MyClock *clock;
};

#endif // COURSE_H

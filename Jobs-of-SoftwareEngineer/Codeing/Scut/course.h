#ifndef COURSE_H
#define COURSE_H

#include <QDialog>
#include<string>
#include<list>
#include<vector>
#include"interface.h"
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
private:
    Ui::Course *ui;
};

#endif // COURSE_H

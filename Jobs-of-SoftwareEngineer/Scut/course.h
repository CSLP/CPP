#ifndef COURSE_H
#define COURSE_H

#include <QDialog>
#include<string>
#include<list>
#include<vector>
#include<QModelIndex>
#include"interface.h"
#include"head.h"
#include"user.h"
class  QListWidget;
class  QPlainTextEdit;
class QTreeWidget;
class Topic;
class QListWidgetItem;
class QTreeWidgetItem;
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
    void download(QTreeWidgetItem *, int);
    void changeTag(int);
    void subTop();
signals:
    void perfect(int);
private:
    Ui::Course *ui;
    vector<Topic*> tops;
    vector<QListWidgetItem*> items;
    int topicNum;
    int tag;
    QString courseName;
    QString courseId;
    QPlainTextEdit* brow;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QStringList files;
    void build(QTreeWidgetItem*,Node*);
};

#endif // COURSE_H

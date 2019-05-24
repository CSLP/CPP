#ifndef STUDENTAB_H
#define STUDENTAB_H
#include<QDialog>
class QTabWidget;
class studentab : public QDialog
{
    Q_OBJECT
public:
    explicit studentab(QStringList&,QMap<QString,QString>&,QMap<QString,QString>&,QWidget*parent=0);
private:
    QTabWidget*tabWidget;
};
class  HomeTab:public QDialog
{
    Q_OBJECT
public:
    explicit HomeTab(QStringList &info,QMap<QString,QString> &board,QWidget *parent=0);
};
class CourseTab:public QDialog
{
    Q_OBJECT
public:
    explicit CourseTab(QMap<QString,QString> &courses,QWidget*parent=0);
};
class Forum:public QDialog
{
    Q_OBJECT
public:
    explicit Forum(QWidget*parent=0);
};

#endif // STUDENTAB_H

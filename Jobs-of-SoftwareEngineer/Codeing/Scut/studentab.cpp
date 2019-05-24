#include "studentab.h"
#include<QtWidgets>

studentab::studentab(QStringList &info, QMap<QString, QString>&board, QMap<QString, QString>&courses, QWidget *parent):QDialog(parent)
{
    QStringList in=info;
    QMap<QString,QString>  bo=board;
    QMap<QString,QString>  co=courses;
    tabWidget=new QTabWidget;
    tabWidget->addTab(new HomeTab(in,bo),tr("Home"));
    tabWidget->addTab(new CourseTab(co),tr("Courses"));
    tabWidget->addTab(new Forum(),tr("Forum"));
    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(tabWidget);
    setLayout(layout);
    setWindowTitle(tr("Student"));
}

HomeTab::HomeTab(QStringList &info, QMap<QString, QString> &board, QWidget *parent):QDialog(parent)
{
    QStringList in=info;
    QMap<QString,QString> bo=board;
    QListWidget *infosec=new QListWidget;
    QLabel *infolabel=new QLabel;
    QListWidget *boardsec=new QListWidget;
    QLabel *boardlabel=new QLabel;
    QCalendarWidget *cal=new QCalendarWidget;
    QGroupBox *information=new QGroupBox();
    QGroupBox *Board=new QGroupBox();
    QVBoxLayout *layouta=new QVBoxLayout;
    layouta->addWidget(infolabel);
    layouta->addWidget(infosec);
    information->setLayout(layouta);
    QVBoxLayout* layoutb=new QVBoxLayout;
    layoutb->addWidget(boardsec);
    layoutb->addWidget(boardlabel);
    Board->setLayout(layoutb);
    QHBoxLayout*layout=new QHBoxLayout;
    layout->addWidget(information);
    layout->addWidget(Board);
    layout->addWidget(cal);
    setLayout(layout);
}

CourseTab::CourseTab(QMap<QString, QString> &courses, QWidget *parent):QDialog(parent)
{

}

Forum::Forum(QWidget *parent)
{

}

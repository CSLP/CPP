#include "course.h"
#include "ui_course.h"
#include"sendfile.h"
#include<QDir>
#include<QFileSystemModel>
#include<QTreeView>
#include<QVBoxLayout>
#include<QTextBrowser>
#include<QPushButton>
#include<QGroupBox>
Course::Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course)
{
    ui->setupUi(this);
    this->move(390,155);
    ui->teaTextBrowser->append("nimasil");
    ui->tabWidget->setCurrentIndex(0);
    QFileSystemModel model;
    QTreeView view;
    model.setRootPath(QDir::currentPath());
    view.setModel(&model);
    view.setRootIndex(model.index(QDir::currentPath()));
    view.show();
    /*
    QVBoxLayout * layout=new QVBoxLayout;
    QVBoxLayout * layout1=new QVBoxLayout;
    QGroupBox * group1=new QGroupBox;
    group1->setTitle("JYP");
    QTextBrowser *answer=new QTextBrowser;
    QTextBrowser *comment=new QTextBrowser;
    answer->setText("jfffjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj");
    comment->setText("wokannizhedoushishuodeyaoyan,woyanzhongbutongyi,renzaimeiguo,gangxiafeiji");
    QPushButton *btn1=new QPushButton("ShowComments");
    QPushButton *btn2=new QPushButton("FoldComments");
    QGroupBox* g=new QGroupBox;
    QHBoxLayout *ll=new QHBoxLayout;
    ll->addWidget(btn1);
    ll->addWidget(btn2);
    g->setLayout(ll);
    layout1->addWidget(answer);
    layout1->addWidget(g);
    layout1->addWidget(comment);
    group1->setLayout(layout1);
    layout->addWidget(group1);
    ui->scrollArea->widget()->setLayout(layout);
    */
}

Course::~Course()
{
    delete ui;
}

void Course::on_backPushButton_clicked()
{
    close();
}

void Course::on_submitPushButton_clicked()
{
   SendFile *s=new SendFile(this);
   s->show();
}

void Course::courseInfo(std::__cxx11::string corName)
{
    string teacherInfo=getTeacherInfoByCourseName(corName);
    string courseInfo=getCourseInfoByCourseName(corName);
    list<string> homeworkInfo=getHomeworkInfoByCourseName(corName);
    ui->teaTextBrowser->clear();
    ui->teaTextBrowser->setText(QString::fromStdString(teacherInfo));
    ui->corTextBrowser->clear();
    ui->corTextBrowser->setText(QString::fromStdString(courseInfo));
    ui->homTextBrowser->clear();
    foreach(auto &a,homeworkInfo)
    {
        ui->homTextBrowser->append(QString::fromStdString(a));
    }
    //list<string> topics=getTopicsByCoursename(corName);
    //list<string> comments=getCommentsByTopic;
}

#include "course.h"
#include "ui_course.h"
#include"sendfile.h"
#include<QDir>
#include<QFileSystemModel>
#include<QTreeView>
Course::Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course)
{
    ui->setupUi(this);
    this->move(390,155);
    ui->teaTextBrowser->append("nimasil");
    ui->tabWidget->setCurrentIndex(0);
    QFileSystemModel model;
    QTreeView *tree=new QTreeView(this);
    model.setRootPath(QDir::currentPath());
    tree->setModel(&model);
    tree->setRootIndex(model.index(QDir::currentPath()));
    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(tree);
    ui->resourceTab->setLayout(layout);
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
}

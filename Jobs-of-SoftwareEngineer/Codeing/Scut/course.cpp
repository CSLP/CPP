#include "course.h"
#include "ui_course.h"
#include"sendfile.h"
#include"topic.h"
#include<QDir>
#include<QFileSystemModel>
#include<QTreeView>
#include<QVBoxLayout>
#include<QTextBrowser>
#include<QPushButton>
#include<QGroupBox>
#include<QScrollArea>
#include<QListWidget>
#include<QDebug>
#include"message.h"
#include"clock.h"
#include"myclock.h"
Course::Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course)
{
    ui->setupUi(this);
    this->move(390,155);
    ui->teaTextBrowser->append("nimasil");
    ui->tabWidget->setCurrentIndex(0);
    topicNum=0;
    MyClock * clock=new MyClock;
    QVBoxLayout *la=new QVBoxLayout;
    QVBoxLayout *lb=new QVBoxLayout;
    QPushButton *btn=new QPushButton;
    QTextBrowser *b=new QTextBrowser;
    //la->addWidget(btn);
    //la->addWidget(b);
    la->addWidget(clock);
    ui->resourceTab->setLayout(la);
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
    vector<Message> topics=getTopicsByCourseName(corName);
    QVBoxLayout * layout=new QVBoxLayout;
    QListWidget *listWidget=new QListWidget;
    layout->addWidget(listWidget);
    ui->discussTab->setLayout(layout);
    topicNum=topics.size();
    for(int i=0;i<topicNum;++i)
    {
        Topic * t=new Topic(topics.at(i));
        tops.push_back(t);
        QListWidgetItem * item=new QListWidgetItem(listWidget);
        items.push_back(item);
        listWidget->addItem(item);
        listWidget->setItemWidget(item,t);
        item->setSizeHint(QSize(0,50));
    }
    connect(listWidget,&QListWidget::currentRowChanged,this,&Course::display);
}

void Course::display(int a)
{
    for(int i=0;i<topicNum;++i)
    {
        if(i!=a)
        {
            items[i]->setSizeHint(QSize(0,50));
            tops[i]->setVis(false);
        }
        else
        {
            items[i]->setSizeHint(QSize(0,600));
            tops[i]->setVis(true);
        }
    }
}

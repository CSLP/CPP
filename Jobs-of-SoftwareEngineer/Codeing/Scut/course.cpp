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
#include<QPlainTextEdit>
#include<QDebug>
#include"message.h"
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
    connect(ui->tabWidget,&QTabWidget::currentChanged,this,&Course::changeTag);
    connect(this,&Course::perfect,this,&Course::display);
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
    QHBoxLayout * layout=new QHBoxLayout;
    QVBoxLayout * la=new QVBoxLayout;
    MyClock * clock=new MyClock;
    QPushButton * answer=new QPushButton("提问");
    QPushButton * submit=new QPushButton("确定");
    submit->hide();
    QHBoxLayout * lb=new QHBoxLayout;
    lb->addWidget(answer);
    lb->addWidget(submit);
    QPlainTextEdit* brow=new QPlainTextEdit;
    la->addWidget(clock);
    la->addLayout(lb);
    la->addWidget(brow);
    brow->hide();
    connect(answer,&QPushButton::clicked,brow,&QPlainTextEdit::show);
    connect(answer,&QPushButton::clicked,submit,&QPushButton::show);
    connect(submit,&QPushButton::clicked,brow,&QPlainTextEdit::hide);
    connect(submit,&QPushButton::clicked,submit,&QPushButton::hide);
    QListWidget *listWidget=new QListWidget;
    listWidget->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(255,255,255);}");
    layout->addWidget(listWidget);
    layout->addLayout(la);
    layout->setStretch(0,2);
    layout->setStretch(1,1);
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

void Course::changeTag(int a)
{
   a+=10;
   emit perfect(a);
}

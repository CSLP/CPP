#include "topic.h"
#include "ui_topic.h"
#include<QMessageBox>
#include<QString>
#include<QDebug>
#include<vector>
#include<QGroupBox>
#include<QTextBrowser>
#include<QVBoxLayout>
#include"message.h"
#include"interface.h"
#include<QString>
#include<QPushButton>
#include<QLineEdit>
#include<QPlainTextEdit>
#include"comment.h"
#include<QLabel>
#include"user.h"
#include"head.h"
using std::vector;
Topic::Topic(Message msg, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Topic)
{
    ui->setupUi(this);
    id=msg.id;
    vector<Message>	comments=getCommentsByTopicId(msg.id.toStdString());
    QVBoxLayout *layout=new QVBoxLayout;
    QString comTitle;
    QVBoxLayout*la=new QVBoxLayout;
    QLabel *answer=new QLabel("回答问题");
    answer->setFont(QFont("FZKai-Z03",16));
    QPushButton *ok=new QPushButton("提交");
    QHBoxLayout *lb=new QHBoxLayout;
    la->addWidget(answer);
    la->addWidget(ok);
    lb->addLayout(la);
    co=new QPlainTextEdit;
    lb->addWidget(co);
    connect(ok,&QPushButton::clicked,this,&Topic::subCo);
    layout->addLayout(lb);
    for(unsigned int i=0;i<comments.size();++i)
    {
        Comment *b=new Comment(comments[i]);
        comTitle=comments[i].author+"                     "+comments[i].time;
        b->setTitle(comTitle);
        layout->addWidget(b);
    }
    ui->scrollArea->widget()->setLayout(layout);
    ui->scrollArea->hide();
    QString topicTitle=msg.author+":"+msg.content+"             "+msg.time;
    //qDebug()<<QString::fromStdString(msg.content);
    ui->label->setText(topicTitle);
}

Topic::~Topic()
{
    delete ui;
}

void Topic::setVis(bool v)
{
    ui->scrollArea->setVisible(v);
}

void Topic::subCo()
{
    auto res=user->c_insert_comment(id.toStdString(),co->toPlainText().toStdString());
    if(res)
        QMessageBox::information(this,tr("Hint"),tr("提问成功!"),QMessageBox::Ok);
}


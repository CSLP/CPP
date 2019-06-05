#include "topic.h"
#include "ui_topic.h"
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
using std::vector;
Topic::Topic(Message msg, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Topic)
{
    ui->setupUi(this);
    vector<Message>	comments=getCommentsByTopicId(msg.id);
    qDebug()<<comments.size();
    QVBoxLayout *layout=new QVBoxLayout;
    QString comTitle;
    for(int i=0;i<comments.size();++i)
    {
        QGroupBox *b=new QGroupBox;
        QVBoxLayout*lay=new QVBoxLayout;
        QTextBrowser * comBrowser=new QTextBrowser;
        comBrowser->setText(comments[i].content);
        QHBoxLayout * layh=new QHBoxLayout;
        QPushButton * ShowReplyBtn=new QPushButton;
        QPushButton * FoldReplyBtn=new QPushButton;
        layh->addWidget(ShowReplyBtn);
        layh->addWidget(FoldReplyBtn);
        QTextBrowser * repBrowser=new QTextBrowser;
        lay->addWidget(comBrowser);
        lay->addLayout(layh);
        lay->addWidget(repBrowser);
        b->setLayout(lay);
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

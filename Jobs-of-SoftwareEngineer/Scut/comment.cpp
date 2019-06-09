#include "comment.h"
#include "ui_comment.h"
#include"message.h"
#include<vector>
#include"interface.h"
#include<QString>
using std::vector;
Comment::Comment(Message c,QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::Comment)
{
    ui->setupUi(this);
    this->setTitle(c.author+"                                           "+c.time);
    ui->comTextBrowser->setText(c.content);
    vector<Message>  replys=getReplysByCommentId(c.id.toStdString());
    QString reply;
    for(unsigned int i=0;i<replys.size();++i)
    {
        reply=replys[i].author+"回复"+replys[i].sendTo+":"+replys[i].content+"               		                   "+replys[i].time;
        ui->repTextBrowser->append(reply);
    }
    this->setMinimumHeight(600);
    ui->widget->hide();
}

Comment::~Comment()
{
    delete ui;
}

void Comment::on_showPushButton_clicked()
{
    ui->widget->setVisible(true);
}

void Comment::on_foldPushButton_clicked()
{
    ui->widget->setVisible(false);
}

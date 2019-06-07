#include "email.h"
#include "ui_email.h"
#include"QMessageBox"
#include"user.h"
#include"head.h"
email::email(string ty,string i,string fro,string them,string tim,string conten,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::email)
{
    ui->setupUi(this);
    id=QString::fromStdString(i);
    from=QString::fromStdString(fro);
    theme=QString::fromStdString(them);
    time=QString::fromStdString(tim);
    content=QString::fromStdString(conten);
    type=QString::fromStdString(ty);
    ui->fromLabel->setText(from);
    ui->themeLabel->setText(theme);
    ui->timeLabel->setText(time);
    switch(type.toInt())
    {
    case 0:ui->picLabel->setPixmap(QPixmap(":/image/3.png"));break;
    case 1:ui->picLabel->setPixmap(QPixmap(":/image/2.png"));break;
    case 2:ui->picLabel->setPixmap(QPixmap(":/image/4.png"));break;
    }
    ui->textBrowser->append(content);
    connect(ui->checkBox,&QCheckBox::pressed,this,&email::des);
}

email::~email()
{
    delete ui;
}

void email::des()
{
    int res=QMessageBox::question(this,tr("Question"),tr("你要删除该邮件吗?"),QMessageBox::Yes,QMessageBox::No);
    if(res==QMessageBox::Yes)
    {
       emit  re(id);
       auto ok=user->c_del_email(id.toStdString());
       if(ok)
       {
           QMessageBox::information(this,tr("Hint"),tr("删除成功"));
       }
    }
}

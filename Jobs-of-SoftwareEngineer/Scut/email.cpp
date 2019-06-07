#include "email.h"
#include "ui_email.h"

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
}

email::~email()
{
    delete ui;
}

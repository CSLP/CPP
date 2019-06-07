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
}

email::~email()
{
    delete ui;
}

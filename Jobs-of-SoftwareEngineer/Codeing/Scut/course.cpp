#include "course.h"
#include "ui_course.h"
#include"sendfile.h"
Course::Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course)
{
    ui->setupUi(this);
    ui->textBrowser->append("nimasil");
}

Course::~Course()
{
    delete ui;
}

void Course::on_backPushButton_clicked()
{
   this->parentWidget()->show();
    close();
}

void Course::on_submitPushButton_clicked()
{
   SendFile *s=new SendFile(this);
   s->show();
}

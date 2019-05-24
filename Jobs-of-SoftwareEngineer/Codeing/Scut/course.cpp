#include "course.h"
#include "ui_course.h"

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

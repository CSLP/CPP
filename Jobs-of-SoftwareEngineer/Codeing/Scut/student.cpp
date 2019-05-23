#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
}

Student::~Student()
{
    delete ui;
    ui->tabWidget->addTab(this,,tr("sb"));
}

void Student::on_loginAgainPushButton_clicked()
{
    close();
    this->parentWidget()->show();
}

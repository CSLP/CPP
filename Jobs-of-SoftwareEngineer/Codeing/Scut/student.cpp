#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    QLabel *ll=new QLabel;
    ll->setPixmap(QPixmap(":/image/1.png"));
    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(ll);
    ui->courseTab->setLayout(layout);
    //ui->label_4->setPixmap(QPixmap(":/image/1.png"));
    //ui->label_3->setPixmap(QPixmap(":/image/1.png"));
    //ui->forumTab->add
//    ui->homeTab->
}

Student::~Student()
{
    delete ui;
}

void Student::on_loginAgainPushButton_clicked()
{
    close();
    this->parentWidget()->show();
}

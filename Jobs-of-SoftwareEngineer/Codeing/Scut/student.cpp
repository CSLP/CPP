#include "student.h"
#include "ui_student.h"
#include"interface.h"
#include<QDebug>
#include"course.h"
Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    this->move(400,160);
    QPixmap pixmap(":/image/1.png");
    ui->label1->setPixmap(pixmap);
    ui->label2->resize(ui->label1->size());
    ui->label2->setPixmap(pixmap);
    ui->label3->setPixmap(pixmap);
    ui->label3->resize(ui->label1->size());
    ui->label4->setPixmap(pixmap);
    ui->label4->resize(ui->label1->size());
    ui->label5->setPixmap(pixmap);
    ui->label5->resize(ui->label1->size());
    ui->label6->setPixmap(pixmap);
    ui->label6->resize(ui->label1->size());
    ui->tabWidget->setCurrentIndex(0);
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

void Student::idInfomation(std::__cxx11::string idinfo)
{
   list<string> info =getInfoStringList(idinfo);
   QString x;
   QStringList in;
   for(string &a:info)
   {
       in<<QString::fromStdString(a);
   }
   ui->listWidget1->insertItems(0,in);

}

void Student::courseInformation(std::__cxx11::string  id)
{
    auto co=getCoursesMap(id);
    if(co.size()!=6)
        qDebug()<<"wrong";
    else
    {
        auto co_it=co.cbegin();
        ui->label11->setText(QString::fromStdString(co_it->second));
        ui->pushButton1->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label22->setText(QString::fromStdString(co_it->second));
        ui->pushButton2->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label33->setText(QString::fromStdString(co_it->second));
        ui->pushButton3->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label44->setText(QString::fromStdString(co_it->second));
        ui->pushButton4->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label55->setText(QString::fromStdString(co_it->second));
        ui->pushButton5->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label66->setText(QString::fromStdString(co_it->second));
        ui->pushButton6->setText(QString::fromStdString(co_it->first));
    }
}

void Student::on_pushButton1_clicked()
{
    Course *x=new Course(this);
    x->show();
}

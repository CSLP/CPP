#include "student.h"
#include "ui_student.h"
#include"interface.h"
#include"analogclock.h"
#include<QDebug>
Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
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
    QWidget *widget=new QWidget(this);
    AnalogClock *clock=new AnalogClock(widget);
    QVBoxLayout *layout1=new QVBoxLayout;
    QVBoxLayout *layout2=new QVBoxLayout;
    QVBoxLayout *layout3=new QVBoxLayout;
    QHBoxLayout *layout4=new QHBoxLayout;
    QVBoxLayout *layout= new QVBoxLayout;
   /* layout1->addWidget(ui->labela);
    layout1->addWidget(ui->listWidget1);
    layout2->addWidget(ui->labelb);
    layout2->addWidget(ui->listWidget2);
    layout3->addWidget(clock);
    layout3->addWidget(ui->calendarWidget);
    layout4->addLayout(layout1);
    layout4->addLayout(layout2);
    layout4->addLayout(layout3);
    layout->addLayout(layout4);
    layout->addWidget(ui->loginAgainPushButton);
    ui->homeTab->setLayout(layout3);
    */
    layout->addWidget(widget);
    layout->addWidget(ui->listWidget1);
    layout->setStretch(1,1);
    ui->homeTab->setLayout(layout);
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

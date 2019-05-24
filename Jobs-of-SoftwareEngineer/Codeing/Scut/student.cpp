#include "student.h"
#include "ui_student.h"
#include"interface.h"
#include<QDebug>
#include"clock.h"
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
    QVBoxLayout *layout2=new QVBoxLayout;
    Clock *clock=new Clock();
    qDebug()<<ui->calendarWidget->parentWidget();
    QLabel *label=new QLabel;
    label->setText(tr("nimasile"));
    QCalendarWidget *cal=new QCalendarWidget;
    QListWidget *li=new QListWidget;
    QVBoxLayout *layout1=new QVBoxLayout;
    layout1->addWidget(li);
    QHBoxLayout *layout=new QHBoxLayout;
    layout2->addWidget(clock);
    layout2->addWidget(label);
    layout->addLayout(layout1);
    layout->addLayout(layout2);
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

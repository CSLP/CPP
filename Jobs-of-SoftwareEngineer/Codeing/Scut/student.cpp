#include "student.h"
#include "ui_student.h"
#include"interface.h"
#include<QDebug>
#include"course.h"
#include<QColor>
#include<QVBoxLayout>
#include<QTextBrowser>
#include<QGroupBox>
#include<QWidget>
#include"updateinfo.h"
Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    this->move(400,160);
    upd=new UpdateInfo(this);
    connect(upd,&UpdateInfo::updateStatus,this,&Student::completUpd);
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
    ui->listWidget->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(248,168,0);}");
}

Student::~Student()
{
    delete ui;
}

void Student::on_loginAgainPushButton_clicked()
{
    this->parentWidget()->show();
    ui->listWidget1->clear();
    close();
}

void Student::idInfomation(std::__cxx11::string type, std::__cxx11::string idinfo)
{
   list<string> info =getStudentInfoByStudentId(idinfo);
   list<string> inf=getStudentAttendanceByStudentId(idinfo);
   QStringList in;
   QStringList inn;
   for(string &a:info)
   {
       in<<QString::fromStdString(a);
   }
   for(string &b:inf)
   {
       inn<<QString::fromStdString(b);
   }
   QListWidgetItem * listWidgetItem1=new QListWidgetItem;
   QListWidgetItem * listWidgetItem2=new QListWidgetItem;
   listWidgetItem1->setText("          基本信息");
   listWidgetItem1->setTextColor("blue");
   listWidgetItem2->setText("       缺勤记录  ");
   listWidgetItem2->setTextColor("red");
   ui->listWidget1->insertItem(0,listWidgetItem1);
   ui->listWidget1->insertItems(1,in);
   ui->listWidget1->insertItem(5,listWidgetItem2);
   ui->listWidget1->insertItems(6,inn);
}

void Student::courseInformation(std::__cxx11::string  type, std::__cxx11::string id)
{
    auto co=getCourseInfoByStudentId(id);
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

void Student::completUpd(bool x)
{
   if(x)
   {
        ui->listWidget1->clear();
        close();
   }
}


void Student::on_pushButton1_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton1->text().toStdString());
}

void Student::on_pushButton2_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton2->text().toStdString());
}

void Student::on_pushButton3_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton3->text().toStdString());
}

void Student::on_pushButton4_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton4->text().toStdString());
}

void Student::on_pushButton5_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton5->text().toStdString());
}

void Student::on_pushButton6_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton6->text().toStdString());
}

void Student::on_modifyPushButton_clicked()
{
    upd->show();
}

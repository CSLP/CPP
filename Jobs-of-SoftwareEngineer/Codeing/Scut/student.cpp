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
Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    this->move(400,160);
    //this->resize(1000,1000);
    cor=new Course(this);
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
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


    ui->toolBox->setItemText(2,"第三题怎么做");
    QWidget *page3=new QWidget;
    QScrollArea *scroll=new QScrollArea(page3);
    QWidget *x=new QWidget;
    scroll->setWidget(x);
    QVBoxLayout *vlayout=new QVBoxLayout(page3);
    vlayout->addWidget(scroll);
    QVBoxLayout *l=new QVBoxLayout;
    QPushButton	*y=new QPushButton("nimasil");
    l->addWidget(y);
    scroll->setLayout(l);
    ui->toolBox->addItem(page3,"第四题怎么做");

    QVBoxLayout * layout=new QVBoxLayout;
    QVBoxLayout * layout1=new QVBoxLayout;
    QGroupBox * group1=new QGroupBox;
    group1->setTitle("JYP");
    QTextBrowser *answer=new QTextBrowser;
    QTextBrowser *comment=new QTextBrowser;
    answer->setText("jfffjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj");
    comment->setText("wokannizhedoushishuodeyaoyan,woyanzhongbutongyi,renzaimeiguo,gangxiafeiji");
    QPushButton *btn1=new QPushButton("ShowComments");
    QPushButton *btn2=new QPushButton("FoldComments");
    layout1->addWidget(answer);
    layout1->addWidget(btn1);
    layout1->addWidget(btn2);
    layout1->addWidget(comment);
    group1->setLayout(layout1);
    layout->addWidget(group1);


    QVBoxLayout * layout2=new QVBoxLayout;
    QGroupBox * group2=new QGroupBox;
    group2->setTitle("LP");
    QTextBrowser *answer2=new QTextBrowser;
    QTextBrowser *comment2=new QTextBrowser;
    answer2->setText("jfffjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj\nfjj\njfkd\njfkjd\nfjd\nfjdk");
    comment2->setText("wokannizhedoushishuodeyaoyan,woyanzhongbutongyi,renzaimeiguo,gangxiafeiji");
    QPushButton *btn12=new QPushButton("ShowComments");
    QPushButton *btn22=new QPushButton("FoldComments");
    layout2->addWidget(answer2);
    layout2->addWidget(btn12);
    layout2->addWidget(btn22);
    layout2->addWidget(comment2);
    group2->setLayout(layout2);
    layout->addWidget(group2);
    ui->scrollArea->widget()->setLayout(layout);
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

void Student::idInfomation(std::__cxx11::string idinfo)
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
   listWidgetItem1->setText("          	Basic Info");
   listWidgetItem1->setTextColor("blue");
   listWidgetItem2->setText("        Attendance Record  ");
   listWidgetItem2->setTextColor("red");
   ui->listWidget1->insertItem(0,listWidgetItem1);
   ui->listWidget1->insertItems(1,in);
   ui->listWidget1->insertItem(5,listWidgetItem2);
   ui->listWidget1->insertItems(6,inn);
}

void Student::courseInformation(std::__cxx11::string  id)
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

void Student::on_pushButton1_clicked()
{
    cor->show();
    emit corInfo(ui->pushButton1->text().toStdString());
}

void Student::on_pushButton2_clicked()
{
    cor->show();
    emit corInfo(ui->pushButton2->text().toStdString());
}

void Student::on_pushButton3_clicked()
{
    cor->show();
    emit corInfo(ui->pushButton3->text().toStdString());
}

void Student::on_pushButton4_clicked()
{
    cor->show();
    emit corInfo(ui->pushButton4->text().toStdString());
}

void Student::on_pushButton5_clicked()
{
    cor->show();
    emit corInfo(ui->pushButton5->text().toStdString());
}

void Student::on_pushButton6_clicked()
{
    cor->show();
    emit corInfo(ui->pushButton6->text().toStdString());
}

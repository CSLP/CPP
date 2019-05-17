#include "widget.h"
#include "ui_widget.h"
#include"myclass.h"
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyClass*my=new MyClass(this);
    connect(my,&MyClass::userNameChanged,this,&Widget::userChanged);
    my->setUserName("Lipeng");
    qDebug()<<"userName1:"<<my->getUserName();
    my->setProperty("userName","linux");
    qDebug()<<"userName2:"<<my->property("userName").toString();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::userChanged(QString)
{
    qDebug()<<"user changed:"<<userName;
}

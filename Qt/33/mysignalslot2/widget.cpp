#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    QPushButton *button=new QPushButton(this);
    button->setObjectName("myButton");
    ui->setupUi(this);
}
void Widget::on_myButton_clicked()
{
    close();
}

Widget::~Widget()
{
    delete ui;
}

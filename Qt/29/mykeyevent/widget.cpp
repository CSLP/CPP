#include "widget.h"
#include "ui_widget.h"
#include<QKeyEvent>
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFocus();
    keyUp=false;
    keyLeft=false;
    move=false;
}
void Widget::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Up)
    {
        if(event->isAutoRepeat()) return;
        keyUp=true;
    }
    else if(event->key()==Qt::Key_Left)
    {
        if(event->isAutoRepeat())return ;
        keyLeft=true;
    }
}
void Widget::keyReleaseEvent(QKeyEvent*event)
{
    if(event->key()==Qt::Key_Up)
    {
        if(event->isAutoRepeat()) return;
        keyUp=false;
        if(move)
        {
            move=false;
            return;
        }
        if(keyLeft)
        {
            ui->pushButton->move(30,80);
            move=true;
        }else
        {
            ui->pushButton->move(180,80);
        }
    }
    else if(event->key()==Qt::Key_Left)
    {
        if(event->isAutoRepeat())return ;
        keyLeft=false;
        if(move)
        {
            move=false;
            return;
        }
        if(keyUp)
        {
            ui->pushButton->move(30,80);
            move=true;
        }else
        {
            ui->pushButton->move(30,180);
        }
    }
    else if(event->key()==Qt::Key_Down)
    {
        ui->pushButton->move(180,180);
    }

}

Widget::~Widget()
{
    delete ui;
}

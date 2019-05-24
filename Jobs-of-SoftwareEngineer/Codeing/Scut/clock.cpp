#include "clock.h"
#include "ui_clock.h"
#include<QTimer>
#include<QTime>
Clock::Clock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock)
{
    ui->setupUi(this);
    QTimer*timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Clock::timerUpdate);
    timer->start(1000);
}

Clock::~Clock()
{
    delete ui;
}

void Clock::timerUpdate()
{
    QTime time=QTime::currentTime();
    QString text=time.toString("hh:mm");
    if((time.second()%2)==0) text[2]=' ';
    ui->lcdNumber->display(text);
}

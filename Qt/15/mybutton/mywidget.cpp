#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDebug>
#include<QMenu>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->pushBtn1->setText(tr("&nihao"));
    ui->pushBtn2->setText(tr("Help(&H"));
    //ui->pushBtn2->setIcon(QIcon("../mybutton/images/1.png"));
    ui->pushBtn3->setText(tr("z&oom"));
    QMenu*menu=new QMenu(this);
    menu->addAction(QIcon("../mybutton/images/2.png"),tr("fangda"));
   // ui->pushBtn3->setMenu(menu);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushBtn1_toggled(bool checked)
{
   qDebug()<<tr("ButtonIsPushdown:")<<checked;
}

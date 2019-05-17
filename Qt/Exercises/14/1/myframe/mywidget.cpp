#include "mywidget.h"
#include "ui_mywidget.h"
#include<QPixmap>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QFont font;
    font.setFamily("ubuntu");
    font.setPointSize(20);
    font.setBold(true);
    font.setItalic(true);
    ui->label->setFont(font);
    QString string=tr("Title too long ,Need to omit");
    QString str=ui->label->fontMetrics().elidedText(string,Qt::ElideRight,180);
    ui->label->setText(str);
 //   ui->label->setPixmap(QPixmap("1.png"));
}

MyWidget::~MyWidget()
{
    delete ui;
}

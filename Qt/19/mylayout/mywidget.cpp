#include "mywidget.h"
#include "ui_mywidget.h"
#include<QHBoxLayout>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->textEdit->hide();
    //QHBoxLayout*layout=new QHBoxLayout;
    //layout->addWidget(ui->fontComboBox);
//    layout->addWidget(ui->textEdit);
 //   layout->setSpacing(50);
  //  layout->setContentsMargins(0,0,50,100);
   // setLayout(layout);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_toggled(bool checked)
{
   ui->textEdit->setVisible(checked);
   if(checked)ui->pushButton->setText(tr("HideExtendWidget"));
   else ui->pushButton->setText(tr("DisplayExtendWidget"));
}

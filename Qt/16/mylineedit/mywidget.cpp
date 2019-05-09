#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDebug>
#include<QCompleter>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QValidator*validator=new QIntValidator(100,900,this);
    ui->lineEdit_3->setValidator(validator);
    QStringList wordList;
    wordList<<"Qt"<<"Qt Creator"<<tr("Hello");
    QCompleter*completer=new QCompleter(wordList,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_4->setCompleter(completer);

}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_3->setFocus();
    qDebug()<<ui->lineEdit_2->text();
    qDebug()<<ui->lineEdit_2->displayText();
}

void MyWidget::on_lineEdit_3_returnPressed()
{
    ui->lineEdit_4->setFocus();
    qDebug()<<ui->lineEdit_3->text();
    qDebug()<<ui->lineEdit_3->displayText();

}

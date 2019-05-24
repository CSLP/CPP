#include "sendfile.h"
#include "ui_sendfile.h"
#include<QFileDialog>
#include<QDebug>
SendFile::SendFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendFile)
{
    ui->setupUi(this);
}

SendFile::~SendFile()
{
    delete ui;
}

void SendFile::on_openPushButton_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this,tr("File Dialog"),"/home/wuyulp");
    qDebug()<<fileName;
}

#include "sendfile.h"
#include "ui_sendfile.h"
#include<QFileDialog>
#include<QDebug>
SendFile::SendFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendFile)
{
    ui->setupUi(this);
    ui->textBrowser->hide();
}

SendFile::~SendFile()
{
    delete ui;
}

void SendFile::on_openPushButton_clicked()
{
    QStringList fileName=QFileDialog::getOpenFileNames(this,tr("File Dialog"),"/home/wuyulp");
    ui->textBrowser->setVisible(true);
    ui->textBrowser->clear();
    ui->textBrowser->setText(tr("The files you selected are:"));
    foreach(auto &a,fileName)
    {
        ui->textBrowser->append(a);
    }
}


void SendFile::on_cancelPushButton_clicked()
{
    close();
}

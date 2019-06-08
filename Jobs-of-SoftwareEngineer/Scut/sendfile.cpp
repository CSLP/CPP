#include "sendfile.h"
#include "ui_sendfile.h"
#include<QFileDialog>
#include<QDebug>
#include<list>
#include<QMessageBox>
#include"interface.h"
using std::string;
using std::list;
SendFile::SendFile(QString cor,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendFile)
{
    ui->setupUi(this);
    ui->textBrowser->hide();
    corName=cor;
}

SendFile::~SendFile()
{
    delete ui;
}

void SendFile::on_openPushButton_clicked()
{
    QStringList fileName=QFileDialog::getOpenFileNames(this,tr("File Dialog"),"/home/wuyulp");
    if(fileName.isEmpty()) return;
    ui->textBrowser->setVisible(true);
    ui->textBrowser->clear();
    ui->textBrowser->setText(tr("The files you selected are:"));
    foreach(auto &a,fileName)
    {
        ui->textBrowser->append(a);
    }
    filePaths=fileName;
}


void SendFile::on_cancelPushButton_clicked()
{
    close();
}

void SendFile::on_submitPushButton_clicked()
{
    list<string> paths;
    if(filePaths.isEmpty())
    {
        QMessageBox::information(this,tr("Info"),tr("Please Select Some Files!"),QMessageBox::Ok);
        return;
    }
    foreach(auto a,filePaths)
    {
        paths.push_back(a.toStdString());
    }
    for(int i=0;i<100000;i++)
        ui->progressBar->setValue(i);
    if(sendToSubmitFilePaths(paths))
    {
        ui->textBrowser->hide();
        QMessageBox::information(this,tr("Info"),tr("Submit Success!"),QMessageBox::Ok);
    }
    else
        QMessageBox::critical(this,tr("Error"),tr("Submit Error!"),QMessageBox::Ok);
    ui->progressBar->setValue(0);
    filePaths.clear();
}


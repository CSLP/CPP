#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtNetwork>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString localHostName=QHostInfo::localHostName();
    QHostInfo info=QHostInfo::fromName(localHostName);
    qDebug()<<localHostName<<endl<<info.addresses();
    QHostInfo::lookupHost("www.baidu.com",this,SLOT(lookedUp(QHostInfo)));
    QList<QNetworkInterface> list=QNetworkInterface::allInterfaces();
    foreach(QNetworkInterface interface,list)
    {
        qDebug()<<interface.name();
        qDebug()<<interface.hardwareAddress();
        QList<QNetworkAddressEntry> entryList=interface.addressEntries();
        foreach(QNetworkAddressEntry entry,entryList)
        {
            qDebug()<<entry.ip().toString();
            qDebug()<<entry.netmask().toString();
            qDebug()<<entry.broadcast().toString();
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lookedUp(const QHostInfo &host)
{
    if(host.error()!=QHostInfo::NoError)
        return ;
    foreach(const QHostAddress &address,host.addresses())
        qDebug()<<address.toString();
}

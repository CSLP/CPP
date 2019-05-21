#include "server.h"
#include "ui_server.h"
#include<QtNetwork>
Server::Server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
    connect(&tcpServer,SIGNAL(newConnection()),this,SLOT(acceptConnection()));
}

Server::~Server()
{
    delete ui;
}

void Server::start()
{
    if(!tcpServer.listen(QHostAddress::LocalHost,6666))
    {
        qDebug()<<tcpServer.errorString();
        close();
        return ;
    }
    ui->startButton->setEnabled(false);
    totalBytes=0;
    bytesReceived=0;
    fileNameSize=0;
    ui->serverStatusLabel->setText(tr("Listening"));
    ui->serverProgressBar->reset();
}

void Server::acceptConnection()
{
    tcpServerConnection =tcpServer.nextPendingConnection();
    connect(tcpServerConnection,SIGNAL(readyRead()),this,SLOT(updateServerprogress()));
    connect(tcpServerConnection,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));
    ui->serverStatusLabel->setText(tr("Accept Connection"));
    tcpServer.close();
}

void Server::updateServerprogress()
{
    QDataStream in(tcpServerConnection);
    in.setVersion(QDataStream::Qt_4_0);
    if(bytesReceived<=sizeof(qint64)*2)
    {
        if((tcpServerConnection->bytesAvailable()>=sizeof(qint64)*2)&&(fileNameSize==0))
        {
            in>>totalBytes>>fileNameSize;
            bytesReceived+=sizeof(qint64)*2;
        }
        if((tcpServerConnection->bytesAvailable()>=fileNameSize)&&(fileNameSize!=0))
            in>>fileName;
        ui->serverStatusLabel->setText(tr("Receiving File %1...").arg(fileName));
        bytesReceived+=fileNameSize;
        localFile=new QFile(fileName);
        if(!localFile->open(QFile::WriteOnly))
        {
            qDebug()<<"server:open file error!";
            return ;
        }
        else
        {
            return ;
        }
    }
    if(bytesReceived<totalBytes)
    {
        bytesReceived+=tcpServerConnection->bytesAvailable();
        inBlock=tcpServerConnection->readAll();
        localFile->write(inBlock);
        inBlock.resize(0);
    }
    ui->serverProgressBar->setMaximum(totalBytes);
    ui->serverProgressBar->setValue(bytesReceived);
    if(bytesReceived==totalBytes)
    {
        tcpServerConnection->close();
        localFile->close();
        ui->startButton->setEnabled(true);
        ui->serverStatusLabel->setText(tr("Receive file %1 success").arg(fileName));
    }
}

void Server::displayError(QAbstractSocket::SocketError socketError)
{
    qDebug()<<tcpServerConnection->errorString();
    tcpServerConnection->close();
    ui->serverProgressBar->reset();
    ui->serverStatusLabel->setText(tr("Server ready"));
    ui->startButton->setEnabled(true);
}

void Server::on_startButton_clicked()
{
    start();
}

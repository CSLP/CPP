#include "dialog.h"
#include "ui_dialog.h"
#include<QFileDialog>
#include<QBuffer>
#include<QDebug>
void Dialog::loadFromFile()
{
    if(sharedMemory.isAttached())
        detach();
    ui->label->setText(tr("Select a picture"));
    QString fileName=QFileDialog::getOpenFileName(0,QString(),QString(),tr("Image(*.png *.jpg)"));
    QImage image;
    if(!image.load(fileName))
    {
        ui->label->setText(tr(""));
        return;
    }
    ui->label->setPixmap(QPixmap::fromImage(image));
    QBuffer buffer;
    buffer.open(QBuffer::ReadWrite);
    QDataStream out(&buffer);
    out<<image;
    int size=buffer.size();
    if(!sharedMemory.create(size))
    {
        return ;
    }
    sharedMemory.lock();
    char *to =(char*)sharedMemory.data();
    const char*from=buffer.data().data();
    memcpy(to,from,qMin(sharedMemory.size(),size));
    sharedMemory.unlock();
}

void Dialog::loadFromMemory()
{
    if(!sharedMemory.attach())
    {
        return ;
    }
    QBuffer buffer;
    QDataStream in(&buffer);
    QImage image;
    sharedMemory.lock();
    buffer.setData((char*)sharedMemory.constData(),sharedMemory.size());
    buffer.open(QBuffer::ReadOnly);
    in>>image;
    sharedMemory.unlock();
    sharedMemory.detach();
    ui->label->setPixmap(QPixmap::fromImage(image));
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    sharedMemory.setKey("QSharedMemoryExample");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::detach()
{
   if(!sharedMemory.detach())
   {
       ;
   }
}

void Dialog::on_pushButton_clicked()
{
    loadFromFile();
}

void Dialog::on_loadFromSharedMemoryButton_clicked()
{
    loadFromMemory();
}

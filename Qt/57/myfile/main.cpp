#include <QCoreApplication>
#include<QFileInfo>
#include<QStringList>
#include<QDateTime>
#include<QDebug>
#include<QDir>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("myfile.txt");
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
        qDebug()<<file.errorString();
    file.write("helloQt!\n LPlinux");
    file.close();
    QFileInfo info(file);
    qDebug()<<info.absoluteFilePath()<<endl<<info.fileName()<<endl<<info.baseName()<<endl<<info.suffix()<<endl
           <<info.created()<<endl<<info.size();
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        qDebug()<<file.errorString();
    qDebug()<<file.readAll();
    qDebug()<<file.pos();
    file.seek(0);
    QByteArray array;
    array=file.read(5);
    qDebug()<<array<<file.pos();
    file.seek(15);
    array=file.read(5);
    qDebug()<<array;
    qDebug()<<QDir::tempPath();
    file.close();

    return a.exec();
}

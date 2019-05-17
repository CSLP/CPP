#include <QCoreApplication>
#include<QList>
#include<QListIterator>
#include<QMutableListIterator>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QString> list;
    list<<"A"<<"B"<<"C"<<"D";
    QListIterator<QString> i(list);
    while(i.hasNext())
        qDebug()<<i.next();
    while(i.hasPrevious())
        qDebug()<<i.previous();
    qDebug()<<endl<<endl;
    QMutableListIterator<QString> j(list);
    j.toBack();
    while(j.hasPrevious())
    {
        QString str=j.previous();
        if(str=="B") j.remove();
    }
    j.insert("Q");
    j.toBack();
    if(j.hasPrevious()) j.previous()='N';
    j.previous();
    j.setValue("M");
    j.toFront();
    while(j.hasNext())
        qDebug()<<j.next();
    return a.exec();
}

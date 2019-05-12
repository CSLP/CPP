#include <QCoreApplication>
#include<QList>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QString> list;
    list<<"A"<<"B"<<"C"<<"D";
    QList<QString>::iterator i;
    for(i=list.begin();i!=list.end();++i)
    {
        *i=(*i).toLower();
        qDebug()<<*i;
    }
    while(i!=list.begin())
    {
        --i;
        qDebug()<<*i;
    }
    QList<QString>::const_iterator j;
    for(j=list.constBegin();j!=list.constEnd();++j)
        qDebug()<<*j;
    QMap<QString,int> map;
    map.insert("one",1);
    map.insert("two",2);
    map.insert("three",3);
    QMap<QString,int>::const_iterator p;
    for(p=map.constBegin();p!=map.constEnd();++p)
        qDebug()<<p.key()<<":"<<p.value()<<endl;
    return a.exec();
}

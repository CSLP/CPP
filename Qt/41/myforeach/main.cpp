#include <QCoreApplication>
#include<QList>
#include<QMap>
#include<QMultiMap>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QString> list;
    list.insert(0,"A");
    list.insert(1,"B");
    list.insert(2,"C");
    foreach(QString str,list)
    {
        qDebug()<<str;
    }
    QMap<QString,int>map;
    map.insert("first",1);
    map.insert("second",2);
    map.insert("three",3);
    qDebug()<<endl;
    foreach(QString str,map.keys())
        qDebug()<<str<<":"<<map.value(str);
    QMultiMap<QString,int> map2;
    map2.insert("first",1);
    map2.insert("first",2);
    map2.insert("first",3);
    map2.insert("second",2);
    QList<QString> keys=map2.uniqueKeys();
    foreach(QString str,keys)
    {
        foreach(int i,map2.values(str))
            qDebug()<<str<<":"<<i;
    }

    qDebug()<<endl;

    return a.exec();
}

#include <QCoreApplication>
#include<QMap>
#include<QMultiMap>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<QString,int> map;
    map["one"]=1;
    map["three"]=3;
    map.insert("sevent",7);
    int value1=map["six"];
    qDebug()<<"value1:"<<value1;
    qDebug()<<"contains 'six'?"<<map.contains("six");
    int value2=map.value("five");
    qDebug()<<"value2:"<<value2;
    qDebug()<<"contains 'five'?"<<map.contains("five");
    int value3=map.value("nine",9);
    qDebug()<<"value3:"<<value3;
    qDebug()<<"contains 'nine'?"<<map.contains("nine");
    map.insert("ten",10);
    map.insert("ten",100);
    qDebug()<<map.value("ten");
    map.insertMulti("two",2);
    map.insertMulti("two",4);
    map.insertMulti("two",5);
    map.insertMulti("two",6);
    QList<int> values=map.values("two");
    qDebug()<<values;
    QMultiMap<QString,int> map1,map2,map3;
    map1.insert("values",1);
    map2.insert("values",2);
    map3.insert("values",3);
    map3+=map2+map1;
    QList<int> myValues=map3.values("values");
    qDebug()<<myValues;
    return a.exec();
}

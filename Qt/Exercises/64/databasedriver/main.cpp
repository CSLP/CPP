#include<QApplication>
#include<QSqlDatabase>
#include<QDebug>
#include<QStringList>
#include"connection.h"
#include<QVariant>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QSqlField>
#include<QSqlError>
int main(int argc,char * argv[])
{
    QApplication a(argc,argv);
    qDebug()<<"Available drivers";
    QStringList drivers=QSqlDatabase::drivers();
    foreach(QString driver,drivers)
        qDebug()<<driver;
    if(!createConnection())
        qDebug()<<"nimasiel";
    QSqlDatabase db1=QSqlDatabase::database("connection1");
    QSqlQuery query(db1);
    query.exec("select * from student");
    while(query.next())
    {
        qDebug()<<query.value(0).toInt()<<query.value(1).toString();
    }
    QSqlDatabase db2=QSqlDatabase::database("connection2");
    QSqlQuery query1(db2);
    query1.exec("select * from student");
    while(query1.next())
    {
        qDebug()<<query1.value(0).toInt()<<query1.value(1).toString();
    }
    int numRows;
    if(db2.driver()->hasFeature(QSqlDriver::QuerySize))
    {
        qDebug()<<"heas feature:query size";
        numRows=query1.size();
    }
    else
    {
        qDebug()<<"no fature:query size";
        query1.last();
        numRows=query1.at()+1;
    }
    qDebug()<<numRows;
    query1.seek(1);
    qDebug()<<query1.at();
    QSqlRecord record=query1.record();
    QString string=record.value("name").toString();
    int id=record.value("id").toInt();
    qDebug()<<id<<string;
    QSqlField field=record.field(1);
    qDebug()<<field.name()<<field.value().toString();
    query1.exec("insert into student (id,name) values(100,'ChenYun')");
    query1.exec("insert into student (id,name) values(?,?)");
    QVariantList ids;
    ids<<20<<21<<22;
    query1.addBindValue(ids);
    QVariantList names;
    names<<"xiaoming"<<"xiaoliang"<<"xiaogang";
    query1.addBindValue(names);
    if(!query1.execBatch()) qDebug()<<query1.lastError();
    query1.exec("update student set name='xiaohong' where id =20");
    query1.exec("delete from student where id=21");
    query1.exec("select * from student");
    while(query1.next())
        qDebug()<<query1.value(0).toInt()<<query1.value(1).toString();
    return a.exec();
}



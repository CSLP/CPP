#ifndef CONNECTION_H
#define CONNECTION_H
#include<QSqlDatabase>
#include <QSqlQuery>
#include<QVariant>
static bool createConnection()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my.db");
    db.open();
    QSqlQuery query;
    query.exec("create table student (id int primary key,name varchar,course int)");
    query.prepare("insert into student (id,name,course) values(?,?,?)");
    QVariantList ids;
    ids<<1<<2<<3;
    query.addBindValue(ids);
    QVariantList names;
    names<<"LiQiang"<<"MaLiang"<<"SunHong";
    query.addBindValue(names);
    QVariantList courses;
    courses<<11<<11<<12;
    query.addBindValue(courses);
    query.execBatch();

    query.exec("create table course (id int primary key,name varchar,teacher varchar)");
    query.prepare("insert into course (id,name,teacher) values(?,?,?)");
    QVariantList idss;
    idss<<10<<11<<12;
    query.addBindValue(idss);
    QVariantList namess;
    namess<<"Math"<<"English"<<"Computer";
    query.addBindValue(namess);
    QVariantList teachers;
    teachers<<"Wang"<<"Zhang"<<"Bai";
    query.addBindValue(teachers);
    query.execBatch();
    return true;
}

#endif // CONNECTION_H

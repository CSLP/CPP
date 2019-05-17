#include <QCoreApplication>
#include<QDebug>
#include<QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString str="hello";
    qDebug()<<str.size();
    str[0]=QChar('H');
    qDebug()<<str[0];
    str.append(" Qt");
    str.replace(1,4,"i");
    str.insert(2," my");
    qDebug()<<str;
    str=str+"!!!";
    str=" hi\r\n Qt! \n ";
    qDebug()<<str;
    QString str1=str.trimmed();
    qDebug()<<str1;
    QString str2=str.simplified();
    qDebug()<<str2;
    str="hi,my,,Qt";
    QStringList list=str.split(",",QString::SkipEmptyParts);
    qDebug()<<list;
    str=list.join(" ");
    qDebug()<<str;
    qDebug()<<QString().isNull();
    qDebug()<<endl<<endl;
    str="LipengLinux";
    qDebug()<<str;
    qDebug()<<str.right(5);
    qDebug()<<str.left(5);
    qDebug()<<str.mid(2,4);
    qDebug()<<str.indexOf("peng");
    qDebug()<<str.at(0);
    qDebug()<<str.count("L");
    qDebug()<<str.startsWith("L");
    qDebug()<<str.endsWith("Linux");
    qDebug()<<str.contains("gLin");
    QString temp="hello";
    if(temp>str) qDebug()<<temp;
    else qDebug()<<str;
    str="100";
    qDebug()<<str.toInt();
    int num=45;
    qDebug()<<QString::number(num);
    str="FF";
    bool ok;
    int hex=str.toInt(&ok,16);
    qDebug()<<hex;
    num=26;
    qDebug()<<QString::number(num,16);
    str="123.456";
    qDebug()<<str.toFloat();
    str="abc";
    qDebug()<<str.toUpper();
    str="ABC";
    qDebug()<<str.toLower();
    int age=25;
    QString name="LiPeng";
    str=QString("name is %1,age is %2").arg(name).arg(age);
    qDebug()<<str;
    return a.exec();
}

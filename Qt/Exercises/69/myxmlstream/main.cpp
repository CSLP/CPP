#include <QCoreApplication>
#include<QFile>
#include<QXmlStreamReader>
#include<QXmlStreamWriter>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*QFile file("../myxmlstream/my.xml");
    file.open(QFile::ReadOnly| QFile::Text);
    QXmlStreamReader reader;
    reader.setDevice(&file);
    while(!reader.atEnd())
    {
        QXmlStreamReader::TokenType type=reader.readNext();
        if(type==QXmlStreamReader::StartDocument)
            qDebug()<<reader.documentVersion();
        if(type==QXmlStreamReader::StartElement)
        {
            qDebug()<<"<"<<reader.name()<<">";
            if(reader.attributes().hasAttribute("id"))
                qDebug()<<reader.attributes().value("id");
        }
        if(type==QXmlStreamReader::EndElement)
            qDebug()<<"</"<<reader.name()<<">";
        if(type==QXmlStreamReader::Characters&&!reader.isWhitespace())
            qDebug()<<reader.text();
        if(reader.hasError())
            qDebug()<<"error:"<<reader.errorString();
    }
    file.close();
    */
    QFile file("../myxmlstream/my2.xml");
    file.open(QFile::WriteOnly|QFile::Text);
    QXmlStreamWriter stream(&file);
    stream.setAutoFormatting(true);
    stream.writeStartDocument();
    stream.writeStartElement("bookmark");
    stream.writeAttribute("href","http://www.baidu.com");
    stream.writeTextElement("title","Qt Home");
    stream.writeEndElement();
    stream.writeEndDocument();
    file.close();
    qDebug()<<"write finished!";
    return a.exec();
}

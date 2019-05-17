#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtXml>
#include<QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDomDocument doc;
    QDomProcessingInstruction instruction;
    instruction =doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc.appendChild(instruction);
    QDomElement root=doc.createElement("BookStore");
    doc.appendChild(root);
    QDomElement book=doc.createElement("Book");
    QDomAttr id=doc.createAttribute("ID");
    QDomElement title=doc.createElement("BookName");
    QDomElement author=doc.createElement("Author");
    QDomText text;
    id.setValue(QString("1"));
    book.setAttributeNode(id);
    text=doc.createTextNode("Qt");
    title.appendChild(text);
    text=doc.createTextNode("shiming");
    author.appendChild(text);
    book.appendChild(title);
    book.appendChild(author);
    root.appendChild(book);
    book=doc.createElement("Book");
    id=doc.createAttribute("ID");
    title=doc.createElement("BookName");
    author=doc.createElement("Author");
    text;
    id.setValue(QString("2"));
    book.setAttributeNode(id);
    text=doc.createTextNode("Linux");
    title.appendChild(text);
    text=doc.createTextNode("LiPeng");
    author.appendChild(text);
    book.appendChild(title);
    book.appendChild(author);
    root.appendChild(book);
    QFile file("my.xml");
    if(!file.open(QIODevice::WriteOnly|QIODevice::Truncate)) return ;
    QTextStream out(&file);
    doc.save(out,4);
    file.close();

}

void MainWindow::doXml(const QString operate)
{
    ui->listWidget->clear();
    ui->listWidget->addItem(tr("Find Nothing"));
    QFile file("my.xml");
    if(!file.open(QIODevice::ReadOnly)) return ;
    QDomDocument doc;
    doc.setContent(&file);
    file.close();
    QDomNodeList list=doc.elementsByTagName("Book");
    for(int i=0;i<list.count();++i)
    {
        QDomElement e=list.at(i).toElement();
        if(e.attribute("ID")==ui->lineEdit->text())
            if(operate=="delete")
            {
                QDomElement root=doc.documentElement();
                root.removeChild(list.at(i));
                QFile file("my.xml");
                if(!file.open(QIODevice::WriteOnly| QIODevice::Truncate)) return ;
                QTextStream out(&file);
                doc.save(out,4);
                file.close();
                ui->listWidget->clear();
                ui->listWidget->addItem(tr("DeleteSuccess"));
            }
        else if(operate=="update")
            {
                QDomNodeList child=list.at(i).childNodes();
                child.at(0).toElement().firstChild().setNodeValue(ui->lineEdit_2->text());
                child.at(1).toElement().firstChild().setNodeValue(ui->lineEdit_3->text());
                QFile file("my.xml");
                if(!file.open(QIODevice::WriteOnly| QIODevice::Truncate)) return ;
                QTextStream out(&file);
                doc.save(out,4);
                file.close();
                ui->listWidget->clear();
                ui->listWidget->addItem(tr("UpdateSuccess"));
            }
        else if(operate=="find")
            {
                ui->listWidget->clear();
                ui->listWidget->addItem(e.tagName()+e.attribute("ID"));
                QDomNodeList list=e.childNodes();
                for(int i=0;i<list.count();i++)
                {
                    QDomNode node=list.at(i);
                    if(node.isElement())
                        ui->listWidget->addItem(" "+node.toElement().tagName()+":"+node.toElement().text());
                }
            }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->listWidget->clear();
    QFile file("my.xml");
    if(!file.open(QIODevice::ReadOnly)) return ;
    QDomDocument doc;
    if(!doc.setContent(&file))
    {
        file.close();
        return ;
    }
    file.close();
    QDomNode nx=doc.firstChild();
    QDomElement docElem=nx.nextSibling().toElement();
    QDomNode n=docElem.firstChild();
    while(!n.isNull())
    {
        if(n.isElement())
        {
            QDomElement e=n.toElement();
            ui->listWidget->addItem(e.tagName()+e.attribute("ID"));
            QDomNodeList list=e.childNodes();
            for(int i=0;i<list.count();i++)
            {
                QDomNode node=list.at(i);
                if(node.isElement())
                    ui->listWidget->addItem(" "+node.toElement().tagName()+":"+node.toElement().text());
            }
        }
        n=n.nextSibling();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->listWidget->clear();
    ui->listWidget->addItem(tr("Cannot Display"));
    QFile file("my.xml");
    if(!file.open(QIODevice::ReadOnly)) return ;
    QDomDocument doc;
    doc.setContent(&file);
    file.close();
    QDomElement root=doc.documentElement();
    QDomElement book=doc.createElement("Book");
    QDomAttr id=doc.createAttribute("ID");
    QDomElement title=doc.createElement("BookName");
    QDomElement author=doc.createElement("Author");
    QDomText text;
    QString num=root.lastChild().toElement().attribute("ID");
    int count=num.toInt()+1;
    id.setValue(QString::number(count));
    book.setAttributeNode(id);
    text=doc.createTextNode(ui->lineEdit_2->text());
    title.appendChild(text);
    text=doc.createTextNode(ui->lineEdit_3->text());
    author.appendChild(text);
    book.appendChild(title);
    book.appendChild(author);
    root.appendChild(book);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Truncate)) return ;
    QTextStream out(&file);
    doc.save(out,4);
    file.close();
    ui->listWidget->clear();
    ui->listWidget->addItem(tr("AddSuccess!"));
}

void MainWindow::on_pushButton_clicked()
{
    doXml("find");
}

void MainWindow::on_pushButton_2_clicked()
{
    doXml("delete");
}

void MainWindow::on_pushButton_3_clicked()
{
    doXml("update");
}

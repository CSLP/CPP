#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include<QColorDialog>
#include<QFileDialog>
#include<QFontDialog>
#include<QInputDialog>
#include<QMessageBox>
#include<QProgressDialog>
#include<QErrorMessage>


QWizardPage *MyWidget::createPage1()
{
    QWizardPage*page=new QWizardPage;
    page->setTitle(tr("Introduce"));
    return page;
}

QWizardPage *MyWidget::createPage2()
{
    QWizardPage*page=new QWizardPage;
    page->setTitle(tr("User choose info"));
    return page;
}
QWizardPage *MyWidget::createPage3()
{
    QWizardPage*page=new QWizardPage;
    page->setTitle(tr("Finish"));
    return page;
}
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    errordlg=new QErrorMessage(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    QColor color=QColorDialog::getColor(Qt::red,this,tr("ColorDialog"),QColorDialog::ShowAlphaChannel);
    qDebug()<<"color:"<<color;
}

void MyWidget::on_pushButton_5_clicked()
{
    QStringList fileNames=QFileDialog::getOpenFileNames(this,tr("FileDialog"),"/",tr("Image file(*png *jpg);;Text file(*txt)"));
    qDebug()<<"filename:"<<fileNames;
}

void MyWidget::on_pushButton_2_clicked()
{
    bool ok;
    QFont font=QFontDialog::getFont(&ok,this);
    if(ok) ui->pushButton_2->setFont(font);
    else qDebug()<<tr("No choosed Font!");
}

void MyWidget::on_pushButton_6_clicked()
{
    bool ok;
    QString string =QInputDialog::getText(this,tr("InputStringDialog"),tr("Please input Id:"),QLineEdit::Normal,tr("admin"),&ok);
    if(ok) qDebug()<<"string:"<<string;
    int value1=QInputDialog::getInt(this,tr("InputIntegerDialog"),tr("Please input value between -1000~1000"),100,-1000,1000,10,&ok);
    if(ok) qDebug()<<"valuel:"<<value1;
    double value2=QInputDialog::getDouble(this,tr("InputDoubleDialog"),tr("Please input value betwee -1000~1000"),0.00,-1000,1000,2,&ok);
    if(ok) qDebug()<<"value2:"<<value2;
    QStringList items;
    items<<tr("Item1")<<tr("Item2");
    QString item=QInputDialog::getItem(this,tr("InputItemDialog"),tr("Please choose or input a item "),items,0,true,&ok);
    if(ok) qDebug()<<"Item:"<<item;
}

void MyWidget::on_pushButton_3_clicked()
{
    int ret1=QMessageBox::question(this,tr("QuestionDialog"),tr("Do you know QT?"),QMessageBox::Yes,QMessageBox::No);
    if(ret1==QMessageBox::Yes) qDebug()<<tr("Question!");
    int ret2=QMessageBox::information(this,tr("HintDialog"),tr("This is QT book!"),QMessageBox::Ok);
    if(ret2==QMessageBox::Ok) qDebug()<<tr("Hint!");
    int ret3=QMessageBox::warning(this,tr("WarningDialog"),tr("Can't end early!"),QMessageBox::Abort);
    if(ret3==QMessageBox::Abort) qDebug()<<tr("Warning!");
    int ret4=QMessageBox::critical(this,tr("StrongErrorDialog"),tr("Detected a strong error!Now will close all files!"),QMessageBox::YesAll);
    if(ret4==QMessageBox::YesAll) qDebug()<<tr("Error");
    QMessageBox::about(this,tr("AboutDialog"),tr("Lp devoted to Qt and make it popular"));

}

void MyWidget::on_pushButton_7_clicked()
{
    QProgressDialog dialog(tr("FileCopyProgress"),tr("Cancel"),0,500000,this);
    dialog.setWindowTitle(tr("ProgressDialog"));
    dialog.setWindowModality(Qt::WindowModal);
    dialog.show();
    for(int i=0;i<500000;++i)
    {
        dialog.setValue(i);
        QCoreApplication::processEvents();
        if(dialog.wasCanceled()) break;
    }
    dialog.setValue(500000);
    qDebug()<<tr("Copy down!");
}

void MyWidget::on_pushButton_4_clicked()
{
    errordlg->setWindowTitle(tr("ErrorMessageDlg"));
    errordlg->showMessage(tr("Here is error message"));
}

void MyWidget::on_pushButton_8_clicked()
{
   QWizard wizard(this);
   wizard.setWindowTitle(tr("WizardDialog"));
   wizard.addPage(createPage1());
   wizard.addPage(createPage2());
   wizard.addPage(createPage3());
   wizard.exec();
}

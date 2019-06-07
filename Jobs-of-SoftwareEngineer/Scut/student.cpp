#include "student.h"
#include "ui_student.h"
#include"interface.h"
#include<QDebug>
#include"course.h"
#include<QColor>
#include<QVBoxLayout>
#include<QTextBrowser>
#include<QGroupBox>
#include<QMessageBox>
#include<QWidget>
#include"updateinfo.h"
#include"head.h"
#include"user.h"
#include"email.h"
Student::Student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    this->move(400,160);
    upd=new UpdateInfo(this);
    connect(upd,&UpdateInfo::updateStatus,this,&Student::completUpd);
    QPixmap pixmap(":/image/1.png");
    ui->label1->setPixmap(pixmap);
    ui->label2->resize(ui->label1->size());
    ui->label2->setPixmap(pixmap);
    ui->label3->setPixmap(pixmap);
    ui->label3->resize(ui->label1->size());
    ui->label4->setPixmap(pixmap);
    ui->label4->resize(ui->label1->size());
    ui->label5->setPixmap(pixmap);
    ui->label5->resize(ui->label1->size());
    ui->label6->setPixmap(pixmap);
    ui->label6->resize(ui->label1->size());
    ui->tabWidget->setCurrentIndex(0);
    ui->listWidget->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(248,168,0);}");
}

Student::~Student()
{
    delete ui;
}

void Student::on_loginAgainPushButton_clicked()
{
    this->parentWidget()->show();
    ui->listWidget1->clear();
    close();
}

void Student::idInfomation(std::__cxx11::string type, std::__cxx11::string idinfo)
{
   list<string> info =getStudentInfoByStudentId(idinfo);
   list<string> inf=getStudentAttendanceByStudentId(idinfo);
   QStringList in;
   QStringList inn;
   for(string &a:info)
   {
       in<<QString::fromStdString(a);
   }
   ui->senderInfo->setText(QString::fromStdString(user->username+"("+user->u_id+")"));
   for(string &b:inf)
   {
       inn<<QString::fromStdString(b);
   }
   QListWidgetItem * listWidgetItem1=new QListWidgetItem;
   QListWidgetItem * listWidgetItem2=new QListWidgetItem;
   listWidgetItem1->setText("          基本信息");
   listWidgetItem1->setTextColor("blue");
   listWidgetItem2->setText("       缺勤记录  ");
   listWidgetItem2->setTextColor("red");
   ui->listWidget1->insertItem(0,listWidgetItem1);
   ui->listWidget1->insertItems(1,in);
   ui->listWidget1->insertItem(in.size()+1,listWidgetItem2);
   ui->listWidget1->insertItems(in.size()+2,inn);
   //Email part
   auto a=user->c_get_email();
   qDebug()<<a["info"].size();
   auto b=user->c_get_draft_email();
   auto c=user->c_get_unread_email();
   la=new QListWidget;
   lb=new QListWidget;
   lc=new QListWidget;
   la->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(255,255,255);}");
   lb->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(255,255,255);}");
   lc->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(255,255,255);}");
   QHBoxLayout *laya=new QHBoxLayout;
   QHBoxLayout *layb=new QHBoxLayout;
   QHBoxLayout *layc=new QHBoxLayout;
   //Email
   for(int i=0;i<a["info"].size();++i)
   {
        email *e=new email(a["info"][i]["E_TYPE"].get<string>(),a["info"][i]["E_ID"].get<string>(),a["info"][i]["E_FROM"].get<string>(),a["info"][i]["E_TOPIC"].get<string>(),a["info"][i]["E_TIME"].get<string>(),a["info"][i]["E_CONTENT"].get<string>());
        QListWidgetItem *ita=new QListWidgetItem;
        if(i%2)
        auto res=user->c_mark_email(a["info"][i]["E_ID"].get<string>());
        la->addItem(ita);
        la->setItemWidget(ita,e);
        ma.insert({QString::fromStdString(a["info"][i]["E_ID"].get<string>()),ita});
        ita->setSizeHint(QSize(0,100));
        connect(e,&email::re,this,&Student::delItem);
   }
   laya->addWidget(la);
   ui->receivePage->setLayout(laya);
   for(int i=0;i<b["info"].size();++i)
   {
        email *e=new email(b["info"][i]["E_TYPE"].get<string>(),b["info"][i]["E_ID"].get<string>(),b["info"][i]["E_FROM"].get<string>(),b["info"][i]["E_TOPIC"].get<string>(),b["info"][i]["E_TIME"].get<string>(),b["info"][i]["E_CONTENT"].get<string>());
        QListWidgetItem *itb=new QListWidgetItem;
        lb->addItem(itb);
        lb->setItemWidget(itb,e);
        mb.insert({QString::fromStdString(b["info"][i]["E_ID"].get<string>()),itb});
        itb->setSizeHint(QSize(0,100));
        connect(e,&email::re,this,&Student::delItem);
   }
   layb->addWidget(lb);
   ui->draftPage->setLayout(layb);
   for(int i=0;i<c["info"].size();++i)
   {
        email *e=new email(c["info"][i]["E_TYPE"].get<string>(),c["info"][i]["E_ID"].get<string>(),c["info"][i]["E_FROM"].get<string>(),c["info"][i]["E_TOPIC"].get<string>(),c["info"][i]["E_TIME"].get<string>(),c["info"][i]["E_CONTENT"].get<string>());
        QListWidgetItem *itc=new QListWidgetItem;
        lc->addItem(itc);
        lc->setItemWidget(itc,e);
        mc.insert({QString::fromStdString(c["info"][i]["E_ID"].get<string>()),itc});
        itc->setSizeHint(QSize(0,100));
        connect(e,&email::re,this,&Student::delItem);
   }
   layc->addWidget(lc);
   ui->unreadPage->setLayout(layc);
   ui->stackedWidget->setCurrentIndex(0);
}

void Student::courseInformation(std::__cxx11::string  type, std::__cxx11::string id)
{
        auto co=getCourseInfoByStudentId(id);
        auto co_it=co.cbegin();
        ui->label66->setText(QString::fromStdString("授课教师"+co_it->second));
        ui->pushButton6->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label55->setText(QString::fromStdString("授课教师:"+co_it->second));
        ui->pushButton5->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label33->setText(QString::fromStdString("授课教师:"+co_it->second));
        ui->pushButton3->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label44->setText(QString::fromStdString("授课教师:"+co_it->second));
        ui->pushButton4->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label11->setText(QString::fromStdString("授课教师:"+co_it->second));
        ui->pushButton1->setText(QString::fromStdString(co_it->first));
        ++co_it;
        ui->label22->setText(QString::fromStdString("授课教师:"+co_it->second));
        ui->pushButton2->setText(QString::fromStdString(co_it->first));
}

void Student::completUpd(bool x)
{
   if(x)
   {
        ui->listWidget1->clear();
        close();
   }
}

void Student::delItem(QString id)
{
    la->removeItemWidget(ma[id]);
}


void Student::on_pushButton1_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton1->text().toStdString());
}

void Student::on_pushButton2_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton2->text().toStdString());
}

void Student::on_pushButton3_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton3->text().toStdString());
}

void Student::on_pushButton4_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton4->text().toStdString());
}

void Student::on_pushButton5_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton5->text().toStdString());
}

void Student::on_pushButton6_clicked()
{
    Course *cor=new Course(this);
    cor->show();
    connect(this,&Student::corInfo,cor,&Course::courseInfo);
    emit corInfo(ui->pushButton6->text().toStdString());
}

void Student::on_modifyPushButton_clicked()
{
    upd->show();
}

void Student::on_sendPushButton_clicked()
{
    if(ui->receiveLineEdit->text().isEmpty()||ui->themeLineEdit->text().isEmpty()||ui->plainTextEdit->toPlainText().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("输入不能为空"),QMessageBox::Ok);
    else
    {
       auto ok=sendEmail(ui->receiveLineEdit->text().toStdString(),ui->themeLineEdit->text().toStdString(),ui->plainTextEdit->toPlainText().toStdString());
       if(ok)
       {
            auto res=QMessageBox::information(this,tr("Hint"),tr("邮件发送成功!"),QMessageBox::Ok);
            if(res)
            {
                ui->receiveLineEdit->clear();
                ui->themeLineEdit->clear();
                ui->plainTextEdit->clear();
            }

       }
       else
       {
            QMessageBox::information(this,tr("Hint"),tr("用户不存在"),QMessageBox::Ok);
            ui->receiveLineEdit->clear();
       }

    }
}

void Student::on_savePushButton_clicked()
{
    if(ui->receiveLineEdit->text().isEmpty()||ui->themeLineEdit->text().isEmpty()||ui->plainTextEdit->toPlainText().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("输入不能为空"),QMessageBox::Ok);
    else
    {
       auto ok=user->c_save_draft_email(ui->receiveLineEdit->text().toStdString(),ui->themeLineEdit->text().toStdString(),ui->plainTextEdit->toPlainText().toStdString());
       if(ok)
       {
            auto res=QMessageBox::information(this,tr("Hint"),tr("保存成功!"),QMessageBox::Ok);
            if(res)
            {
                ui->receiveLineEdit->clear();
                ui->themeLineEdit->clear();
                ui->plainTextEdit->clear();
            }

       }
       else
       {
            QMessageBox::information(this,tr("Hint"),tr("用户不存在"),QMessageBox::Ok);
            ui->receiveLineEdit->clear();
       }

    }
}

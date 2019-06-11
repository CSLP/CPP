#include "login.h"
#include "ui_login.h"
#include"student.h"
#include"teacher.h"
#include"signup.h"
#include<string>
#include<QMessageBox>
#include"interface.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    student=new Student(this);
    teacher=new Teacher(this);
    signup=new SignUp(this);
    connect(this,&Login::idInfo,student,&Student::idInfomation);
    connect(student,&Student::sclose,this,&Login::reshow);
    connect(this,&Login::idInfo,student,&Student::courseInformation);
    connect(teacher,&Teacher::sclose,this,&Login::reshow);
    connect(this,&Login::idInfo,teacher,&Teacher::corListInfo);
    connect(signup,&SignUp::sclose,this,&Login::reshow);
}

Login::~Login()
{
    delete ui;
}

void Login::on_signInPushButton_clicked()
{
    if(!ui->idLineEdit->text().isEmpty()&&!ui->passwdLineEdit->text().isEmpty())
    {
            string type;
            if(ui->stuRadioButton->isChecked())
                type="student";
            else
                type="teacher";
            if(loginMatch(type,ui->idLineEdit->text().toStdString(),ui->passwdLineEdit->text().toStdString()))
            {
                if(type=="student")
                {
                    string id=ui->idLineEdit->text().toStdString();
                    qDebug()<<"niah";
                    emit idInfo(type,id);
                    student->show();

                }
                else
                {
                    string id=ui->idLineEdit->text().toStdString();
                    emit idInfo(type,id);
                    teacher->show();
                }
                ui->idLineEdit->clear();
                ui->passwdLineEdit->clear();
                hide();
            }
            else
                QMessageBox::warning(this,tr("Warning"),tr("用户名或者密码错误,请重新输入!"),QMessageBox::Ok);
    }
    else
       QMessageBox::warning(this,tr("Warning"),tr("输入不能为空"),QMessageBox::Ok);

}

void Login::on_signUpPushButton_clicked()
{
    signup->show();
    hide();
    ui->idLineEdit->clear();
    ui->passwdLineEdit->clear();
}

void Login::reshow()
{
    this->show();
}

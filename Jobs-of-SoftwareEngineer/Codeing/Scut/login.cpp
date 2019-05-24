#include "login.h"
#include "ui_login.h"
#include"student.h"
#include"teacher.h"
#include"signup.h"
#include"studentab.h"
#include<string>
#include<QMessageBox>
bool loginMatch(string type,string id,string passwd)
{
    if(type=="student"&&id=="110"&&passwd=="scut")
        return true;
    return true;

}
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    student=new Student(this);
    teacher=new Teacher(this);
    signup=new SignUp(this);
    QStringList l;
    QMap<QString,QString> b;
    QMap<QString,QString> c;

    stu=new studentab(l,b,c,this);
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
                if(ui->stuRadioButton->isChecked())
                    student->show();
                else
                    teacher->show();
                ui->idLineEdit->clear();
                ui->passwdLineEdit->clear();
                hide();
            }
            else
                QMessageBox::warning(this,tr("Warning"),tr("Incorrect ID or password. Please re-enter!"),QMessageBox::Ok);
    }
    else
       QMessageBox::warning(this,tr("Warning"),tr("Input cannot be empty!"),QMessageBox::Ok);
}

void Login::on_signUpPushButton_clicked()
{
    signup->show();
    ui->idLineEdit->clear();
    ui->passwdLineEdit->clear();
}

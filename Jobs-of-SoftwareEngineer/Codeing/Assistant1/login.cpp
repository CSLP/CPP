#include "login.h"
#include "ui_login.h"
#include"signup.h"
#include<QMessageBox>
bool loginMatch(string type,string id,string passwd)
{
    if(type=="teacher"&&id=="110"&&passwd=="scut")
        return true;
    return true;

}
string Login::type="";
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
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
                accept();
                Login::type="student";
            }
            else
                QMessageBox::warning(this,tr("Warning"),tr("Incorrect ID or password. Please re-enter!"),QMessageBox::Ok);
    }
    else
       QMessageBox::warning(this,tr("Warning"),tr("Input cannot be empty!"),QMessageBox::Ok);

}

void Login::on_signUpPushButton_clicked()
{
   type="signup";
   accept();
}


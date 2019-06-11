#include "signup.h"
#include "ui_signup.h"
#include"interface.h"
#include<QMessageBox>
#include<QDebug>
SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_goToLoginPushButton_clicked()
{
    emit sclose();
    close();
    ui->userLineEdit->clear();
    ui->idLineEdit->clear();
    ui->depLineEdit->clear();
    ui->pwd1LineEdit->clear();
    ui->pwd2LineEdit->clear();
    ui->genderLineEdit->clear();

}

void SignUp::on_signupPushButton_clicked()
{
    if(!ui->userLineEdit->text().isEmpty()&&!ui->idLineEdit->text().isEmpty()&&!ui->depLineEdit->text().isEmpty()&&!ui->genderLineEdit->text().isEmpty()&&!ui->pwd1LineEdit->text().isEmpty()&&!ui->pwd2LineEdit->text().isEmpty())
    {
        if(ui->pwd1LineEdit->text()!=ui->pwd2LineEdit->text())
        {
                int ret1=QMessageBox::warning(this,tr("Warning"),tr("Inconsistent passwords!"),QMessageBox::Ok);
                if(ret1==QMessageBox::Ok)
                {
                    ui->pwd1LineEdit->clear();ui->pwd2LineEdit->clear();
                }
        }
        else
        {
            QString type;
            if(ui->stuRadioButton->isChecked())
                type="student";
            else
                type="teacher";
            auto ok=signUpInfo(ui->userLineEdit->text().toStdString(),ui->idLineEdit->text().toStdString(),ui->depLineEdit->text().toStdString(),ui->genderLineEdit->text().toStdString(),ui->pwd1LineEdit->text().toStdString(),type.toStdString(),ui->birLineEdit->text().toStdString());
            if(ok)
                QMessageBox::information(this,tr("Hint"),tr("注册成功!"),QMessageBox::Ok);
            else
                QMessageBox::information(this,tr("Hint"),tr("注册失败\n用户名或ID已被注册！"),QMessageBox::Ok);
        }

    }
    else
    {
       QMessageBox::information(this,tr("Warning"),tr("Input cannot be empty!"),QMessageBox::Ok);
    }
}

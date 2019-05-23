#include "login.h"
#include "ui_login.h"
#include"mainwindow.h"
#include"signup.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    x=new MainWindow(this);
    y=new signup(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    x->show();
    hide();
}

void Login::on_pushButton_2_clicked()
{
    y->show();
    hide();
}

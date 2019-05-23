#include "student1.h"
#include "ui_mainwindow.h"
#include"login.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    close();
    Login login;
    if(login.exec()==QDialog::Accepted&&login.type=="student") show();
}

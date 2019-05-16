#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSqlQueryModel>
#include<QSqlTableModel>
#include<QSqlRelationalTableModel>
#include<QTableView>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlRelationalDelegate>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* QSqlQueryModel *model=new QSqlQueryModel(this);
    model->setQuery("select* from student");
    model->setHeaderData(0,Qt::Horizontal,tr("Student id"));
    model->setHeaderData(1,Qt::Horizontal,tr("Name"));
    model->setHeaderData(2,Qt::Horizontal,tr("Course"));
    QTableView *view=new QTableView(this);
    view->setModel(model);
    setCentralWidget(view);
    */
   /* model=new QSqlTableModel(this);
    model->setTable("course");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
    */

    QSqlRelationalTableModel *model1=new QSqlRelationalTableModel(this);
    model1->setTable("student");
    model1->setRelation(2,QSqlRelation("course","id","name"));
    model1->select();
    QTableView*view=new QTableView(this);
    view->setModel(model1);
    //view->setItemDelegate(new QSqlRelationalDelegate(view));
    setCentralWidget(view);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    model->database().transaction();
    if(model->submitAll())
    {
        if(model->database().commit())
            QMessageBox::information(this,tr("tableModel"),tr("DataModifySuccess!"));
    }
    else
    {
        model->database().rollback();
        QMessageBox::warning(this,tr("tableModel"),tr("DatabaseError:%1").arg(model->lastError().text()),QMessageBox::Ok);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    model->revertAll();
}

void MainWindow::on_pushButton_7_clicked()
{
    QString name=ui->lineEdit->text();
    model->setFilter(QString("name='%1'").arg(name));
    model->select();
}

void MainWindow::on_pushButton_8_clicked()
{
    model->setTable("student");
    model->select();
}

void MainWindow::on_pushButton_6_clicked()
{
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}

void MainWindow::on_pushButton_5_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}

void MainWindow::on_pushButton_4_clicked()
{
    int curRow=ui->tableView->currentIndex().row();
    model->removeRow(curRow);
    int ok=QMessageBox::warning(this,tr("DeleteCurrentRow!"),tr("You Sure you will Delete current row?"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
        model->revertAll();
    else
        model->submitAll();
}

void MainWindow::on_pushButton_clicked()
{
    int rowNum=model->rowCount();
    int id=10;
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0),id);
    //model->submitAll();
}

#include "updateinfo.h"
#include "ui_updateinfo.h"
#include<QMessageBox>
UpdateInfo::UpdateInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateInfo)
{
    ui->setupUi(this);
}

UpdateInfo::~UpdateInfo()
{
    delete ui;
}

void UpdateInfo::on_submitPushButton_clicked()
{
    if(!ui->depLineEdit->text().isEmpty()&&!ui->genderLineEdit->text().isEmpty()&&!ui->pwd1LineEdit->text().isEmpty()&&!ui->pwd2LineEdit->text().isEmpty())
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

            int ret2=QMessageBox::information(this,tr("Hint"),tr("Modify Success,Please Re login"),QMessageBox::Ok);
            if(ret2==QMessageBox::Ok)
            {
                close();
                ui->depLineEdit->clear();
                ui->pwd1LineEdit->clear();
                ui->pwd2LineEdit->clear();
                ui->genderLineEdit->clear();
                emit  updateStatus(true);
            }
            //updateInfo(i->depLineEdit->text().toStdString(),ui->genderLineEdit->text().toStdString(),ui->pwd1LineEdit->text().toStdString(),type.toStdString(),ui->dateEdit->date());

        }

    }
    else
    {
       QMessageBox::information(this,tr("Warning"),tr("Input cannot be empty!"),QMessageBox::Ok);
    }
}

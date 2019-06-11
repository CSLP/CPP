#include "teacher.h"
#include "ui_teacher.h"
#include"courseinfo.h"
#include"interface.h"
#include<QListWidgetItem>
#include<studentinfo.h>
#include<QMessageBox>
#include"updateinfo.h"
#include"sendfile.h"
#include"user.h"
#include"head.h"
Teacher::Teacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    this->move(400,160);
    upd=new UpdateInfo(this);
    connect(upd,&UpdateInfo::updateStatus,this,&Teacher::completUpd);
    connect(ui->listWidget,&QListWidget::currentRowChanged,this,&Teacher::display);
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::corListInfo(string type, std::__cxx11::string  id)
{
        if(type=="student") return;
        vector<CourseInfo> cor=getCourseListByTeacherId(id);
        QString t;
        for(unsigned int i=0;i<cor.size();++i)
        {
            QListWidgetItem * item=new QListWidgetItem;
            t=cor[i].id+"    "+cor[i].courseName;
            item->setText(t);
            ui->listWidget->insertItem(i,item);
            match.insert(cor[i].id,cor[i].courseName);
            cors.push_back(cor[i]);
        }
}

void Teacher::display(int a)
{
        stu=getStudentListByCourseId(cors[a].id.toStdString());
        QString t;
        ui->textBrowser->clear();
        ui->textBrowser->append("学生ID       姓名         缺课次数");
        for(unsigned int i=0;i<stu.size();++i)
        {
            t=stu[i].id+"     	"+stu[i].studentName+"     "+stu[i].absent;
            ui->textBrowser->append(t);
        }
}

void Teacher::completUpd(bool x)
{
    if(x)
        close();
}

void Teacher::clearCache()
{
    ui->idLineEdit->clear();
    ui->textEdit->clear();
}

void Teacher::on_pushButton_3_clicked()
{
    disconnect(ui->listWidget,&QListWidget::currentRowChanged,this,&Teacher::display);
    ui->listWidget->clear();
    emit sclose();
    close();
}

void Teacher::on_pushButton_5_clicked()
{
    if(ui->idLineEdit->text().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("上传材料需要指明课程ID!"),QMessageBox::Ok);
    else
    {
        SendFile *s=new SendFile("t",match[ui->idLineEdit->text()],this);
        s->show();
    }
    clearCache();
}

void Teacher::on_pushButton_clicked()//fa tong zhi
{
    if(ui->idLineEdit->text().isEmpty()||ui->textEdit->toPlainText().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("输入不能为空!"),QMessageBox::Ok);
    else
    {
        auto res=user->c_publish_course_notice(ui->idLineEdit->text().toStdString(),ui->textEdit->toPlainText().toStdString());
        if(res)
        {
           QMessageBox::information(this,tr("Hint"),tr("发送成功"),QMessageBox::Ok);
           ui->idLineEdit->clear();
           ui->textEdit->clear();
        }

    }
}

void Teacher::on_pushButton_4_clicked()
{
   upd->show();
}

void Teacher::on_pushButton_2_clicked()
{
    if(ui->cLineEdit->text().isEmpty()||ui->idLineEdit1->text().isEmpty()||ui->idLineEdit2->text().isEmpty())
       QMessageBox::warning(this,tr("Warning"),tr("输入不能为空!"),QMessageBox::Ok);
    else
    {
    auto  res=user->c_update_absent(ui->idLineEdit1->text().toStdString(),ui->idLineEdit2->text().toStdString(),ui->cLineEdit->text().toInt());
    if(res)
    {
           QMessageBox::information(this,tr("Hint"),tr("更新成功"),QMessageBox::Ok);
           ui->idLineEdit1->clear();
           ui->idLineEdit2->clear();
           ui->cLineEdit->clear();
    }
    }

}

void Teacher::on_pushButton_6_clicked()
{
    if(ui->idLineEdit->text().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("收作业需要指明课程ID!"),QMessageBox::Ok);
    else
    {
        auto res=user->download_homework(match[ui->idLineEdit->text()].toStdString());
        if(res)
        {
             QMessageBox::information(this,tr("Hint"),tr("下载成功"),QMessageBox::Ok);
        }
    }
}

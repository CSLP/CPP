#include "teacher.h"
#include "ui_teacher.h"
#include"courseinfo.h"
#include"interface.h"
#include<QListWidgetItem>
#include<studentinfo.h>
#include<QMessageBox>
#include"updateinfo.h"
#include"sendfile.h"
Teacher::Teacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    this->move(400,160);
    upd=new UpdateInfo(this);
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
            ui->listWidget->addItem(item);
            cors.push_back(cor[i]);
        }
        connect(ui->listWidget,&QListWidget::currentRowChanged,this,&Teacher::display);
}

void Teacher::display(int a)
{
        vector<StudentInfo> stu=getStudentListByCourseId(cors[a].id.toStdString());
        QString t;
        ui->textBrowser->clear();
        for(unsigned int i=0;i<stu.size();++i)
        {
            t=stu[i].id+"     	"+stu[i].studentName;
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
    ui->IdLineEdit->clear();
    ui->textEdit->clear();
}

void Teacher::on_pushButton_3_clicked()
{
    close();
    ui->listWidget->clear();
}

void Teacher::on_pushButton_5_clicked()
{
    if(ui->IdLineEdit->text().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("上传材料需要指明课程ID!"),QMessageBox::Ok);
    else
    {
        SendFile *s=new SendFile(this);
        s->show();
    }
    clearCache();
}

void Teacher::on_pushButton_clicked()
{
    if(ui->IdLineEdit->text().isEmpty()||ui->textEdit->toPlainText().isEmpty())
        QMessageBox::warning(this,tr("Warning"),tr("输入不能为空!"),QMessageBox::Ok);
    else
    {

    }
}

void Teacher::on_pushButton_4_clicked()
{
   upd->show();
}

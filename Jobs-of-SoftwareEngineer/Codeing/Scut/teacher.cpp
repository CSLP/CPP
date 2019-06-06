#include "teacher.h"
#include "ui_teacher.h"
#include"courseinfo.h"
#include"interface.h"
#include<QListWidgetItem>
#include<studentinfo.h>
Teacher::Teacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    this->move(400,160);
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::corListInfo(string id)
{
        vector<CourseInfo> cor=getCourseListByTeacherId(id);
        QString t;
        for(unsigned int i=0;i<cor.size();++i)
        {
            QListWidgetItem * item=new QListWidgetItem;
            t=QString::number(cor[i].id)+"   		"+cor[i].courseName;
            item->setText(t);
            ui->listWidget->addItem(item);
            cors.push_back(cor[i]);
        }
        connect(ui->listWidget,&QListWidget::currentRowChanged,this,&Teacher::display);
}

void Teacher::display(int a)
{
        vector<StudentInfo> stu=getStudentListByCourseId(cors[a].id);
        QString t;
        ui->textBrowser->clear();
        for(unsigned int i=0;i<stu.size();++i)
        {
            t=stu[i].id+"     	"+stu[i].studentName;
            ui->textBrowser->append(t);
        }
}

void Teacher::on_pushButton_3_clicked()
{
    close();
    ui->listWidget->clear();
}

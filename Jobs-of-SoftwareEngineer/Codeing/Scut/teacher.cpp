#include "teacher.h"
#include "ui_teacher.h"
#include"courseinfo.h"
#include"interface.h"
#include<QListWidgetItem>
Teacher::Teacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::corListInfo(string id)
{
        vector<CourseInfo> cor=getCourseListByTeacherId(id);
        corNum=cor.size();
        qDebug()<<corNum;
        QString t;
        for(int i=0;i<cor.size();++i)
        {
            QListWidgetItem * item=new QListWidgetItem;
            t=QString::number(cor[i].id)+"				"+cor[i].courseName;
            item->setText(t);
            ui->listWidget->addItem(item);
            cors.push_back(cor[i]);
        }
}

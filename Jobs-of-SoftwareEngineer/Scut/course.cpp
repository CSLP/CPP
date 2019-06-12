#include "course.h"
#include "ui_course.h"
#include"sendfile.h"
#include"topic.h"
#include<QDir>
#include<QTreeWidget>
#include<QFileSystemModel>
#include<QTreeView>
#include<QVBoxLayout>
#include<QTextBrowser>
#include<QPushButton>
#include<QGroupBox>
#include<QScrollArea>
#include<QListWidget>
#include<QPlainTextEdit>
#include<QDebug>
#include"message.h"
#include"myclock.h"
#include<QMessageBox>
Course::Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course)
{
    ui->setupUi(this);
    this->move(390,155);
    this->resize(1300,750);
    ui->teaTextBrowser->append("nimasil");
    ui->tabWidget->setCurrentIndex(0);
//    courseId=i;
    topicNum=0;
    connect(ui->tabWidget,&QTabWidget::currentChanged,this,&Course::changeTag);
    connect(this,&Course::perfect,this,&Course::display);
}

Course::~Course()
{
    delete ui;
}

void Course::on_backPushButton_clicked()
{
    close();
}

void Course::on_submitPushButton_clicked()
{
   SendFile *s=new SendFile("s",courseName,this);
   s->show();
}

void Course::courseInfo(std::__cxx11::string corName)
{
    courseName=QString::fromStdString(corName);
    auto rx=user->c_get_course_list();
    for(int i=0;i<rx["info"][i].size();++i)
    {
        if(rx["info"][i]["C_NAME"].get<string>()==courseName.toStdString())
           courseId=QString::fromStdString(rx["info"][i]["C_ID"].get<string>());
    }
    list<string> teacherInfo=getTeacherInfoByCourseName(corName);
    string courseInfo=getCourseInfoByCourseName(corName);
    list<string> homeworkInfo=getHomeworkInfoByCourseName(corName);
    ui->teaTextBrowser->clear();
    for(auto a:teacherInfo)
    {
        ui->teaTextBrowser->append(QString::fromStdString(a));
    }
    ui->corTextBrowser->clear();
    ui->corTextBrowser->setText(QString::fromStdString(courseInfo));
    ui->homTextBrowser->clear();
    foreach(auto &a,homeworkInfo)
    {
        ui->homTextBrowser->append(QString::fromStdString(a));
    }
    vector<Message> topics=getTopicsByCourseName(corName);
    QHBoxLayout * layout=new QHBoxLayout;
    QVBoxLayout * la=new QVBoxLayout;
    MyClock * clock=new MyClock;
    QPushButton * answer=new QPushButton("提问");
    QPushButton * submit=new QPushButton("确定");
    submit->hide();
    QHBoxLayout * lb=new QHBoxLayout;
    lb->addWidget(answer);
    lb->addWidget(submit);
    brow=new QPlainTextEdit;
    la->addWidget(clock);
    la->addLayout(lb);
    la->addWidget(brow);
    brow->hide();
    connect(answer,&QPushButton::clicked,brow,&QPlainTextEdit::show);
    connect(answer,&QPushButton::clicked,submit,&QPushButton::show);
    connect(submit,&QPushButton::clicked,brow,&QPlainTextEdit::hide);
    connect(submit,&QPushButton::clicked,submit,&QPushButton::hide);
    connect(submit,&QPushButton::clicked,this,&Course::subTop);
    listWidget=new QListWidget;
    listWidget->setStyleSheet("QListView::item:selected{color:black;background-color:rgb(255,255,255);}");
    layout->addWidget(listWidget);
    layout->addLayout(la);
    layout->setStretch(0,2);
    layout->setStretch(1,1);
    ui->discussTab->setLayout(layout);
    topicNum=topics.size();
    for(int i=0;i<topicNum;++i)
    {
        Topic * t=new Topic(topics.at(i));
        tops.push_back(t);
        QListWidgetItem * item=new QListWidgetItem(listWidget);
        items.push_back(item);
        listWidget->addItem(item);
        listWidget->setItemWidget(item,t);
        item->setSizeHint(QSize(0,50));
    }
    connect(listWidget,&QListWidget::currentRowChanged,this,&Course::display);



    //download  section
    auto res=user->c_get_course_files(courseId.toStdString());
    for(int i=0;i<res["info"].size();i++)
    {
       files<<QString::fromStdString(res["info"][i]["file-name"].get<string>());
    }
    if(res["OK"].get<bool>()==true)
    {
        auto tree=easy_parse(res);
        tree.print();
        cout<<res.dump(4)<<endl;
        QHBoxLayout * lay=new QHBoxLayout;
        treeWidget=new QTreeWidget;
        lay->addWidget(treeWidget);
        treeWidget->setColumnCount(1);
        qDebug()<<"nimasile";
        auto root=tree.rt;
        QTreeWidgetItem*g1=new QTreeWidgetItem(treeWidget);
        build(g1,root);
      /*  std::queue<QTreeWidgetItem*> q;
        q.push(g1);
        while(!q.empty())
        {
            QTreeWidgetItem *temp = q.front();
            q.pop();
            qDebug()<<temp->text(0);
            for(int i = 0; i<temp->childCount(); i++)
            {
                q.push(temp->child(i));
            }
        }
        */
        treeWidget->show();
        ui->resourceTab->setLayout(lay);
    }
    connect(treeWidget,&QTreeWidget::itemClicked,this,&Course::download);
}

void Course::display(int a)
{
    for(int i=0;i<topicNum;++i)
    {
        if(i!=a)
        {
            items[i]->setSizeHint(QSize(0,50));
            tops[i]->setVis(false);
        }
        else
        {
            items[i]->setSizeHint(QSize(0,600));
            tops[i]->setVis(true);
        }
    }
}

void Course::download(QTreeWidgetItem *i, int)
{
    qDebug()<<i->text(0);
    auto res=QMessageBox::information(this,tr("Hint"),tr("你要下载此文件吗?"),QMessageBox::Yes,QMessageBox::No);
    if(res==QMessageBox::No) return;
    for(auto x:files)
    {
        if(x.toStdString().find(i->text(0).toStdString())!=string::npos)
        {
            qDebug()<<x;
            auto yyy=x.toStdString().find("ppt");
            if(yyy!=string::npos)
            {
                auto result=x.toStdString().substr(yyy+4);
                auto ok=user->download_ppt(result);
                if(ok)
                    QMessageBox::information(this,tr("Hint"),tr("下载成功"),QMessageBox::Ok);
            }
        }
    }
}

void Course::changeTag(int a)
{
   a+=10;
   emit perfect(a);
}

void Course::subTop()
{

    auto re=user->c_insert_topic(courseId.toStdString(),brow->toPlainText().toStdString());
    if(re)
           QMessageBox::information(this,tr("Hint"),tr("提问成功!"),QMessageBox::Ok);

}

void Course::build(QTreeWidgetItem *qnode, Node *node)
{
       qnode->setText(0,QString::fromStdString(node->name));
       for(auto child:node->sub_dirs)
       {
           QTreeWidgetItem*temp=new QTreeWidgetItem();
           build(temp,child);
           qnode->addChild(temp);
       }
       return ;
}

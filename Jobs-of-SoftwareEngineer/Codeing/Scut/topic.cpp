#include "topic.h"
#include "ui_topic.h"

Topic::Topic(Message msg, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Topic)
{
    ui->setupUi(this);
    ui->scrollArea->hide();
}

Topic::~Topic()
{
    delete ui;
}

void Topic::change()
{
   ui->scrollArea->setVisible(true);
}

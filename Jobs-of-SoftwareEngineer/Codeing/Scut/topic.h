#ifndef TOPIC_H
#define TOPIC_H

#include <QWidget>
#include"message.h"
namespace Ui {
class Topic;
}

class Topic : public QWidget
{
    Q_OBJECT

public:
    explicit Topic(Message,QWidget *parent = 0);
    ~Topic();
public slots:
    void change();
private:
    Ui::Topic *ui;
};

#endif // TOPIC_H

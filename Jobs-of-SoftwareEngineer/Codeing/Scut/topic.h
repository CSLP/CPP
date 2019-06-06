#ifndef TOPIC_H
#define TOPIC_H
#include<vector>
#include <QWidget>
#include"message.h"
using std::vector;
namespace Ui {
class Topic;
}

class Topic : public QWidget
{
    Q_OBJECT

public:
    explicit Topic(Message,QWidget *parent = 0);
    ~Topic();
public :
    void setVis(bool);
private slots:
    void on_showPushButton_clicked();

    void on_foldPushButton_clicked();

private:
    Ui::Topic *ui;
};

#endif // TOPIC_H

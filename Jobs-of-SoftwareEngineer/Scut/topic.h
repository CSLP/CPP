#ifndef TOPIC_H
#define TOPIC_H
#include<vector>
#include <QWidget>
#include"message.h"
class QPlainTextEdit;
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
    void subCo();

private:
    Ui::Topic *ui;
    QPlainTextEdit *co;
    QString id;
};

#endif // TOPIC_H

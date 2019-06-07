#ifndef EMAIL_H
#define EMAIL_H

#include <QWidget>
#include<string>
using std::string;
namespace Ui {
class email;
}

class email : public QWidget
{
    Q_OBJECT

public:
    explicit email(string,string,string,string,string,string,QWidget *parent = 0);
    ~email();
private slots:
    void des();
signals:
    void re(QString);
private:
    Ui::email*ui;
    QString id;
    QString from;
    QString time;
    QString content;
    QString theme;
    QString type;

};

#endif // EMAIL_H

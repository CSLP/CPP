#ifndef COMMENT_H
#define COMMENT_H

#include <QGroupBox>
class Message;
namespace Ui {
class Comment;
}

class Comment : public QGroupBox
{
    Q_OBJECT

public:
    explicit Comment(Message,QWidget *parent = 0);
    ~Comment();

private slots:
    void on_showPushButton_clicked();

    void on_foldPushButton_clicked();

private:
    Ui::Comment *ui;
};

#endif // COMMENT_H

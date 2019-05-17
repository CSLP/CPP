#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QWidget>

namespace Ui {
class HelloDialog;
}

class HelloDialog : public QWidget
{
    Q_OBJECT

public:
    explicit HelloDialog(QWidget *parent = 0);
    ~HelloDialog();

private:
    Ui::HelloDialog *ui;
};

#endif // HELLODIALOG_H

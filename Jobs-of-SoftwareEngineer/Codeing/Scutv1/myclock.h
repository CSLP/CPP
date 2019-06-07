#ifndef MYCLOCK_H
#define MYCLOCK_H

#include <QWidget>

namespace Ui {
class MyClock;
}

class MyClock : public QWidget
{
    Q_OBJECT

public:
    explicit MyClock(QWidget *parent = 0);
    ~MyClock();
protected:
    void paintEvent(QPaintEvent *event);
private:
    Ui::MyClock *ui;
};

#endif // MYCLOCK_H

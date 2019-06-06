#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>

class Clock : public QWidget
{
    Q_OBJECT
public:
    explicit Clock(QWidget *parent = 0);
    ~Clock();
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // CLOCK_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    bool getMove() const;
    void setMove(bool value);

private:
    Ui::Widget *ui;
    bool keyUp;
    bool keyLeft;
    bool move;
protected:
    void keyPressEvent(QKeyEvent*event);
    void keyReleaseEvent(QKeyEvent*event);
};

#endif // WIDGET_H

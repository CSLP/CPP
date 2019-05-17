#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNewFile_N_2_triggered();

    void on_action_New_triggered();

    void on_actionDisplay_triggered();

private:
    Ui::MainWindow *ui;
private slots:
    void setText(const QString &string);
};

#endif // MAINWINDOW_H

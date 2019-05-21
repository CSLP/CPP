#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLineEdit;
class QWebEngineView;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView *view;
    QLineEdit * locationEdit;
    int progress;
protected slots:
    void changeLocation();
    void setProgress(int);
    void adjustTitle();
    void finishedLoading(bool);
};

#endif // MAINWINDOW_H

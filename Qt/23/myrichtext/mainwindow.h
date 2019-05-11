#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLineEdit;
class QDialog;
class MySyntaxHighlighter;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private slots:
    void showTextFrame();
private slots:
    void showTextBlock();
private slots:
    void setTextFont(bool checked);
private slots:
    void insertTable();
    void insertList();
    void insertImage();
    void textFind();
    void findNext();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QLineEdit*lineEdit;
    QDialog*findDialog;
    MySyntaxHighlighter *highlighter;
};

#endif // MAINWINDOW_H

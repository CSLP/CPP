#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QItemSelection;
class QModelIndex;
class QTableView;
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
    QTableView* tableView;
    QTableView* tableView2;
public slots:
    void getCurrentItemData();
    void toggleSelection();
    void updateSeletcion(const QItemSelection &selected,const QItemSelection &deselected);
    void changeCurrent(const QModelIndex &current,const QModelIndex &previous);
};

#endif // MAINWINDOW_H

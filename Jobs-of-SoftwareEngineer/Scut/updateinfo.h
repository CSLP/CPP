#ifndef UPDATEINFO_H
#define UPDATEINFO_H

#include <QDialog>

namespace Ui {
class UpdateInfo;
}

class UpdateInfo : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateInfo(QWidget *parent = 0);
    ~UpdateInfo();

private slots:
    void on_submitPushButton_clicked();
signals:
    void updateStatus(bool);
private:
    Ui::UpdateInfo *ui;
};

#endif // UPDATEINFO_H

#ifndef SENDFILE_H
#define SENDFILE_H

#include <QDialog>

namespace Ui {
class SendFile;
}

class SendFile : public QDialog
{
    Q_OBJECT

public:
    explicit SendFile(QWidget *parent = 0);
    ~SendFile();

private slots:
    void on_openPushButton_clicked();


    void on_cancelPushButton_clicked();

    void on_submitPushButton_clicked();
private:
    Ui::SendFile *ui;
    QStringList filePaths;
};

#endif // SENDFILE_H

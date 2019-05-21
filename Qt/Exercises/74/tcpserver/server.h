#ifndef SERVER_H
#define SERVER_H
#include<QAbstractSocket>
#include<QTcpServer>
#include <QDialog>
class QTcpSocket;
class QFile;
namespace Ui {
class Server;
}

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();

private:
    Ui::Server *ui;
    QTcpServer tcpServer;
    QTcpSocket *tcpServerConnection;
    qint64 totalBytes;
    qint64 bytesReceived;
    qint64 fileNameSize;
    QString fileName;
    QFile*localFile;
    QByteArray inBlock;
private slots:
    void start();
    void acceptConnection();
    void updateServerprogress();
    void displayError(QAbstractSocket::SocketError socketError);

    void on_startButton_clicked();
};

#endif // SERVER_H

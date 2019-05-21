/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QLabel *serverStatusLabel;
    QPushButton *startButton;
    QProgressBar *serverProgressBar;

    void setupUi(QDialog *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QStringLiteral("Server"));
        Server->resize(789, 465);
        serverStatusLabel = new QLabel(Server);
        serverStatusLabel->setObjectName(QStringLiteral("serverStatusLabel"));
        serverStatusLabel->setGeometry(QRect(170, 170, 85, 22));
        startButton = new QPushButton(Server);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(570, 330, 120, 32));
        serverProgressBar = new QProgressBar(Server);
        serverProgressBar->setObjectName(QStringLiteral("serverProgressBar"));
        serverProgressBar->setGeometry(QRect(170, 220, 511, 61));
        serverProgressBar->setValue(0);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QDialog *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "Server", 0));
        serverStatusLabel->setText(QApplication::translate("Server", "Server", 0));
        startButton->setText(QApplication::translate("Server", "BeginListen", 0));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H

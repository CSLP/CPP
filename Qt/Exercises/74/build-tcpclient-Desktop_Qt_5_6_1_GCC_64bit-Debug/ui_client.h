/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *portlineEdit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *hostlineEdit;
    QLabel *clientStatusLabel;
    QProgressBar *clientProgressBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *openButton;
    QPushButton *sendButton;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(981, 627);
        widget = new QWidget(Client);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 120, 761, 441));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        portlineEdit = new QLineEdit(widget);
        portlineEdit->setObjectName(QStringLiteral("portlineEdit"));

        gridLayout->addWidget(portlineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hostlineEdit = new QLineEdit(widget);
        hostlineEdit->setObjectName(QStringLiteral("hostlineEdit"));

        gridLayout->addWidget(hostlineEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        clientStatusLabel = new QLabel(widget);
        clientStatusLabel->setObjectName(QStringLiteral("clientStatusLabel"));

        verticalLayout->addWidget(clientStatusLabel);

        clientProgressBar = new QProgressBar(widget);
        clientProgressBar->setObjectName(QStringLiteral("clientProgressBar"));
        clientProgressBar->setValue(0);

        verticalLayout->addWidget(clientProgressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openButton = new QPushButton(widget);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout->addWidget(openButton);

        sendButton = new QPushButton(widget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", 0));
        label_2->setText(QApplication::translate("Client", "Port", 0));
        label->setText(QApplication::translate("Client", "Host", 0));
        clientStatusLabel->setText(QApplication::translate("Client", "Status:Wait open the file!", 0));
        openButton->setText(QApplication::translate("Client", "Open", 0));
        sendButton->setText(QApplication::translate("Client", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

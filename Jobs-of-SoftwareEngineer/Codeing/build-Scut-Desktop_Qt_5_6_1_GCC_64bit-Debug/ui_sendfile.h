/********************************************************************************
** Form generated from reading UI file 'sendfile.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFILE_H
#define UI_SENDFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendFile
{
public:
    QProgressBar *progressBar;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openPushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SendFile)
    {
        if (SendFile->objectName().isEmpty())
            SendFile->setObjectName(QStringLiteral("SendFile"));
        SendFile->resize(407, 312);
        progressBar = new QProgressBar(SendFile);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(100, 140, 181, 41));
        progressBar->setValue(24);
        label = new QLabel(SendFile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 251, 31));
        widget = new QWidget(SendFile);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 220, 287, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        openPushButton = new QPushButton(widget);
        openPushButton->setObjectName(QStringLiteral("openPushButton"));

        horizontalLayout->addWidget(openPushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(SendFile);

        QMetaObject::connectSlotsByName(SendFile);
    } // setupUi

    void retranslateUi(QDialog *SendFile)
    {
        SendFile->setWindowTitle(QApplication::translate("SendFile", "Dialog", 0));
        label->setText(QApplication::translate("SendFile", "Please select the file to send!", 0));
        openPushButton->setText(QApplication::translate("SendFile", "Open", 0));
        pushButton_2->setText(QApplication::translate("SendFile", "Submit", 0));
        pushButton_3->setText(QApplication::translate("SendFile", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SendFile: public Ui_SendFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFILE_H

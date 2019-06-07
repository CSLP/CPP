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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SendFile
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *openPushButton;
    QPushButton *submitPushButton;
    QPushButton *cancelPushButton;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SendFile)
    {
        if (SendFile->objectName().isEmpty())
            SendFile->setObjectName(QStringLiteral("SendFile"));
        SendFile->resize(438, 330);
        verticalLayout = new QVBoxLayout(SendFile);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SendFile);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        progressBar = new QProgressBar(SendFile);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openPushButton = new QPushButton(SendFile);
        openPushButton->setObjectName(QStringLiteral("openPushButton"));

        horizontalLayout->addWidget(openPushButton);

        submitPushButton = new QPushButton(SendFile);
        submitPushButton->setObjectName(QStringLiteral("submitPushButton"));

        horizontalLayout->addWidget(submitPushButton);

        cancelPushButton = new QPushButton(SendFile);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(SendFile);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        verticalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(SendFile);

        QMetaObject::connectSlotsByName(SendFile);
    } // setupUi

    void retranslateUi(QDialog *SendFile)
    {
        SendFile->setWindowTitle(QApplication::translate("SendFile", "Dialog", 0));
        label->setText(QApplication::translate("SendFile", "\350\257\267\351\200\211\346\213\251\350\246\201\344\270\212\344\274\240\347\232\204\346\226\207\344\273\266", 0));
        openPushButton->setText(QApplication::translate("SendFile", "\346\211\223\345\274\200", 0));
        submitPushButton->setText(QApplication::translate("SendFile", "\344\270\212\344\274\240", 0));
        cancelPushButton->setText(QApplication::translate("SendFile", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class SendFile: public Ui_SendFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFILE_H

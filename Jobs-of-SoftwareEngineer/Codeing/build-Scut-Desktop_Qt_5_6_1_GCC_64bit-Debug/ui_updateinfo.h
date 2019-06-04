/********************************************************************************
** Form generated from reading UI file 'updateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEINFO_H
#define UI_UPDATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateInfo
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *depLineEdit;
    QLineEdit *genderLineEdit;
    QLineEdit *pwd1LineEdit;
    QLineEdit *pwd2LineEdit;
    QDateEdit *dateEdit;
    QLabel *label;
    QPushButton *submitPushButton;

    void setupUi(QDialog *UpdateInfo)
    {
        if (UpdateInfo->objectName().isEmpty())
            UpdateInfo->setObjectName(QStringLiteral("UpdateInfo"));
        UpdateInfo->resize(715, 529);
        layoutWidget = new QWidget(UpdateInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 120, 336, 299));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(18);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        depLineEdit = new QLineEdit(layoutWidget);
        depLineEdit->setObjectName(QStringLiteral("depLineEdit"));

        verticalLayout->addWidget(depLineEdit);

        genderLineEdit = new QLineEdit(layoutWidget);
        genderLineEdit->setObjectName(QStringLiteral("genderLineEdit"));

        verticalLayout->addWidget(genderLineEdit);

        pwd1LineEdit = new QLineEdit(layoutWidget);
        pwd1LineEdit->setObjectName(QStringLiteral("pwd1LineEdit"));
        pwd1LineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pwd1LineEdit);

        pwd2LineEdit = new QLineEdit(layoutWidget);
        pwd2LineEdit->setObjectName(QStringLiteral("pwd2LineEdit"));
        pwd2LineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pwd2LineEdit);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        verticalLayout->addWidget(dateEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        label = new QLabel(UpdateInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 60, 311, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        submitPushButton = new QPushButton(UpdateInfo);
        submitPushButton->setObjectName(QStringLiteral("submitPushButton"));
        submitPushButton->setGeometry(QRect(250, 450, 151, 41));

        retranslateUi(UpdateInfo);

        QMetaObject::connectSlotsByName(UpdateInfo);
    } // setupUi

    void retranslateUi(QDialog *UpdateInfo)
    {
        UpdateInfo->setWindowTitle(QApplication::translate("UpdateInfo", "Dialog", 0));
        label_3->setText(QApplication::translate("UpdateInfo", "Department:", 0));
        label_5->setText(QApplication::translate("UpdateInfo", "Gender:", 0));
        label_6->setText(QApplication::translate("UpdateInfo", "Password:", 0));
        label_9->setText(QApplication::translate("UpdateInfo", "PasswdAgain:", 0));
        label_4->setText(QApplication::translate("UpdateInfo", "Birthday:", 0));
        dateEdit->setDisplayFormat(QApplication::translate("UpdateInfo", "yyyy/M/d", 0));
        label->setText(QApplication::translate("UpdateInfo", "Input New Info", 0));
        submitPushButton->setText(QApplication::translate("UpdateInfo", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateInfo: public Ui_UpdateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINFO_H

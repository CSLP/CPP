/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *stuRadioButton;
    QRadioButton *teaRadioButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idLineEdit;
    QLabel *label_2;
    QLineEdit *passwdLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *signInPushButton;
    QPushButton *signUpPushButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(717, 473);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 280, 206, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stuRadioButton = new QRadioButton(layoutWidget);
        stuRadioButton->setObjectName(QStringLiteral("stuRadioButton"));
        stuRadioButton->setChecked(true);

        horizontalLayout->addWidget(stuRadioButton);

        teaRadioButton = new QRadioButton(layoutWidget);
        teaRadioButton->setObjectName(QStringLiteral("teaRadioButton"));

        horizontalLayout->addWidget(teaRadioButton);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(141, 126, 391, 141));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idLineEdit = new QLineEdit(layoutWidget1);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        gridLayout->addWidget(idLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwdLineEdit = new QLineEdit(layoutWidget1);
        passwdLineEdit->setObjectName(QStringLiteral("passwdLineEdit"));
        passwdLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwdLineEdit, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(Login);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 330, 272, 42));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(100);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        signInPushButton = new QPushButton(layoutWidget2);
        signInPushButton->setObjectName(QStringLiteral("signInPushButton"));

        horizontalLayout_2->addWidget(signInPushButton);

        signUpPushButton = new QPushButton(layoutWidget2);
        signUpPushButton->setObjectName(QStringLiteral("signUpPushButton"));
        signUpPushButton->setEnabled(true);

        horizontalLayout_2->addWidget(signUpPushButton);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        stuRadioButton->setText(QApplication::translate("Login", "Student", 0));
        teaRadioButton->setText(QApplication::translate("Login", "Teacher", 0));
        label->setText(QApplication::translate("Login", "ID", 0));
        label_2->setText(QApplication::translate("Login", "Password", 0));
        passwdLineEdit->setText(QString());
        signInPushButton->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0));
        signUpPushButton->setText(QApplication::translate("Login", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

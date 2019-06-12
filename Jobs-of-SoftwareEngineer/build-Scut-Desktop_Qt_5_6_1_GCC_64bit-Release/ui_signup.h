/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLabel *label_8;
    QPushButton *signupPushButton;
    QPushButton *goToLoginPushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *userLineEdit;
    QLineEdit *depLineEdit;
    QLineEdit *idLineEdit;
    QLineEdit *genderLineEdit;
    QLineEdit *pwd1LineEdit;
    QLineEdit *pwd2LineEdit;
    QHBoxLayout *horizontalLayout;
    QRadioButton *stuRadioButton;
    QRadioButton *teaRadioButton;
    QLineEdit *birLineEdit;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(863, 641);
        label_8 = new QLabel(SignUp);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 50, 456, 101));
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setMargin(0);
        signupPushButton = new QPushButton(SignUp);
        signupPushButton->setObjectName(QStringLiteral("signupPushButton"));
        signupPushButton->setGeometry(QRect(240, 520, 120, 32));
        goToLoginPushButton = new QPushButton(SignUp);
        goToLoginPushButton->setObjectName(QStringLiteral("goToLoginPushButton"));
        goToLoginPushButton->setGeometry(QRect(460, 520, 120, 32));
        layoutWidget = new QWidget(SignUp);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 170, 337, 299));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        userLineEdit = new QLineEdit(layoutWidget);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));

        verticalLayout->addWidget(userLineEdit);

        depLineEdit = new QLineEdit(layoutWidget);
        depLineEdit->setObjectName(QStringLiteral("depLineEdit"));

        verticalLayout->addWidget(depLineEdit);

        idLineEdit = new QLineEdit(layoutWidget);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        verticalLayout->addWidget(idLineEdit);

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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stuRadioButton = new QRadioButton(layoutWidget);
        stuRadioButton->setObjectName(QStringLiteral("stuRadioButton"));
        stuRadioButton->setChecked(true);

        horizontalLayout->addWidget(stuRadioButton);

        teaRadioButton = new QRadioButton(layoutWidget);
        teaRadioButton->setObjectName(QStringLiteral("teaRadioButton"));

        horizontalLayout->addWidget(teaRadioButton);


        verticalLayout->addLayout(horizontalLayout);

        birLineEdit = new QLineEdit(layoutWidget);
        birLineEdit->setObjectName(QStringLiteral("birLineEdit"));

        verticalLayout->addWidget(birLineEdit);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "SignUp", 0));
        label_8->setText(QApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:20pt;\">\350\257\267\350\276\223\345\205\245\346\263\250\345\206\214\344\277\241\346\201\257</span></p></body></html>", 0));
        signupPushButton->setText(QApplication::translate("SignUp", "\346\263\250\345\206\214", 0));
        goToLoginPushButton->setText(QApplication::translate("SignUp", "\350\277\224\345\233\236\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("SignUp", "\347\224\250\346\210\267\345\220\215:", 0));
        label_3->setText(QApplication::translate("SignUp", "\346\211\200\345\234\250\345\255\246\351\231\242:", 0));
        label_2->setText(QApplication::translate("SignUp", "Student ID:", 0));
        label_5->setText(QApplication::translate("SignUp", "\346\200\247\345\210\253:", 0));
        label_6->setText(QApplication::translate("SignUp", "\345\257\206\347\240\201:", 0));
        label_9->setText(QApplication::translate("SignUp", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201:", 0));
        label_7->setText(QApplication::translate("SignUp", "\350\272\253\344\273\275\347\261\273\345\236\213:", 0));
        label_4->setText(QApplication::translate("SignUp", "\345\207\272\347\224\237\346\227\245\346\234\237:", 0));
        genderLineEdit->setPlaceholderText(QApplication::translate("SignUp", "boy/girl", 0));
        stuRadioButton->setText(QApplication::translate("SignUp", "Student", 0));
        teaRadioButton->setText(QApplication::translate("SignUp", "Teacher", 0));
        birLineEdit->setPlaceholderText(QApplication::translate("SignUp", "2000/01/00", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

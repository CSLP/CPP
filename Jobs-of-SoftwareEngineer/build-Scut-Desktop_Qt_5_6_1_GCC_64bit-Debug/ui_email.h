/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_email
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QLabel *picLabel;
    QLabel *fromLabel;
    QLabel *themeLabel;
    QLabel *timeLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *email)
    {
        if (email->objectName().isEmpty())
            email->setObjectName(QStringLiteral("email"));
        email->resize(583, 106);
        verticalLayout = new QVBoxLayout(email);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox = new QCheckBox(email);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        picLabel = new QLabel(email);
        picLabel->setObjectName(QStringLiteral("picLabel"));

        horizontalLayout->addWidget(picLabel);

        fromLabel = new QLabel(email);
        fromLabel->setObjectName(QStringLiteral("fromLabel"));

        horizontalLayout->addWidget(fromLabel);

        themeLabel = new QLabel(email);
        themeLabel->setObjectName(QStringLiteral("themeLabel"));
        themeLabel->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        themeLabel->setFont(font);
        themeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(themeLabel);

        timeLabel = new QLabel(email);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        horizontalLayout->addWidget(timeLabel);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 16);
        horizontalLayout->setStretch(4, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        textBrowser = new QTextBrowser(email);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(email);

        QMetaObject::connectSlotsByName(email);
    } // setupUi

    void retranslateUi(QWidget *email)
    {
        email->setWindowTitle(QApplication::translate("email", "Form", 0));
        checkBox->setText(QString());
        picLabel->setText(QApplication::translate("email", "TextLabel", 0));
        fromLabel->setText(QApplication::translate("email", "TextLabel", 0));
        themeLabel->setText(QApplication::translate("email", "TextLabel", 0));
        timeLabel->setText(QApplication::translate("email", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class email: public Ui_email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H

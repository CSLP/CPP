/********************************************************************************
** Form generated from reading UI file 'comment.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENT_H
#define UI_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comment
{
public:
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *comTextBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *showPushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *foldPushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *repTextBrowser;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *sendPushButton;

    void setupUi(QGroupBox *Comment)
    {
        if (Comment->objectName().isEmpty())
            Comment->setObjectName(QStringLiteral("Comment"));
        Comment->resize(968, 690);
        verticalLayout_2 = new QVBoxLayout(Comment);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comTextBrowser = new QTextBrowser(Comment);
        comTextBrowser->setObjectName(QStringLiteral("comTextBrowser"));

        verticalLayout_2->addWidget(comTextBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        showPushButton = new QPushButton(Comment);
        showPushButton->setObjectName(QStringLiteral("showPushButton"));
        QFont font;
        font.setFamily(QStringLiteral("FZSongS-Extended"));
        showPushButton->setFont(font);

        horizontalLayout->addWidget(showPushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        foldPushButton = new QPushButton(Comment);
        foldPushButton->setObjectName(QStringLiteral("foldPushButton"));
        foldPushButton->setFont(font);

        horizontalLayout->addWidget(foldPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        widget = new QWidget(Comment);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        repTextBrowser = new QTextBrowser(widget);
        repTextBrowser->setObjectName(QStringLiteral("repTextBrowser"));

        verticalLayout->addWidget(repTextBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        sendPushButton = new QPushButton(widget);
        sendPushButton->setObjectName(QStringLiteral("sendPushButton"));

        horizontalLayout_2->addWidget(sendPushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(widget);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 4);

        retranslateUi(Comment);

        QMetaObject::connectSlotsByName(Comment);
    } // setupUi

    void retranslateUi(QGroupBox *Comment)
    {
        Comment->setWindowTitle(QApplication::translate("Comment", "GroupBox", 0));
        Comment->setTitle(QApplication::translate("Comment", "GroupBox", 0));
        showPushButton->setText(QApplication::translate("Comment", "\346\230\276\347\244\272\345\233\236\345\244\215", 0));
        foldPushButton->setText(QApplication::translate("Comment", "\346\212\230\345\217\240\345\233\236\345\244\215", 0));
        sendPushButton->setText(QApplication::translate("Comment", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class Comment: public Ui_Comment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENT_H

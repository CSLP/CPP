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
#include <QtWidgets/QLabel>
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
    QLineEdit *contentLineEdit;
    QLabel *label;
    QLineEdit *toLineEdit;
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
        contentLineEdit = new QLineEdit(widget);
        contentLineEdit->setObjectName(QStringLiteral("contentLineEdit"));

        horizontalLayout_2->addWidget(contentLineEdit);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("FZHei-B01"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        toLineEdit = new QLineEdit(widget);
        toLineEdit->setObjectName(QStringLiteral("toLineEdit"));

        horizontalLayout_2->addWidget(toLineEdit);

        sendPushButton = new QPushButton(widget);
        sendPushButton->setObjectName(QStringLiteral("sendPushButton"));

        horizontalLayout_2->addWidget(sendPushButton);

        horizontalLayout_2->setStretch(0, 8);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);

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
        label->setText(QApplication::translate("Comment", "\345\233\236\345\244\215:", 0));
        sendPushButton->setText(QApplication::translate("Comment", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Comment: public Ui_Comment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENT_H

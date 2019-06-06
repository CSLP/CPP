/********************************************************************************
** Form generated from reading UI file 'topic.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPIC_H
#define UI_TOPIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Topic
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *showPushButton;
    QPushButton *foldPushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Topic)
    {
        if (Topic->objectName().isEmpty())
            Topic->setObjectName(QStringLiteral("Topic"));
        Topic->resize(1202, 518);
        verticalLayout = new QVBoxLayout(Topic);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Topic);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        showPushButton = new QPushButton(Topic);
        showPushButton->setObjectName(QStringLiteral("showPushButton"));

        horizontalLayout->addWidget(showPushButton);

        foldPushButton = new QPushButton(Topic);
        foldPushButton->setObjectName(QStringLiteral("foldPushButton"));

        horizontalLayout->addWidget(foldPushButton);

        horizontalLayout->setStretch(0, 9);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(Topic);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1182, 458));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Topic);

        QMetaObject::connectSlotsByName(Topic);
    } // setupUi

    void retranslateUi(QWidget *Topic)
    {
        Topic->setWindowTitle(QApplication::translate("Topic", "Form", 0));
        label->setText(QApplication::translate("Topic", "TextLabel", 0));
        showPushButton->setText(QApplication::translate("Topic", "Show", 0));
        foldPushButton->setText(QApplication::translate("Topic", "Fold", 0));
    } // retranslateUi

};

namespace Ui {
    class Topic: public Ui_Topic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPIC_H

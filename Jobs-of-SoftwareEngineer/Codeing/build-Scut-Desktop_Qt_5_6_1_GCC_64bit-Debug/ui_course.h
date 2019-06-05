/********************************************************************************
** Form generated from reading UI file 'course.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_H
#define UI_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Course
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextBrowser *homTextBrowser;
    QPushButton *submitPushButton;
    QPushButton *backPushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *teaTextBrowser;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextBrowser *corTextBrowser;
    QWidget *discussTab;
    QWidget *resourceTab;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QListView *listView;

    void setupUi(QDialog *Course)
    {
        if (Course->objectName().isEmpty())
            Course->setObjectName(QStringLiteral("Course"));
        Course->resize(1154, 672);
        horizontalLayout = new QHBoxLayout(Course);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(Course);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        verticalLayoutWidget_3 = new QWidget(homeTab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(100, 320, 991, 201));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        homTextBrowser = new QTextBrowser(verticalLayoutWidget_3);
        homTextBrowser->setObjectName(QStringLiteral("homTextBrowser"));

        verticalLayout_3->addWidget(homTextBrowser);

        submitPushButton = new QPushButton(homeTab);
        submitPushButton->setObjectName(QStringLiteral("submitPushButton"));
        submitPushButton->setGeometry(QRect(260, 580, 211, 32));
        backPushButton = new QPushButton(homeTab);
        backPushButton->setObjectName(QStringLiteral("backPushButton"));
        backPushButton->setGeometry(QRect(750, 590, 120, 32));
        layoutWidget = new QWidget(homeTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 43, 991, 271));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(50);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        teaTextBrowser = new QTextBrowser(layoutWidget);
        teaTextBrowser->setObjectName(QStringLiteral("teaTextBrowser"));

        verticalLayout->addWidget(teaTextBrowser);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        corTextBrowser = new QTextBrowser(layoutWidget);
        corTextBrowser->setObjectName(QStringLiteral("corTextBrowser"));

        verticalLayout_2->addWidget(corTextBrowser);


        horizontalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(homeTab, QString());
        discussTab = new QWidget();
        discussTab->setObjectName(QStringLiteral("discussTab"));
        tabWidget->addTab(discussTab, QString());
        resourceTab = new QWidget();
        resourceTab->setObjectName(QStringLiteral("resourceTab"));
        listWidget = new QListWidget(resourceTab);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 140, 461, 321));
        pushButton = new QPushButton(resourceTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 220, 120, 32));
        listView = new QListView(resourceTab);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(800, 130, 301, 291));
        tabWidget->addTab(resourceTab, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(Course);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Course);
    } // setupUi

    void retranslateUi(QDialog *Course)
    {
        Course->setWindowTitle(QApplication::translate("Course", "Dialog", 0));
        label_3->setText(QApplication::translate("Course", "Homework", 0));
        submitPushButton->setText(QApplication::translate("Course", "SubmitHomework", 0));
        backPushButton->setText(QApplication::translate("Course", "Back", 0));
        label->setText(QApplication::translate("Course", "TeacherInformation", 0));
        teaTextBrowser->setHtml(QApplication::translate("Course", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">fdjlk;kjffkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkjflkjsjdfafds</p></body></html>", 0));
        label_2->setText(QApplication::translate("Course", "CourseInformation", 0));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("Course", "Home", 0));
        tabWidget->setTabText(tabWidget->indexOf(discussTab), QApplication::translate("Course", "Discussion", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Course", "New Itemffff", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("Course", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(resourceTab), QApplication::translate("Course", "Resource", 0));
    } // retranslateUi

};

namespace Ui {
    class Course: public Ui_Course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_H

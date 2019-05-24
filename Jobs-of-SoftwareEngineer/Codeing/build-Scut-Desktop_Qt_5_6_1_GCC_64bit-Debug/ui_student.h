/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QListView *listView;
    QPushButton *loginAgainPushButton;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QListView *listView_2;
    QLabel *label_2;
    QWidget *courseTab;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *forumTab;
    QHBoxLayout *horizontalLayout_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QStringLiteral("Student"));
        Student->resize(1159, 678);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Student->sizePolicy().hasHeightForWidth());
        Student->setSizePolicy(sizePolicy);
        Student->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(Student);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        listView = new QListView(homeTab);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 90, 241, 341));
        loginAgainPushButton = new QPushButton(homeTab);
        loginAgainPushButton->setObjectName(QStringLiteral("loginAgainPushButton"));
        loginAgainPushButton->setGeometry(QRect(90, 480, 115, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginAgainPushButton->sizePolicy().hasHeightForWidth());
        loginAgainPushButton->setSizePolicy(sizePolicy1);
        loginAgainPushButton->setMinimumSize(QSize(30, 0));
        loginAgainPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginAgainPushButton->setLayoutDirection(Qt::LeftToRight);
        loginAgainPushButton->setAutoFillBackground(false);
        calendarWidget = new QCalendarWidget(homeTab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(830, 90, 231, 221));
        label = new QLabel(homeTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 171, 22));
        listView_2 = new QListView(homeTab);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(400, 80, 256, 331));
        label_2 = new QLabel(homeTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(470, 60, 85, 22));
        tabWidget->addTab(homeTab, QString());
        courseTab = new QWidget();
        courseTab->setObjectName(QStringLiteral("courseTab"));
        label_3 = new QLabel(courseTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 50, 211, 121));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_4 = new QLabel(courseTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 110, 131, 51));
        label_4->setScaledContents(true);
        label_5 = new QLabel(courseTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(850, 90, 85, 22));
        label_6 = new QLabel(courseTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 380, 85, 22));
        label_7 = new QLabel(courseTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(500, 270, 85, 22));
        label_8 = new QLabel(courseTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(880, 280, 85, 22));
        pushButton = new QPushButton(courseTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 120, 32));
        pushButton_2 = new QPushButton(courseTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 170, 120, 32));
        pushButton_3 = new QPushButton(courseTab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(900, 180, 120, 32));
        pushButton_4 = new QPushButton(courseTab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 460, 120, 32));
        pushButton_5 = new QPushButton(courseTab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 350, 120, 32));
        pushButton_6 = new QPushButton(courseTab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(920, 360, 120, 32));
        tabWidget->addTab(courseTab, QString());
        forumTab = new QWidget();
        forumTab->setObjectName(QStringLiteral("forumTab"));
        horizontalLayout_2 = new QHBoxLayout(forumTab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget->addTab(forumTab, QString());

        horizontalLayout->addWidget(tabWidget);

        Student->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Student);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1159, 30));
        Student->setMenuBar(menubar);
        statusbar = new QStatusBar(Student);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Student->setStatusBar(statusbar);

        retranslateUi(Student);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QMainWindow *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "MainWindow", 0));
        loginAgainPushButton->setText(QApplication::translate("Student", "LoginAgain", 0));
        label->setText(QApplication::translate("Student", "Information", 0));
        label_2->setText(QApplication::translate("Student", "Bulletin", 0));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("Student", "Home", 0));
        label_3->setText(QApplication::translate("Student", "<html><head/><body><p><img src=\":/image/1.png\"/></p></body></html>", 0));
        label_4->setText(QApplication::translate("Student", "TextLabel", 0));
        label_5->setText(QApplication::translate("Student", "TextLabel", 0));
        label_6->setText(QApplication::translate("Student", "TextLabel", 0));
        label_7->setText(QApplication::translate("Student", "TextLabel", 0));
        label_8->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Student", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("Student", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("Student", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("Student", "PushButton", 0));
        pushButton_5->setText(QApplication::translate("Student", "PushButton", 0));
        pushButton_6->setText(QApplication::translate("Student", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(courseTab), QApplication::translate("Student", "Courses", 0));
        tabWidget->setTabText(tabWidget->indexOf(forumTab), QApplication::translate("Student", "Forum", 0));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

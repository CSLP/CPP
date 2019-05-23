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
    QWidget *tab;
    QListView *listView;
    QPushButton *loginAgainPushButton;
    QCalendarWidget *calendarWidget;
    QWidget *tab_2;
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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listView = new QListView(tab);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(50, 260, 256, 220));
        loginAgainPushButton = new QPushButton(tab);
        loginAgainPushButton->setObjectName(QStringLiteral("loginAgainPushButton"));
        loginAgainPushButton->setGeometry(QRect(80, 380, 115, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginAgainPushButton->sizePolicy().hasHeightForWidth());
        loginAgainPushButton->setSizePolicy(sizePolicy1);
        loginAgainPushButton->setMinimumSize(QSize(30, 0));
        loginAgainPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginAgainPushButton->setLayoutDirection(Qt::LeftToRight);
        loginAgainPushButton->setAutoFillBackground(false);
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(659, 37, 231, 221));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QMainWindow *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "MainWindow", 0));
        loginAgainPushButton->setText(QApplication::translate("Student", "LoginAgain", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Student", "Home", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Student", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

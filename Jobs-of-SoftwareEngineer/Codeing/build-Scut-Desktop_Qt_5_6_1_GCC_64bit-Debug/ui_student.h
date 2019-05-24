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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QPushButton *loginAgainPushButton;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QWidget *courseTab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QLabel *label11;
    QPushButton *pushButton1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label2;
    QLabel *label22;
    QPushButton *pushButton2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label3;
    QLabel *label33;
    QPushButton *pushButton3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label4;
    QLabel *label44;
    QPushButton *pushButton4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label5;
    QLabel *label55;
    QPushButton *pushButton5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label6;
    QLabel *label66;
    QPushButton *pushButton6;
    QWidget *forumTab;
    QHBoxLayout *horizontalLayout_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QStringLiteral("Student"));
        Student->resize(1186, 712);
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
        tabWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
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
        label_2 = new QLabel(homeTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(470, 60, 85, 22));
        listWidget = new QListWidget(homeTab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 90, 256, 351));
        listWidget_2 = new QListWidget(homeTab);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(390, 100, 256, 341));
        tabWidget->addTab(homeTab, QString());
        courseTab = new QWidget();
        courseTab->setObjectName(QStringLiteral("courseTab"));
        gridLayout = new QGridLayout(courseTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setVerticalSpacing(20);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label1 = new QLabel(courseTab);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setScaledContents(false);
        label1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label1);

        label11 = new QLabel(courseTab);
        label11->setObjectName(QStringLiteral("label11"));
        label11->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label11);

        pushButton1 = new QPushButton(courseTab);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));

        verticalLayout->addWidget(pushButton1);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label2 = new QLabel(courseTab);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setScaledContents(false);
        label2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label2);

        label22 = new QLabel(courseTab);
        label22->setObjectName(QStringLiteral("label22"));
        label22->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label22);

        pushButton2 = new QPushButton(courseTab);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));

        verticalLayout_2->addWidget(pushButton2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label3 = new QLabel(courseTab);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setScaledContents(false);
        label3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label3);

        label33 = new QLabel(courseTab);
        label33->setObjectName(QStringLiteral("label33"));
        label33->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label33);

        pushButton3 = new QPushButton(courseTab);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));

        verticalLayout_3->addWidget(pushButton3);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label4 = new QLabel(courseTab);
        label4->setObjectName(QStringLiteral("label4"));
        label4->setScaledContents(false);
        label4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label4);

        label44 = new QLabel(courseTab);
        label44->setObjectName(QStringLiteral("label44"));
        label44->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label44);

        pushButton4 = new QPushButton(courseTab);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));

        verticalLayout_4->addWidget(pushButton4);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label5 = new QLabel(courseTab);
        label5->setObjectName(QStringLiteral("label5"));
        label5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label5);

        label55 = new QLabel(courseTab);
        label55->setObjectName(QStringLiteral("label55"));
        label55->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label55);

        pushButton5 = new QPushButton(courseTab);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));

        verticalLayout_5->addWidget(pushButton5);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label6 = new QLabel(courseTab);
        label6->setObjectName(QStringLiteral("label6"));
        label6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label6);

        label66 = new QLabel(courseTab);
        label66->setObjectName(QStringLiteral("label66"));
        label66->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label66);

        pushButton6 = new QPushButton(courseTab);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));

        verticalLayout_6->addWidget(pushButton6);


        gridLayout->addLayout(verticalLayout_6, 1, 2, 1, 1);

        tabWidget->addTab(courseTab, QString());
        label44->raise();
        forumTab = new QWidget();
        forumTab->setObjectName(QStringLiteral("forumTab"));
        horizontalLayout_2 = new QHBoxLayout(forumTab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget->addTab(forumTab, QString());

        horizontalLayout->addWidget(tabWidget);

        Student->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Student);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1186, 30));
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
        label1->setText(QApplication::translate("Student", "<html><head/><body><p><img src=\":/image/1.png\"/></p></body></html>", 0));
        label11->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton1->setText(QApplication::translate("Student", "PushButton", 0));
        label2->setText(QApplication::translate("Student", "TextLabel", 0));
        label22->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton2->setText(QApplication::translate("Student", "PushButton", 0));
        label3->setText(QApplication::translate("Student", "TextLabel", 0));
        label33->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton3->setText(QApplication::translate("Student", "PushButton", 0));
        label4->setText(QApplication::translate("Student", "TextLabel", 0));
        label44->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton4->setText(QApplication::translate("Student", "PushButton", 0));
        label5->setText(QApplication::translate("Student", "TextLabel", 0));
        label55->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton5->setText(QApplication::translate("Student", "PushButton", 0));
        label6->setText(QApplication::translate("Student", "TextLabel", 0));
        label66->setText(QApplication::translate("Student", "TextLabel", 0));
        pushButton6->setText(QApplication::translate("Student", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(courseTab), QApplication::translate("Student", "Courses", 0));
        tabWidget->setTabText(tabWidget->indexOf(forumTab), QApplication::translate("Student", "Forum", 0));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

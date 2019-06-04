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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *labela;
    QListWidget *listWidget1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelb;
    QListWidget *listWidget2;
    QPushButton *loginAgainPushButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
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
        verticalLayoutWidget = new QWidget(homeTab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 251, 501));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labela = new QLabel(verticalLayoutWidget);
        labela->setObjectName(QStringLiteral("labela"));
        QFont font;
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        labela->setFont(font);
        labela->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(labela);

        listWidget1 = new QListWidget(verticalLayoutWidget);
        listWidget1->setObjectName(QStringLiteral("listWidget1"));

        verticalLayout_7->addWidget(listWidget1);

        verticalLayoutWidget_2 = new QWidget(homeTab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(270, 10, 531, 521));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelb = new QLabel(verticalLayoutWidget_2);
        labelb->setObjectName(QStringLiteral("labelb"));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        labelb->setFont(font1);
        labelb->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(labelb);

        listWidget2 = new QListWidget(verticalLayoutWidget_2);
        listWidget2->setObjectName(QStringLiteral("listWidget2"));

        verticalLayout_8->addWidget(listWidget2);

        loginAgainPushButton = new QPushButton(homeTab);
        loginAgainPushButton->setObjectName(QStringLiteral("loginAgainPushButton"));
        loginAgainPushButton->setGeometry(QRect(460, 550, 115, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginAgainPushButton->sizePolicy().hasHeightForWidth());
        loginAgainPushButton->setSizePolicy(sizePolicy1);
        loginAgainPushButton->setMinimumSize(QSize(30, 0));
        loginAgainPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginAgainPushButton->setLayoutDirection(Qt::LeftToRight);
        loginAgainPushButton->setAutoFillBackground(false);
        verticalLayoutWidget_3 = new QWidget(homeTab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(820, 10, 311, 521));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label);

        textBrowser = new QTextBrowser(verticalLayoutWidget_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_9->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(verticalLayoutWidget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_9->addLayout(horizontalLayout_2);

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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QMainWindow *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "MainWindow", 0));
        labela->setText(QApplication::translate("Student", "Information", 0));
        labelb->setText(QApplication::translate("Student", "Bulletin", 0));
        loginAgainPushButton->setText(QApplication::translate("Student", "LoginAgain", 0));
        label->setText(QApplication::translate("Student", "Discussion", 0));
        pushButton->setText(QApplication::translate("Student", "Send", 0));
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
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

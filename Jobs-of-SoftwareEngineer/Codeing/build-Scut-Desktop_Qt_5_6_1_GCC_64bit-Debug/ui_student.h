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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
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
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelb;
    QListWidget *listWidget2;
    QVBoxLayout *verticalLayout_7;
    QLabel *labela;
    QListWidget *listWidget1;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginAgainPushButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page1;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QWidget *page2;
    QWidget *page3;
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
        horizontalLayout_6 = new QHBoxLayout(homeTab);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, -1, -1, -1);
        labelb = new QLabel(homeTab);
        labelb->setObjectName(QStringLiteral("labelb"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        labelb->setFont(font);
        labelb->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(labelb);

        listWidget2 = new QListWidget(homeTab);
        listWidget2->setObjectName(QStringLiteral("listWidget2"));

        verticalLayout_8->addWidget(listWidget2);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, 0, -1);
        labela = new QLabel(homeTab);
        labela->setObjectName(QStringLiteral("labela"));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        labela->setFont(font1);
        labela->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(labela);

        listWidget1 = new QListWidget(homeTab);
        listWidget1->setObjectName(QStringLiteral("listWidget1"));

        verticalLayout_7->addWidget(listWidget1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        loginAgainPushButton = new QPushButton(homeTab);
        loginAgainPushButton->setObjectName(QStringLiteral("loginAgainPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginAgainPushButton->sizePolicy().hasHeightForWidth());
        loginAgainPushButton->setSizePolicy(sizePolicy1);
        loginAgainPushButton->setMinimumSize(QSize(30, 0));
        loginAgainPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginAgainPushButton->setLayoutDirection(Qt::LeftToRight);
        loginAgainPushButton->setAutoFillBackground(false);

        horizontalLayout_5->addWidget(loginAgainPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_10->addLayout(verticalLayout_7);


        horizontalLayout_6->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label = new QLabel(homeTab);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(30);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label);

        toolBox = new QToolBox(homeTab);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        page1->setGeometry(QRect(0, 0, 758, 363));
        horizontalLayout_4 = new QHBoxLayout(page1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        scrollArea = new QScrollArea(page1);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -660, 1000, 1000));
        scrollAreaWidgetContents->setMinimumSize(QSize(1000, 1000));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 640, 256, 192));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 420, 256, 192));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);

        toolBox->addItem(page1, QString::fromUtf8("\347\254\254\344\270\200\351\242\230\346\200\216\344\271\210\345\201\232"));
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        page2->setGeometry(QRect(0, 0, 758, 363));
        toolBox->addItem(page2, QString::fromUtf8("\347\254\254\344\272\214\351\242\230\346\200\216\344\271\210\345\201\232"));
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        toolBox->addItem(page3, QStringLiteral("Page"));

        verticalLayout_9->addWidget(toolBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(homeTab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(homeTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_9->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_9);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
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
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QMainWindow *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "MainWindow", 0));
        labelb->setText(QApplication::translate("Student", "Bulletin", 0));
        labela->setText(QApplication::translate("Student", "Information", 0));
        loginAgainPushButton->setText(QApplication::translate("Student", "LoginAgain", 0));
        label->setText(QApplication::translate("Student", "Discussion", 0));
        toolBox->setItemText(toolBox->indexOf(page1), QApplication::translate("Student", "\347\254\254\344\270\200\351\242\230\346\200\216\344\271\210\345\201\232", 0));
        toolBox->setItemText(toolBox->indexOf(page2), QApplication::translate("Student", "\347\254\254\344\272\214\351\242\230\346\200\216\344\271\210\345\201\232", 0));
        toolBox->setItemText(toolBox->indexOf(page3), QApplication::translate("Student", "Page", 0));
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

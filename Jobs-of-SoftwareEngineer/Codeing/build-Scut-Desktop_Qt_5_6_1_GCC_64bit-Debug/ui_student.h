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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
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
    QPushButton *modifyPushButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QWidget *page_2;
    QLabel *label_3;
    QWidget *page_3;
    QLabel *label_4;
    QWidget *page_4;
    QLabel *label_5;
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

        modifyPushButton = new QPushButton(homeTab);
        modifyPushButton->setObjectName(QStringLiteral("modifyPushButton"));

        horizontalLayout_5->addWidget(modifyPushButton);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_10->setStretch(0, 2);
        verticalLayout_10->setStretch(1, 3);

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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listWidget = new QListWidget(homeTab);
        QFont font3;
        font3.setFamily(QStringLiteral("FZKai-Z03"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font3);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font3);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font3);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font3);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        stackedWidget = new QStackedWidget(homeTab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 100, 201, 71));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 160, 241, 111));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 250, 161, 71));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 220, 85, 22));
        stackedWidget->addWidget(page_4);
        label_5->raise();
        listWidget->raise();

        horizontalLayout_2->addWidget(stackedWidget);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

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
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QMainWindow *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "MainWindow", 0));
        labelb->setText(QApplication::translate("Student", "Bulletin", 0));
        labela->setText(QApplication::translate("Student", "Information", 0));
        loginAgainPushButton->setText(QApplication::translate("Student", "LoginAgain", 0));
        modifyPushButton->setText(QApplication::translate("Student", "ModifyInfo", 0));
        label->setText(QApplication::translate("Student", "Email", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Student", "\345\206\231\344\277\241", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Student", "\346\224\266\344\273\266\347\256\261", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Student", "\350\215\211\347\250\277\347\256\261", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Student", "\346\234\252\350\257\273\351\202\256\344\273\266", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("Student", "Write", 0));
        label_3->setText(QApplication::translate("Student", "accept", 0));
        label_4->setText(QApplication::translate("Student", "draft", 0));
        label_5->setText(QApplication::translate("Student", "to read", 0));
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

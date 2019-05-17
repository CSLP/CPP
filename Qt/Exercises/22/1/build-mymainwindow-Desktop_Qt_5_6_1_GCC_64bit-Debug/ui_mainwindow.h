/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *actionNewFile_N_2;
    QAction *actionFrtr;
    QAction *actionDisplay;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuF;
    QMenu *menuDisplayDocker;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1071, 572);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/\357\274\221.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon);
        actionNewFile_N_2 = new QAction(MainWindow);
        actionNewFile_N_2->setObjectName(QStringLiteral("actionNewFile_N_2"));
        actionFrtr = new QAction(MainWindow);
        actionFrtr->setObjectName(QStringLiteral("actionFrtr"));
        actionDisplay = new QAction(MainWindow);
        actionDisplay->setObjectName(QStringLiteral("actionDisplay"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        horizontalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1071, 30));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuF = new QMenu(menuBar);
        menuF->setObjectName(QStringLiteral("menuF"));
        menuDisplayDocker = new QMenu(menuBar);
        menuDisplayDocker->setObjectName(QStringLiteral("menuDisplayDocker"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fontComboBox = new QFontComboBox(widget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        verticalLayout->addWidget(fontComboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        dockWidget->setWidget(widget);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuF->menuAction());
        menuBar->addAction(menuDisplayDocker->menuAction());
        menuFile->addAction(actionNewFile_N_2);
        menuFile->addSeparator();
        menuDisplayDocker->addAction(actionDisplay);
        mainToolBar->addAction(action_New);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFrtr);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_New->setText(QApplication::translate("MainWindow", "NewFile(&N)", 0));
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionNewFile_N_2->setText(QApplication::translate("MainWindow", "NewFile(&N)", 0));
        actionFrtr->setText(QApplication::translate("MainWindow", "frtr", 0));
        actionDisplay->setText(QApplication::translate("MainWindow", "Display", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File(&F)", 0));
        menuF->setTitle(QApplication::translate("MainWindow", "f", 0));
        menuDisplayDocker->setTitle(QApplication::translate("MainWindow", "DisplayDocker", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "ToolBox", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

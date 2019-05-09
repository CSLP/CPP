/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QDial *dial;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QSpinBox *spinBox;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(1112, 551);
        dial = new QDial(MyWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(280, 80, 241, 141));
        dial->setWrapping(true);
        dial->setNotchesVisible(true);
        horizontalScrollBar = new QScrollBar(MyWidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(100, 300, 851, 41));
        horizontalScrollBar->setMaximum(200);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(MyWidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(120, 370, 831, 171));
        verticalScrollBar->setFocusPolicy(Qt::StrongFocus);
        verticalScrollBar->setMaximum(200);
        verticalScrollBar->setValue(10);
        verticalScrollBar->setOrientation(Qt::Horizontal);
        horizontalSlider = new QSlider(MyWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(640, 380, 431, 131));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(MyWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(500, 0, 41, 541));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::NoTicks);
        spinBox = new QSpinBox(MyWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(700, 150, 211, 81));

        retranslateUi(MyWidget);
        QObject::connect(dial, SIGNAL(sliderMoved(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), horizontalScrollBar, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), verticalScrollBar, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), verticalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

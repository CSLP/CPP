/********************************************************************************
** Form generated from reading UI file 'myclock.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLOCK_H
#define UI_MYCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClock
{
public:

    void setupUi(QWidget *MyClock)
    {
        if (MyClock->objectName().isEmpty())
            MyClock->setObjectName(QStringLiteral("MyClock"));
        MyClock->resize(573, 468);

        retranslateUi(MyClock);

        QMetaObject::connectSlotsByName(MyClock);
    } // setupUi

    void retranslateUi(QWidget *MyClock)
    {
        MyClock->setWindowTitle(QApplication::translate("MyClock", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class MyClock: public Ui_MyClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLOCK_H

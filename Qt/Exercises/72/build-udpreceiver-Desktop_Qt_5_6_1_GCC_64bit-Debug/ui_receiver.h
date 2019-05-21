/********************************************************************************
** Form generated from reading UI file 'receiver.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVER_H
#define UI_RECEIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Receiver
{
public:
    QLabel *label;

    void setupUi(QDialog *Receiver)
    {
        if (Receiver->objectName().isEmpty())
            Receiver->setObjectName(QStringLiteral("Receiver"));
        Receiver->resize(1055, 664);
        label = new QLabel(Receiver);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 190, 441, 151));

        retranslateUi(Receiver);

        QMetaObject::connectSlotsByName(Receiver);
    } // setupUi

    void retranslateUi(QDialog *Receiver)
    {
        Receiver->setWindowTitle(QApplication::translate("Receiver", "Receiver", 0));
        label->setText(QApplication::translate("Receiver", "Waiting receiving data!", 0));
    } // retranslateUi

};

namespace Ui {
    class Receiver: public Ui_Receiver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVER_H

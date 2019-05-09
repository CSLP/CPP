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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameNLabel;
    QLabel *sexSLabel;
    QComboBox *sexSComboBox;
    QLabel *oldALabel;
    QSpinBox *oldASpinBox;
    QLabel *emailMLabel;
    QLineEdit *emailMLineEdit;
    QLineEdit *nameNLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(500, 578);
        MyWidget->setMinimumSize(QSize(200, 150));
        MyWidget->setMaximumSize(QSize(500, 904));
        verticalLayout = new QVBoxLayout(MyWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 20);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameNLabel = new QLabel(MyWidget);
        nameNLabel->setObjectName(QStringLiteral("nameNLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameNLabel);

        sexSLabel = new QLabel(MyWidget);
        sexSLabel->setObjectName(QStringLiteral("sexSLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sexSLabel);

        sexSComboBox = new QComboBox(MyWidget);
        sexSComboBox->setObjectName(QStringLiteral("sexSComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sexSComboBox);

        oldALabel = new QLabel(MyWidget);
        oldALabel->setObjectName(QStringLiteral("oldALabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, oldALabel);

        oldASpinBox = new QSpinBox(MyWidget);
        oldASpinBox->setObjectName(QStringLiteral("oldASpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, oldASpinBox);

        emailMLabel = new QLabel(MyWidget);
        emailMLabel->setObjectName(QStringLiteral("emailMLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, emailMLabel);

        emailMLineEdit = new QLineEdit(MyWidget);
        emailMLineEdit->setObjectName(QStringLiteral("emailMLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, emailMLineEdit);

        nameNLineEdit = new QLineEdit(MyWidget);
        nameNLineEdit->setObjectName(QStringLiteral("nameNLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameNLineEdit->sizePolicy().hasHeightForWidth());
        nameNLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameNLineEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 600, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(MyWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCheckable(true);

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(MyWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

#ifndef QT_NO_SHORTCUT
        nameNLabel->setBuddy(nameNLineEdit);
        sexSLabel->setBuddy(sexSComboBox);
        oldALabel->setBuddy(oldASpinBox);
        emailMLabel->setBuddy(emailMLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        nameNLabel->setText(QApplication::translate("MyWidget", "Name(&N)", 0));
        sexSLabel->setText(QApplication::translate("MyWidget", "Sex(&S)", 0));
        oldALabel->setText(QApplication::translate("MyWidget", "Old(&A)", 0));
        emailMLabel->setText(QApplication::translate("MyWidget", "Email Address(&M)", 0));
        pushButton->setText(QApplication::translate("MyWidget", "DisplayExtendedWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

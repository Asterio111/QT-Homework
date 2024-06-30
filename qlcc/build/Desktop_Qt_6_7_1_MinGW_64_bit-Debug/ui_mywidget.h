/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *good;
    QRadioButton *soso;
    QRadioButton *bad;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *choice1;
    QComboBox *choice2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(800, 600);
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 70, 101, 121));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 75, 64));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        good = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(MyWidget);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(good);
        good->setObjectName("good");

        verticalLayout->addWidget(good);

        soso = new QRadioButton(layoutWidget);
        buttonGroup->addButton(soso);
        soso->setObjectName("soso");

        verticalLayout->addWidget(soso);

        bad = new QRadioButton(layoutWidget);
        buttonGroup->addButton(bad);
        bad->setObjectName("bad");

        verticalLayout->addWidget(bad);

        layoutWidget1 = new QWidget(MyWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 220, 181, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        choice1 = new QComboBox(MyWidget);
        choice1->setObjectName("choice1");
        choice1->setGeometry(QRect(360, 90, 62, 22));
        choice2 = new QComboBox(MyWidget);
        choice2->setObjectName("choice2");
        choice2->setGeometry(QRect(360, 130, 62, 22));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MyWidget", "\346\202\250\344\273\212\345\244\251\345\277\203\346\203\205\346\200\216\344\271\210\346\240\267\357\274\237", nullptr));
        good->setText(QCoreApplication::translate("MyWidget", "\345\276\210\345\245\275", nullptr));
        soso->setText(QCoreApplication::translate("MyWidget", "\344\270\200\350\210\254", nullptr));
        bad->setText(QCoreApplication::translate("MyWidget", "\344\270\215\345\244\252\345\245\275", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

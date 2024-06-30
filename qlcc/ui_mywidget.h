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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
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
    QTextBrowser *textBrowser;
    QLabel *label;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(508, 544);
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 170, 181, 121));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 75, 85));
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
        layoutWidget1->setGeometry(QRect(60, 410, 371, 101));
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
        choice1->setGeometry(QRect(270, 210, 62, 22));
        choice2 = new QComboBox(MyWidget);
        choice2->setObjectName("choice2");
        choice2->setGeometry(QRect(380, 210, 62, 22));
        textBrowser = new QTextBrowser(MyWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(110, 30, 256, 101));
        label = new QLabel(MyWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 170, 181, 19));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MyWidget", "\346\226\260\347\232\204\344\270\200\345\244\251\357\274\214\346\204\237\350\247\211\345\246\202\344\275\225\357\274\237", nullptr));
        good->setText(QCoreApplication::translate("MyWidget", "\345\276\210\345\245\275", nullptr));
        soso->setText(QCoreApplication::translate("MyWidget", "\344\270\200\350\210\254", nullptr));
        bad->setText(QCoreApplication::translate("MyWidget", "\344\270\215\345\244\252\345\245\275", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\345\274\200\345\220\257\344\273\212\345\244\251\347\232\204\346\227\205\347\250\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\351\200\200\345\207\272", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MyWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; text-decoration: underline;\">\344\275\240\346\211\200\347\203\255\347\210\261\347\232\204</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-style:italic; text-decoration: underlin"
                        "e;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; text-decoration: underline;\">\344\276\277\346\230\257\344\275\240\347\232\204\347\224\237\346\264\273</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "\350\257\267\351\200\211\346\213\251\346\227\245\347\250\213\347\224\237\346\210\220\346\227\266\351\227\264\345\214\272\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

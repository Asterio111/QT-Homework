/********************************************************************************
** Form generated from reading UI file 'yearsummary.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YEARSUMMARY_H
#define UI_YEARSUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yearSummary
{
public:
    QTextBrowser *title;
    QTextBrowser *content;

    void setupUi(QWidget *yearSummary)
    {
        if (yearSummary->objectName().isEmpty())
            yearSummary->setObjectName("yearSummary");
        yearSummary->resize(471, 530);
        title = new QTextBrowser(yearSummary);
        title->setObjectName("title");
        title->setGeometry(QRect(80, 20, 291, 61));
        content = new QTextBrowser(yearSummary);
        content->setObjectName("content");
        content->setGeometry(QRect(30, 110, 391, 371));

        retranslateUi(yearSummary);

        QMetaObject::connectSlotsByName(yearSummary);
    } // setupUi

    void retranslateUi(QWidget *yearSummary)
    {
        yearSummary->setWindowTitle(QCoreApplication::translate("yearSummary", "Form", nullptr));
        title->setHtml(QCoreApplication::translate("yearSummary", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700; font-style:italic; text-decoration: underline;\">2024\345\271\264\345\272\246\346\212\245\345\221\212</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yearSummary: public Ui_yearSummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YEARSUMMARY_H

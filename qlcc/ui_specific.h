/********************************************************************************
** Form generated from reading UI file 'specific.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFIC_H
#define UI_SPECIFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Specific
{
public:
    QLabel *emotionlabel;
    QLabel *emotion;
    QLabel *song;
    QLabel *songlabel;
    QGroupBox *groupBox;
    QLabel *label8;
    QLabel *label10;
    QLabel *label14;
    QLabel *label16;
    QLabel *label18;
    QLabel *label20;
    QTextEdit *Diary;
    QPushButton *OK_Button;
    QPushButton *Save_Button;
    QCalendarWidget *Calendar;
    QPushButton *pushButton;
    QLabel *DateLabel;
    QPushButton *Pause_Continue;
    QPushButton *pushButton_2;
    QLabel *schedule8;
    QLabel *schedule18;
    QLabel *schedule20;
    QPushButton *volume_down;
    QPushButton *volume_up;
    QLabel *schedule10;
    QLabel *schedule14;
    QLabel *schedule16;

    void setupUi(QWidget *Specific)
    {
        if (Specific->objectName().isEmpty())
            Specific->setObjectName("Specific");
        Specific->resize(1225, 586);
        emotionlabel = new QLabel(Specific);
        emotionlabel->setObjectName("emotionlabel");
        emotionlabel->setGeometry(QRect(50, 50, 121, 31));
        emotion = new QLabel(Specific);
        emotion->setObjectName("emotion");
        emotion->setGeometry(QRect(50, 120, 101, 16));
        song = new QLabel(Specific);
        song->setObjectName("song");
        song->setGeometry(QRect(200, 210, 341, 16));
        songlabel = new QLabel(Specific);
        songlabel->setObjectName("songlabel");
        songlabel->setGeometry(QRect(30, 210, 211, 16));
        groupBox = new QGroupBox(Specific);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 350, 441, 161));
        label8 = new QLabel(groupBox);
        label8->setObjectName("label8");
        label8->setGeometry(QRect(9, 20, 111, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label8->sizePolicy().hasHeightForWidth());
        label8->setSizePolicy(sizePolicy);
        label10 = new QLabel(groupBox);
        label10->setObjectName("label10");
        label10->setGeometry(QRect(9, 40, 111, 20));
        label14 = new QLabel(groupBox);
        label14->setObjectName("label14");
        label14->setGeometry(QRect(9, 60, 111, 20));
        label16 = new QLabel(groupBox);
        label16->setObjectName("label16");
        label16->setGeometry(QRect(9, 80, 111, 20));
        label18 = new QLabel(groupBox);
        label18->setObjectName("label18");
        label18->setGeometry(QRect(9, 100, 111, 20));
        label20 = new QLabel(groupBox);
        label20->setObjectName("label20");
        label20->setGeometry(QRect(9, 120, 111, 20));
        Diary = new QTextEdit(Specific);
        Diary->setObjectName("Diary");
        Diary->setGeometry(QRect(500, 90, 301, 411));
        OK_Button = new QPushButton(Specific);
        OK_Button->setObjectName("OK_Button");
        OK_Button->setGeometry(QRect(930, 430, 131, 21));
        Save_Button = new QPushButton(Specific);
        Save_Button->setObjectName("Save_Button");
        Save_Button->setGeometry(QRect(680, 460, 111, 21));
        Calendar = new QCalendarWidget(Specific);
        Calendar->setObjectName("Calendar");
        Calendar->setGeometry(QRect(840, 150, 311, 271));
        pushButton = new QPushButton(Specific);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(990, 550, 151, 21));
        DateLabel = new QLabel(Specific);
        DateLabel->setObjectName("DateLabel");
        DateLabel->setGeometry(QRect(600, 20, 101, 61));
        QFont font;
        font.setPointSize(14);
        DateLabel->setFont(font);
        Pause_Continue = new QPushButton(Specific);
        Pause_Continue->setObjectName("Pause_Continue");
        Pause_Continue->setGeometry(QRect(150, 250, 101, 41));
        pushButton_2 = new QPushButton(Specific);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(950, 20, 181, 51));
        schedule8 = new QLabel(Specific);
        schedule8->setObjectName("schedule8");
        schedule8->setGeometry(QRect(130, 370, 311, 20));
        schedule18 = new QLabel(Specific);
        schedule18->setObjectName("schedule18");
        schedule18->setGeometry(QRect(130, 450, 350, 20));
        schedule20 = new QLabel(Specific);
        schedule20->setObjectName("schedule20");
        schedule20->setGeometry(QRect(130, 470, 350, 20));
        volume_down = new QPushButton(Specific);
        volume_down->setObjectName("volume_down");
        volume_down->setGeometry(QRect(30, 250, 101, 41));
        volume_up = new QPushButton(Specific);
        volume_up->setObjectName("volume_up");
        volume_up->setGeometry(QRect(270, 250, 101, 41));
        schedule10 = new QLabel(Specific);
        schedule10->setObjectName("schedule10");
        schedule10->setGeometry(QRect(130, 390, 350, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(schedule10->sizePolicy().hasHeightForWidth());
        schedule10->setSizePolicy(sizePolicy1);
        schedule14 = new QLabel(Specific);
        schedule14->setObjectName("schedule14");
        schedule14->setGeometry(QRect(130, 410, 350, 20));
        schedule16 = new QLabel(Specific);
        schedule16->setObjectName("schedule16");
        schedule16->setGeometry(QRect(130, 430, 350, 20));

        retranslateUi(Specific);

        QMetaObject::connectSlotsByName(Specific);
    } // setupUi

    void retranslateUi(QWidget *Specific)
    {
        Specific->setWindowTitle(QCoreApplication::translate("Specific", "Form", nullptr));
        emotionlabel->setText(QCoreApplication::translate("Specific", "\346\202\250\344\273\212\345\244\251\347\232\204\345\277\203\346\203\205\346\230\257\357\274\232", nullptr));
        emotion->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        song->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        songlabel->setText(QCoreApplication::translate("Specific", "\346\202\250\345\217\257\344\273\245\345\260\235\350\257\225\345\220\254\345\220\254\350\277\231\351\246\226\346\255\214\357\274\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Specific", "\346\202\250\344\273\212\345\244\251\347\232\204\351\232\217\346\234\272\346\227\245\347\250\213\347\224\237\346\210\220\345\246\202\344\270\213", nullptr));
        label8->setText(QCoreApplication::translate("Specific", "08\357\274\23200-10\357\274\23200", nullptr));
        label10->setText(QCoreApplication::translate("Specific", "10\357\274\23200-12\357\274\23200", nullptr));
        label14->setText(QCoreApplication::translate("Specific", "14\357\274\23200-16\357\274\23200", nullptr));
        label16->setText(QCoreApplication::translate("Specific", "16\357\274\23200-18\357\274\23200", nullptr));
        label18->setText(QCoreApplication::translate("Specific", "18\357\274\23200-20\357\274\23200", nullptr));
        label20->setText(QCoreApplication::translate("Specific", "20\357\274\23200-22\357\274\23200", nullptr));
        OK_Button->setText(QCoreApplication::translate("Specific", "\351\200\211\346\213\251", nullptr));
        Save_Button->setText(QCoreApplication::translate("Specific", "\344\277\235\345\255\230", nullptr));
        pushButton->setText(QCoreApplication::translate("Specific", "\351\200\200\345\207\272", nullptr));
        DateLabel->setText(QCoreApplication::translate("Specific", "\346\257\217\346\227\245\345\260\217\350\256\260", nullptr));
        Pause_Continue->setText(QCoreApplication::translate("Specific", "\346\232\202\345\201\234/\347\273\247\347\273\255", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Specific", "\347\224\237\346\210\220\345\271\264\345\272\246\346\200\273\347\273\223", nullptr));
        schedule8->setText(QCoreApplication::translate("Specific", "\346\227\240", nullptr));
        schedule18->setText(QCoreApplication::translate("Specific", "\346\227\240", nullptr));
        schedule20->setText(QCoreApplication::translate("Specific", "\346\227\240", nullptr));
        volume_down->setText(QCoreApplication::translate("Specific", "\351\237\263\351\207\217 -", nullptr));
        volume_up->setText(QCoreApplication::translate("Specific", "\351\237\263\351\207\217 +", nullptr));
        schedule10->setText(QCoreApplication::translate("Specific", "\346\227\240", nullptr));
        schedule14->setText(QCoreApplication::translate("Specific", "\346\227\240", nullptr));
        schedule16->setText(QCoreApplication::translate("Specific", "\346\227\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Specific: public Ui_Specific {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFIC_H

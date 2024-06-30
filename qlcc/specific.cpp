#include "specific.h"
#include "ui_specific.h"
#include <QRandomGenerator>
#include <QByteArray>
#include "qt2.cpp"
#include <QDebug>
#include <QFile>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QAudioOutput>
#include <QProcess>
#include <yearsummary.h>

Specific::Specific(int emo,QString star,QString en, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Specific)
{
    ui->setupUi(this);
    emotion = emo;
    startt = star;endd = en;
    volume = 5;
    QString ss[3]={"很差","一般","很好"};
    QString inputs[3]={"I am so sad.","I am feeling so-so.","I'm so happy today!"};
    QString songs[3][5]={{"我多想说再见啊","全世界谁倾听你","Season of Gold","阿拉斯加海湾","アンノウン·マザーグース"},
                           {"Arrivederci Signora Luna","青火","入海","Welcome to Wonderland","Champagne Problems"},
                           {"New Boy","ねえねえねえ","Cruel Summer","Swift Swing","恋爱ing"}};
    ui->emotion->setText(ss[emotion]);
    this->setWindowTitle("日历");
    int chp=QRandomGenerator::global()->bounded(5);

    qDebug()<<chp;
    ui->song->setText(songs[emotion][chp]);
    QLabel *pp[6]={ui->schedule8,ui->schedule10,ui->schedule14,ui->schedule16,ui->schedule18,ui->schedule20};
    Specific::song = new QMediaPlayer(this);
    Specific::song->setLoops(-1);
    Specific::output = new QAudioOutput(this);
    Specific::song->setAudioOutput(Specific::output);
    Specific::song->setSource(QUrl::fromLocalFile("./songs/"+ QString::number((2-Specific::emotion)*5+1+chp) +".mp3"));
    Specific::output->setVolume(volume);
    Specific::song->play();

    int startHour = (startt[0].toLatin1() - '0') * 10 + (startt[1].toLatin1() - '0');
    int endHour = (endd[0].toLatin1() - '0') * 10 + (endd[1].toLatin1() - '0');
    ScheduleGenerator generator;
    generator.generateSchedule(startHour, endHour,pp);

    ui->Calendar->setMaximumDate(QDate::currentDate());
    ui->DateLabel->setText(QDate::currentDate().toString("yyyy-MM-dd"));
    ui->Diary->setReadOnly(true);


    //ShellExecute(NULL,_T("open"),_T("\"D:\\Test\\qlcc\\diary\\year_packing.exe\""),)

}

Specific::~Specific()
{
    delete ui;
}


void Specific::on_pushButton_clicked()
{
    if (Specific::song->isPlaying()) Specific::song->stop();
    this->close();
}

void Specific::on_OK_Button_clicked()
{
    QString selected = (ui->Calendar->selectedDate()).toString("yyyy-MM-dd");
    QDate selectedDate = ui->Calendar->selectedDate();
    yearValue = selectedDate.year();

    ui->DateLabel->setText(selected);
    this->current_date = selected;
    QFile file(this->filename+selected+".txt");    
    if (file.exists())
    {
        ui->Diary->setReadOnly(false);
        cu = false;
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->Diary->setText(QString(ba));
        ui->Diary->append("\n"+(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm")+"\n");
    }
    else
    {
        cu = true;
        ui->Diary->setText("您所选择的日期目前还没有日记，是否选择创建？\n如果想要创建新日记，请按ctrl+alt+N\n");
        ui->Diary->setReadOnly(true);
    }
}

void Specific::keyPressEvent(QKeyEvent *k)
{
    if (k->modifiers() == (Qt::ControlModifier | Qt::AltModifier) && k->key() == Qt::Key_N)
    {
        if (this->cu)
        {
            ui->Diary->setReadOnly(false);
            ui->Diary->setText("");
            QFile ff(this->filename+this->current_date+".txt");
            ff.open(QIODevice::ReadOnly);
            ff.close();
        }
    }
}

void Specific::on_Save_Button_clicked()
{
    qDebug()<<"on_save_button_clicked";
    QFile file(this->filename+this->current_date+".txt");
    file.open(QIODevice::WriteOnly);
    QByteArray ba;
    ba.append((ui->Diary->toPlainText()).toUtf8());
    file.write(ba);
    file.close();
}


void Specific::on_Pause_Continue_clicked()
{
    if (Specific::song->isPlaying()) Specific::song->pause();
    else Specific::song->play();
}


void Specific::on_pushButton_2_clicked()
{
    QProcess pro;
    this->hide();
    //pro.execute("./diary/year_packing.exe");
    //在此yearsummary.ui
    yearSummary *yy = new yearSummary(yearValue);
    yy->show();
}


void Specific::on_volume_down_clicked()
{
    volume--;
    Specific::output->setVolume(volume);
}


void Specific::on_volume_up_clicked()
{
    volume++;
    Specific::output->setVolume(volume);
}


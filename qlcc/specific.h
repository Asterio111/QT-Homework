#ifndef SPECIFIC_H
#define SPECIFIC_H
#include <QString>
#include <QWidget>
#include <QKeyEvent>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QAudioOutput>

namespace Ui {
class Specific;
}

class Specific : public QWidget
{
    Q_OBJECT

public:
    explicit Specific(int emo,QString startt,QString endd, QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent *k);
    ~Specific();

private slots:

    void on_pushButton_clicked();

    void on_OK_Button_clicked();

    void on_Save_Button_clicked();

    void on_Pause_Continue_clicked();

    void on_pushButton_2_clicked();

    void on_volume_down_clicked();

    void on_volume_up_clicked();

private:
    Ui::Specific *ui;
    bool cu = false;
    int emotion;
    int yearValue = 0;
    int volume = 5;
    QString startt;
    QString endd;
    QString filename="./diary/";
    QString current_date="";
    QMediaPlayer *song;
    QAudioOutput *output;
};

#endif // SPECIFIC_H

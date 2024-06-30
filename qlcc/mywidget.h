#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWidget;
}
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    void Init_Combobox();
    ~MyWidget();


private slots:
    void on_good_clicked();

    void on_soso_clicked();

    void on_bad_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_choice1_currentIndexChanged(int index);

private:
    Ui::MyWidget *ui;
    int emo;
};
#endif // MYWIDGET_H

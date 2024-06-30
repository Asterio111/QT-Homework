#include "mywidget.h"
#include "ui_mywidget.h"
#include "specific.h"
#include <QMessageBox>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("请输入心情");
    this->Init_Combobox();
}

void MyWidget::Init_Combobox()
{
    QList l = {"08:00","10:00","12:00","14:00","16:00","18:00","20:00","22:00"};
    for (int i=0;i<7;++i)
    {
       ui->choice1->addItem(l[i]);
    }
}

MyWidget::~MyWidget()
{
    delete ui;
}



void MyWidget::on_good_clicked()
{
    emo = 2;
}


void MyWidget::on_soso_clicked()
{
    emo = 1;
}


void MyWidget::on_bad_clicked()
{
    emo = 0;
}


void MyWidget::on_pushButton_2_clicked()
{
    this->close();
}


void MyWidget::on_pushButton_clicked()
{
    if (!(ui->good->isChecked() || ui->soso->isChecked() || ui->bad->isChecked()))
    {
        QMessageBox::warning(this, "警告", "请选择心情");
    }
    else
    {
        this->hide();
        Specific *s = new Specific(emo, ui->choice1->currentText(), ui->choice2->currentText());
        s->show();
    }


}


void MyWidget::on_choice1_currentIndexChanged(int index)
{
    int num = ui->choice2->count();
    for (int i=0;i<num;++i) ui->choice2->removeItem(0);
    QList l = {"08:00","10:00","12:00","14:00","16:00","18:00","20:00","22:00"};
    for (int i=index+1;i<8;++i)
    {
        ui->choice2->addItem(l[i]);
    }
}


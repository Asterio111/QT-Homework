#include "yearsummary.h"
#include "ui_yearsummary.h"
#include <QFile>

yearSummary::yearSummary(int y,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::yearSummary)
{
    ui->setupUi(this);
    year = y;
    qDebug()<<"year="<<year;
    QString text = QString("%1年度报告").arg(year);
    ui->content->setText(text);
    QString line;
    QFile file("./diary/2024_summary.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
            line = in.readLine();
            // 处理读取的行
            qDebug() << line;
        }
        file.close();
    } else {
        // 处理打开文件失败的情况
        qDebug() << "Unable to open file.";
    }
    ui->content->setText(line);
}

yearSummary::~yearSummary()
{
    delete ui;
}

void yearSummary::on_textBrowser_anchorClicked(const QUrl &arg1)
{
    QString line;
    QFile file("./diary/2024_summary.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
            line = in.readLine();
            // 处理读取的行
            qDebug() << line;
        }
        file.close();
    } else {
        // 处理打开文件失败的情况
        qDebug() << "Unable to open file.";
    }
    ui->content->setText(line);
}


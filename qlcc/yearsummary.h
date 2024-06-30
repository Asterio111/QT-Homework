#ifndef YEARSUMMARY_H
#define YEARSUMMARY_H

#include <QWidget>

namespace Ui {
class yearSummary;
}

class yearSummary : public QWidget
{
    Q_OBJECT

public:
    explicit yearSummary(int y = 0,QWidget *parent = nullptr);
    ~yearSummary();

private slots:
    void on_textBrowser_anchorClicked(const QUrl &arg1);

    void on_content_anchorClicked(const QUrl &arg1);

private:
    Ui::yearSummary *ui;
    int year;
};

#endif // YEARSUMMARY_H

#include "mywidget.h"

#include <QApplication>
#include <QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString currentPath = QDir::currentPath();
    qDebug() << "Current path:" << currentPath;
    MyWidget w;
    w.show();
    return a.exec();
}

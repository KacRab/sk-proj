#include <QApplication>
#include "Manager.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Manager manager;
    MainWindow w(&manager);
    w.showMaximized();
    return a.exec();
}

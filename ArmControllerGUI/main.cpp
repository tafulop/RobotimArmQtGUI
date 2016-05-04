#include "mainwindow.h"
#include "../../ArmControllerLibrary/Controller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}

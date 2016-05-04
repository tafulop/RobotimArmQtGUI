#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QTimer>
#include "../../ArmControllerLibrary/Controller.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_jointAngle_1_valueChanged(int value);

    void on_jointAngleLcd_1_overflow();

    void on_jointAngle_2_valueChanged(int value);

    void on_jointAngle_3_valueChanged(int value);

    void on_jointAngle_4_valueChanged(int value);

    void on_jointAngle_5_valueChanged(int value);

    void on_home_position_button_clicked();

    void refreshEffectorPos();

private:
    Ui::MainWindow *ui;

    /* Arm Controller */
    Controller armControl = Controller::getInstance();

    /* part container */
    PartContainerManager& pcManager = PartContainerManager::getInstance();

    /* initializes the slider values */
    void initializeSliders();


    QTimer *timer;

};

#endif // MAINWINDOW_H

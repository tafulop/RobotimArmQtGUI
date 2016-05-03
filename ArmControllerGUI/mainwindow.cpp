#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // create robotic arm
    armControl.initialize();
    armControl.startSimulation();

    initializeSliders();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_jointAngle_1_valueChanged(int value)
{

    float changeTo = value/10.0;

    std::shared_ptr<RoboticArm::Joint> j1 = pcManager.joints.get("J1");

    pcManager.joints.get("J1")->setAngle(changeTo);

    ui->jointAngleLcd_1->display(changeTo);


    refreshEffectorPos();

}



void MainWindow::on_jointAngle_2_valueChanged(int value)
{
  float changeTo = value/10.0;

  pcManager.joints.get("J2")->setAngle(changeTo);

  ui->jointAngleLcd_2->display(changeTo);

  refreshEffectorPos();

}


void MainWindow::on_jointAngle_3_valueChanged(int value)
{
  float changeTo = value/10.0;

  pcManager.joints.get("J3")->setAngle(changeTo);

  ui->jointAngleLcd_3->display(changeTo);

  refreshEffectorPos();

}


void MainWindow::on_jointAngle_4_valueChanged(int value)
{
  float changeTo = value/10.0;

  pcManager.joints.get("J4")->setAngle(changeTo);

  ui->jointAngleLcd_4->display(changeTo);

  refreshEffectorPos();

}


void MainWindow::on_jointAngle_5_valueChanged(int value)
{
  float changeTo = value/10.0;

  pcManager.joints.get("J5")->setAngle(changeTo);

  ui->jointAngleLcd_5->display(changeTo);

  refreshEffectorPos();

}



void MainWindow::initializeSliders(){

    // J1
    ui->jointAngle_1->setRange(pcManager.joints.get("J1")->getMinAngle()*10, pcManager.joints.get("J1")->getMaxAngle()*10);
    ui->jointAngle_1->setSliderPosition(0);

    // J2
    ui->jointAngle_2->setRange(pcManager.joints.get("J2")->getMinAngle()*10, pcManager.joints.get("J2")->getMaxAngle()*10);
    ui->jointAngle_2->setSliderPosition(0);

    // J3
    ui->jointAngle_3->setRange(pcManager.joints.get("J3")->getMinAngle()*10, pcManager.joints.get("J3")->getMaxAngle()*10);
    ui->jointAngle_3->setSliderPosition(0);

    // J4
    ui->jointAngle_4->setRange(pcManager.joints.get("J4")->getMinAngle()*10, pcManager.joints.get("J4")->getMaxAngle()*10);
    ui->jointAngle_4->setSliderPosition(0);

    // J5
    ui->jointAngle_5->setRange(pcManager.joints.get("J5")->getMinAngle()*10, pcManager.joints.get("J5")->getMaxAngle()*10);
    ui->jointAngle_5->setSliderPosition(0);

    this->armControl.forwardKinematics.setAutorun(true);



}


void MainWindow::on_jointAngleLcd_1_overflow()
{

}


void MainWindow::on_home_position_button_clicked()
{
    armControl.moveToHomePosition();

    // reset sliders
    initializeSliders();
    refreshEffectorPos();

}


void MainWindow::refreshEffectorPos(){



    arma::fmat temp = this->armControl.getEffectorPosition();


    QString s = QString::number(temp.at(0,0), 'f', 4);

    std::cout << temp;


    ui->x_value->setText(s);

    s = QString::number(temp.at(1,0), 'f', 4);
    ui->y_value->setText(s);

    s = QString::number(temp.at(2,0), 'f', 4);
    ui->z_value->setText(s);

}


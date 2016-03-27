/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *jointAngle_1;
    QSlider *jointAngle_2;
    QSlider *jointAngle_3;
    QSlider *jointAngle_4;
    QSlider *jointAngle_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *jointAngleLcd_1;
    QLCDNumber *jointAngleLcd_2;
    QLCDNumber *jointAngleLcd_3;
    QLCDNumber *jointAngleLcd_4;
    QLCDNumber *jointAngleLcd_5;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *Joint_label_1;
    QLabel *Joint_label_2;
    QLabel *Joint_label_3;
    QLabel *Joint_label_4;
    QLabel *Joint_label_5;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(447, 414);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 411, 331));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 60, 181, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        jointAngle_1 = new QSlider(verticalLayoutWidget);
        jointAngle_1->setObjectName(QStringLiteral("jointAngle_1"));
        jointAngle_1->setCursor(QCursor(Qt::PointingHandCursor));
        jointAngle_1->setMaximum(999);
        jointAngle_1->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_1);

        jointAngle_2 = new QSlider(verticalLayoutWidget);
        jointAngle_2->setObjectName(QStringLiteral("jointAngle_2"));
        jointAngle_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_2);

        jointAngle_3 = new QSlider(verticalLayoutWidget);
        jointAngle_3->setObjectName(QStringLiteral("jointAngle_3"));
        jointAngle_3->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_3);

        jointAngle_4 = new QSlider(verticalLayoutWidget);
        jointAngle_4->setObjectName(QStringLiteral("jointAngle_4"));
        jointAngle_4->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_4);

        jointAngle_5 = new QSlider(verticalLayoutWidget);
        jointAngle_5->setObjectName(QStringLiteral("jointAngle_5"));
        jointAngle_5->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_5);

        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(290, 60, 91, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        jointAngleLcd_1 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_1->setObjectName(QStringLiteral("jointAngleLcd_1"));
        jointAngleLcd_1->setSmallDecimalPoint(true);
        jointAngleLcd_1->setDigitCount(4);
        jointAngleLcd_1->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(jointAngleLcd_1);

        jointAngleLcd_2 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_2->setObjectName(QStringLiteral("jointAngleLcd_2"));
        jointAngleLcd_2->setSmallDecimalPoint(true);
        jointAngleLcd_2->setDigitCount(4);
        jointAngleLcd_2->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(jointAngleLcd_2);

        jointAngleLcd_3 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_3->setObjectName(QStringLiteral("jointAngleLcd_3"));
        jointAngleLcd_3->setSmallDecimalPoint(true);
        jointAngleLcd_3->setDigitCount(4);
        jointAngleLcd_3->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(jointAngleLcd_3);

        jointAngleLcd_4 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_4->setObjectName(QStringLiteral("jointAngleLcd_4"));
        jointAngleLcd_4->setSmallDecimalPoint(true);
        jointAngleLcd_4->setDigitCount(4);
        jointAngleLcd_4->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(jointAngleLcd_4);

        jointAngleLcd_5 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_5->setObjectName(QStringLiteral("jointAngleLcd_5"));
        jointAngleLcd_5->setSmallDecimalPoint(true);
        jointAngleLcd_5->setDigitCount(4);
        jointAngleLcd_5->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(jointAngleLcd_5);

        verticalLayoutWidget_5 = new QWidget(frame);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(30, 60, 81, 241));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Joint_label_1 = new QLabel(verticalLayoutWidget_5);
        Joint_label_1->setObjectName(QStringLiteral("Joint_label_1"));

        verticalLayout_5->addWidget(Joint_label_1);

        Joint_label_2 = new QLabel(verticalLayoutWidget_5);
        Joint_label_2->setObjectName(QStringLiteral("Joint_label_2"));

        verticalLayout_5->addWidget(Joint_label_2);

        Joint_label_3 = new QLabel(verticalLayoutWidget_5);
        Joint_label_3->setObjectName(QStringLiteral("Joint_label_3"));

        verticalLayout_5->addWidget(Joint_label_3);

        Joint_label_4 = new QLabel(verticalLayoutWidget_5);
        Joint_label_4->setObjectName(QStringLiteral("Joint_label_4"));

        verticalLayout_5->addWidget(Joint_label_4);

        Joint_label_5 = new QLabel(verticalLayoutWidget_5);
        Joint_label_5->setObjectName(QStringLiteral("Joint_label_5"));

        verticalLayout_5->addWidget(Joint_label_5);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 111, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 447, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Joint_label_1->setText(QApplication::translate("MainWindow", "Joint 1", 0));
        Joint_label_2->setText(QApplication::translate("MainWindow", "Joint 2", 0));
        Joint_label_3->setText(QApplication::translate("MainWindow", "Joint 3", 0));
        Joint_label_4->setText(QApplication::translate("MainWindow", "Joint 4", 0));
        Joint_label_5->setText(QApplication::translate("MainWindow", "Joint 5", 0));
        label->setText(QApplication::translate("MainWindow", "Joint angles", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

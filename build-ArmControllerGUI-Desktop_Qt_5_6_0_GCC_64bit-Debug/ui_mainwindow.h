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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
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
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *home_position_button;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(431, 664);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 401, 341));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 50, 211, 271));
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
        jointAngle_2->setCursor(QCursor(Qt::PointingHandCursor));
        jointAngle_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_2);

        jointAngle_3 = new QSlider(verticalLayoutWidget);
        jointAngle_3->setObjectName(QStringLiteral("jointAngle_3"));
        jointAngle_3->setCursor(QCursor(Qt::PointingHandCursor));
        jointAngle_3->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_3);

        jointAngle_4 = new QSlider(verticalLayoutWidget);
        jointAngle_4->setObjectName(QStringLiteral("jointAngle_4"));
        jointAngle_4->setCursor(QCursor(Qt::PointingHandCursor));
        jointAngle_4->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_4);

        jointAngle_5 = new QSlider(verticalLayoutWidget);
        jointAngle_5->setObjectName(QStringLiteral("jointAngle_5"));
        jointAngle_5->setCursor(QCursor(Qt::PointingHandCursor));
        jointAngle_5->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jointAngle_5);

        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 60, 81, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        jointAngleLcd_1 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_1->setObjectName(QStringLiteral("jointAngleLcd_1"));
        jointAngleLcd_1->setFrameShape(QFrame::NoFrame);
        jointAngleLcd_1->setFrameShadow(QFrame::Raised);
        jointAngleLcd_1->setSmallDecimalPoint(true);
        jointAngleLcd_1->setDigitCount(4);
        jointAngleLcd_1->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(jointAngleLcd_1);

        jointAngleLcd_2 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_2->setObjectName(QStringLiteral("jointAngleLcd_2"));
        jointAngleLcd_2->setFrameShape(QFrame::NoFrame);
        jointAngleLcd_2->setFrameShadow(QFrame::Raised);
        jointAngleLcd_2->setSmallDecimalPoint(true);
        jointAngleLcd_2->setDigitCount(4);
        jointAngleLcd_2->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(jointAngleLcd_2);

        jointAngleLcd_3 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_3->setObjectName(QStringLiteral("jointAngleLcd_3"));
        jointAngleLcd_3->setFrameShape(QFrame::NoFrame);
        jointAngleLcd_3->setFrameShadow(QFrame::Raised);
        jointAngleLcd_3->setSmallDecimalPoint(true);
        jointAngleLcd_3->setDigitCount(4);
        jointAngleLcd_3->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(jointAngleLcd_3);

        jointAngleLcd_4 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_4->setObjectName(QStringLiteral("jointAngleLcd_4"));
        jointAngleLcd_4->setFrameShape(QFrame::NoFrame);
        jointAngleLcd_4->setFrameShadow(QFrame::Raised);
        jointAngleLcd_4->setSmallDecimalPoint(true);
        jointAngleLcd_4->setDigitCount(4);
        jointAngleLcd_4->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(jointAngleLcd_4);

        jointAngleLcd_5 = new QLCDNumber(verticalLayoutWidget_2);
        jointAngleLcd_5->setObjectName(QStringLiteral("jointAngleLcd_5"));
        jointAngleLcd_5->setFrameShape(QFrame::NoFrame);
        jointAngleLcd_5->setFrameShadow(QFrame::Raised);
        jointAngleLcd_5->setSmallDecimalPoint(true);
        jointAngleLcd_5->setDigitCount(4);
        jointAngleLcd_5->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(jointAngleLcd_5);

        verticalLayoutWidget_5 = new QWidget(frame);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(20, 60, 51, 241));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Joint_label_1 = new QLabel(verticalLayoutWidget_5);
        Joint_label_1->setObjectName(QStringLiteral("Joint_label_1"));
        Joint_label_1->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Joint_label_1);

        Joint_label_2 = new QLabel(verticalLayoutWidget_5);
        Joint_label_2->setObjectName(QStringLiteral("Joint_label_2"));
        Joint_label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Joint_label_2);

        Joint_label_3 = new QLabel(verticalLayoutWidget_5);
        Joint_label_3->setObjectName(QStringLiteral("Joint_label_3"));
        Joint_label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Joint_label_3);

        Joint_label_4 = new QLabel(verticalLayoutWidget_5);
        Joint_label_4->setObjectName(QStringLiteral("Joint_label_4"));
        Joint_label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Joint_label_4);

        Joint_label_5 = new QLabel(verticalLayoutWidget_5);
        Joint_label_5->setObjectName(QStringLiteral("Joint_label_5"));
        Joint_label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Joint_label_5);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 381, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 370, 401, 231));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_3 = new QWidget(frame_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 80, 160, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        home_position_button = new QPushButton(verticalLayoutWidget_3);
        home_position_button->setObjectName(QStringLiteral("home_position_button"));

        verticalLayout_3->addWidget(home_position_button);

        horizontalLayoutWidget = new QWidget(frame_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 10, 381, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Robotic arm controller", 0));
#ifndef QT_NO_TOOLTIP
        jointAngleLcd_1->setToolTip(QApplication::translate("MainWindow", "The joint angles in degree.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        jointAngleLcd_2->setToolTip(QApplication::translate("MainWindow", "The joint angles in degree.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        jointAngleLcd_3->setToolTip(QApplication::translate("MainWindow", "The joint angles in degree.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        jointAngleLcd_4->setToolTip(QApplication::translate("MainWindow", "The joint angles in degree.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        jointAngleLcd_5->setToolTip(QApplication::translate("MainWindow", "The joint angles in degree.", 0));
#endif // QT_NO_TOOLTIP
        Joint_label_1->setText(QApplication::translate("MainWindow", "Joint 1", 0));
        Joint_label_2->setText(QApplication::translate("MainWindow", "Joint 2", 0));
        Joint_label_3->setText(QApplication::translate("MainWindow", "Joint 3", 0));
        Joint_label_4->setText(QApplication::translate("MainWindow", "Joint 4", 0));
        Joint_label_5->setText(QApplication::translate("MainWindow", "Joint 5", 0));
        label_3->setText(QApplication::translate("MainWindow", "Joint angle control", 0));
#ifndef QT_NO_TOOLTIP
        home_position_button->setToolTip(QApplication::translate("MainWindow", "Reset the joint angles to 0.", 0));
#endif // QT_NO_TOOLTIP
        home_position_button->setText(QApplication::translate("MainWindow", "Home position", 0));
        label_2->setText(QApplication::translate("MainWindow", "Misc", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

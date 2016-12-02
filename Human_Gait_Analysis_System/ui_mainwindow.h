/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_waist;
    QLCDNumber *lcdNumber_waist;
    QLabel *label_rightHip;
    QLabel *label_leftHip;
    QLCDNumber *lcdNumber_rightHip;
    QLCDNumber *lcdNumber_leftHip;
    QLabel *label_rightKnee;
    QLabel *label_leftKnee;
    QLCDNumber *lcdNumber_rightKnee;
    QLCDNumber *lcdNumber_leftKnee;
    QLabel *label_rightAnkle;
    QLabel *label_leftAnkle;
    QLCDNumber *lcdNumber_rightAnkle;
    QLCDNumber *lcdNumber_leftAnkle;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_rightFoot;
    QLabel *label_leftFoot;
    QLabel *label_rightFirstMeta;
    QLabel *label_leftFirstMeta;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label_rightThirdMeta;
    QLabel *label_leftThirdMeta;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLabel *label_rightHeel;
    QLabel *label_leftHeel;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(438, 368);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral("images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 211, 251));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_waist = new QLabel(widget);
        label_waist->setObjectName(QStringLiteral("label_waist"));

        gridLayout->addWidget(label_waist, 0, 0, 1, 1);

        lcdNumber_waist = new QLCDNumber(widget);
        lcdNumber_waist->setObjectName(QStringLiteral("lcdNumber_waist"));

        gridLayout->addWidget(lcdNumber_waist, 0, 1, 1, 1);

        label_rightHip = new QLabel(widget);
        label_rightHip->setObjectName(QStringLiteral("label_rightHip"));

        gridLayout->addWidget(label_rightHip, 1, 0, 1, 1);

        label_leftHip = new QLabel(widget);
        label_leftHip->setObjectName(QStringLiteral("label_leftHip"));

        gridLayout->addWidget(label_leftHip, 1, 1, 1, 1);

        lcdNumber_rightHip = new QLCDNumber(widget);
        lcdNumber_rightHip->setObjectName(QStringLiteral("lcdNumber_rightHip"));

        gridLayout->addWidget(lcdNumber_rightHip, 2, 0, 1, 1);

        lcdNumber_leftHip = new QLCDNumber(widget);
        lcdNumber_leftHip->setObjectName(QStringLiteral("lcdNumber_leftHip"));

        gridLayout->addWidget(lcdNumber_leftHip, 2, 1, 1, 1);

        label_rightKnee = new QLabel(widget);
        label_rightKnee->setObjectName(QStringLiteral("label_rightKnee"));

        gridLayout->addWidget(label_rightKnee, 3, 0, 1, 1);

        label_leftKnee = new QLabel(widget);
        label_leftKnee->setObjectName(QStringLiteral("label_leftKnee"));

        gridLayout->addWidget(label_leftKnee, 3, 1, 1, 1);

        lcdNumber_rightKnee = new QLCDNumber(widget);
        lcdNumber_rightKnee->setObjectName(QStringLiteral("lcdNumber_rightKnee"));

        gridLayout->addWidget(lcdNumber_rightKnee, 4, 0, 1, 1);

        lcdNumber_leftKnee = new QLCDNumber(widget);
        lcdNumber_leftKnee->setObjectName(QStringLiteral("lcdNumber_leftKnee"));

        gridLayout->addWidget(lcdNumber_leftKnee, 4, 1, 1, 1);

        label_rightAnkle = new QLabel(widget);
        label_rightAnkle->setObjectName(QStringLiteral("label_rightAnkle"));

        gridLayout->addWidget(label_rightAnkle, 5, 0, 1, 1);

        label_leftAnkle = new QLabel(widget);
        label_leftAnkle->setObjectName(QStringLiteral("label_leftAnkle"));

        gridLayout->addWidget(label_leftAnkle, 5, 1, 1, 1);

        lcdNumber_rightAnkle = new QLCDNumber(widget);
        lcdNumber_rightAnkle->setObjectName(QStringLiteral("lcdNumber_rightAnkle"));

        gridLayout->addWidget(lcdNumber_rightAnkle, 6, 0, 1, 1);

        lcdNumber_leftAnkle = new QLCDNumber(widget);
        lcdNumber_leftAnkle->setObjectName(QStringLiteral("lcdNumber_leftAnkle"));

        gridLayout->addWidget(lcdNumber_leftAnkle, 6, 1, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(240, 10, 181, 251));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_rightFoot = new QLabel(widget1);
        label_rightFoot->setObjectName(QStringLiteral("label_rightFoot"));

        gridLayout_2->addWidget(label_rightFoot, 0, 0, 1, 1);

        label_leftFoot = new QLabel(widget1);
        label_leftFoot->setObjectName(QStringLiteral("label_leftFoot"));

        gridLayout_2->addWidget(label_leftFoot, 0, 1, 1, 1);

        label_rightFirstMeta = new QLabel(widget1);
        label_rightFirstMeta->setObjectName(QStringLiteral("label_rightFirstMeta"));

        gridLayout_2->addWidget(label_rightFirstMeta, 1, 0, 1, 1);

        label_leftFirstMeta = new QLabel(widget1);
        label_leftFirstMeta->setObjectName(QStringLiteral("label_leftFirstMeta"));

        gridLayout_2->addWidget(label_leftFirstMeta, 1, 1, 1, 1);

        lcdNumber = new QLCDNumber(widget1);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout_2->addWidget(lcdNumber, 2, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(widget1);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        gridLayout_2->addWidget(lcdNumber_2, 2, 1, 1, 1);

        label_rightThirdMeta = new QLabel(widget1);
        label_rightThirdMeta->setObjectName(QStringLiteral("label_rightThirdMeta"));

        gridLayout_2->addWidget(label_rightThirdMeta, 3, 0, 1, 1);

        label_leftThirdMeta = new QLabel(widget1);
        label_leftThirdMeta->setObjectName(QStringLiteral("label_leftThirdMeta"));

        gridLayout_2->addWidget(label_leftThirdMeta, 3, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(widget1);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        gridLayout_2->addWidget(lcdNumber_3, 4, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(widget1);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 4, 1, 1, 1);

        label_rightHeel = new QLabel(widget1);
        label_rightHeel->setObjectName(QStringLiteral("label_rightHeel"));

        gridLayout_2->addWidget(label_rightHeel, 5, 0, 1, 1);

        label_leftHeel = new QLabel(widget1);
        label_leftHeel->setObjectName(QStringLiteral("label_leftHeel"));

        gridLayout_2->addWidget(label_leftHeel, 5, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(widget1);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        gridLayout_2->addWidget(lcdNumber_5, 6, 0, 1, 1);

        lcdNumber_6 = new QLCDNumber(widget1);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));

        gridLayout_2->addWidget(lcdNumber_6, 6, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 438, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        mainToolBar->addAction(actionConnect);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        label_waist->setText(QApplication::translate("MainWindow", "Waist", 0));
        label_rightHip->setText(QApplication::translate("MainWindow", "Right Hip", 0));
        label_leftHip->setText(QApplication::translate("MainWindow", "Left Hip", 0));
        label_rightKnee->setText(QApplication::translate("MainWindow", "Right Knee", 0));
        label_leftKnee->setText(QApplication::translate("MainWindow", "Left Knee", 0));
        label_rightAnkle->setText(QApplication::translate("MainWindow", "Right Ankle", 0));
        label_leftAnkle->setText(QApplication::translate("MainWindow", "Left Ankle", 0));
        label_rightFoot->setText(QApplication::translate("MainWindow", "Right", 0));
        label_leftFoot->setText(QApplication::translate("MainWindow", "Left", 0));
        label_rightFirstMeta->setText(QApplication::translate("MainWindow", "1st meta", 0));
        label_leftFirstMeta->setText(QApplication::translate("MainWindow", "1st meta", 0));
        label_rightThirdMeta->setText(QApplication::translate("MainWindow", "3rd meta", 0));
        label_leftThirdMeta->setText(QApplication::translate("MainWindow", "3rd meta", 0));
        label_rightHeel->setText(QApplication::translate("MainWindow", "Heel", 0));
        label_leftHeel->setText(QApplication::translate("MainWindow", "Heel", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_v1;
    QCheckBox *checkBox_s11;
    QCheckBox *checkBox_s12;
    QProgressBar *progressBar_Tanque1;
    QLabel *label;
    QProgressBar *progressBar_Tanque2;
    QLabel *label_2;
    QCheckBox *checkBox_s21;
    QCheckBox *checkBox_s22;
    QCheckBox *checkBox_b1;
    QCheckBox *checkBox_consumoT1;
    QCheckBox *checkBox_consumoT2;
    QProgressBar *progressBar_Tanque3;
    QCheckBox *checkBox_s32;
    QCheckBox *checkBox_s31;
    QCheckBox *checkBox_consumoT3;
    QLabel *label_3;
    QCheckBox *checkBox_v2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(540, 329);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        checkBox_v1 = new QCheckBox(centralWidget);
        checkBox_v1->setObjectName(QString::fromUtf8("checkBox_v1"));
        checkBox_v1->setGeometry(QRect(10, 200, 31, 17));
        checkBox_s11 = new QCheckBox(centralWidget);
        checkBox_s11->setObjectName(QString::fromUtf8("checkBox_s11"));
        checkBox_s11->setGeometry(QRect(120, 210, 41, 17));
        checkBox_s12 = new QCheckBox(centralWidget);
        checkBox_s12->setObjectName(QString::fromUtf8("checkBox_s12"));
        checkBox_s12->setGeometry(QRect(120, 40, 41, 17));
        progressBar_Tanque1 = new QProgressBar(centralWidget);
        progressBar_Tanque1->setObjectName(QString::fromUtf8("progressBar_Tanque1"));
        progressBar_Tanque1->setGeometry(QRect(50, 42, 61, 191));
        progressBar_Tanque1->setValue(100);
        progressBar_Tanque1->setTextVisible(false);
        progressBar_Tanque1->setOrientation(Qt::Vertical);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 47, 13));
        progressBar_Tanque2 = new QProgressBar(centralWidget);
        progressBar_Tanque2->setObjectName(QString::fromUtf8("progressBar_Tanque2"));
        progressBar_Tanque2->setGeometry(QRect(220, 20, 61, 190));
        progressBar_Tanque2->setValue(100);
        progressBar_Tanque2->setTextVisible(false);
        progressBar_Tanque2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 0, 47, 13));
        checkBox_s21 = new QCheckBox(centralWidget);
        checkBox_s21->setObjectName(QString::fromUtf8("checkBox_s21"));
        checkBox_s21->setGeometry(QRect(300, 190, 41, 17));
        checkBox_s22 = new QCheckBox(centralWidget);
        checkBox_s22->setObjectName(QString::fromUtf8("checkBox_s22"));
        checkBox_s22->setGeometry(QRect(290, 30, 41, 17));
        checkBox_b1 = new QCheckBox(centralWidget);
        checkBox_b1->setObjectName(QString::fromUtf8("checkBox_b1"));
        checkBox_b1->setGeometry(QRect(170, 120, 31, 17));
        checkBox_consumoT1 = new QCheckBox(centralWidget);
        checkBox_consumoT1->setObjectName(QString::fromUtf8("checkBox_consumoT1"));
        checkBox_consumoT1->setGeometry(QRect(80, 240, 111, 19));
        checkBox_consumoT2 = new QCheckBox(centralWidget);
        checkBox_consumoT2->setObjectName(QString::fromUtf8("checkBox_consumoT2"));
        checkBox_consumoT2->setGeometry(QRect(210, 240, 111, 19));
        progressBar_Tanque3 = new QProgressBar(centralWidget);
        progressBar_Tanque3->setObjectName(QString::fromUtf8("progressBar_Tanque3"));
        progressBar_Tanque3->setGeometry(QRect(400, 115, 41, 95));
        progressBar_Tanque3->setMaximum(100);
        progressBar_Tanque3->setValue(100);
        progressBar_Tanque3->setTextVisible(false);
        progressBar_Tanque3->setOrientation(Qt::Vertical);
        checkBox_s32 = new QCheckBox(centralWidget);
        checkBox_s32->setObjectName(QString::fromUtf8("checkBox_s32"));
        checkBox_s32->setGeometry(QRect(450, 120, 41, 17));
        checkBox_s31 = new QCheckBox(centralWidget);
        checkBox_s31->setObjectName(QString::fromUtf8("checkBox_s31"));
        checkBox_s31->setGeometry(QRect(450, 190, 41, 16));
        checkBox_consumoT3 = new QCheckBox(centralWidget);
        checkBox_consumoT3->setObjectName(QString::fromUtf8("checkBox_consumoT3"));
        checkBox_consumoT3->setGeometry(QRect(340, 240, 111, 19));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 100, 47, 13));
        checkBox_v2 = new QCheckBox(centralWidget);
        checkBox_v2->setObjectName(QString::fromUtf8("checkBox_v2"));
        checkBox_v2->setGeometry(QRect(320, 120, 31, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 540, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox_v1->setText(QCoreApplication::translate("MainWindow", "V1", nullptr));
        checkBox_s11->setText(QCoreApplication::translate("MainWindow", "S11", nullptr));
        checkBox_s12->setText(QCoreApplication::translate("MainWindow", "S12", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tanque 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tanque 2", nullptr));
        checkBox_s21->setText(QCoreApplication::translate("MainWindow", "S21", nullptr));
        checkBox_s22->setText(QCoreApplication::translate("MainWindow", "S22", nullptr));
        checkBox_b1->setText(QCoreApplication::translate("MainWindow", "B1", nullptr));
        checkBox_consumoT1->setText(QCoreApplication::translate("MainWindow", "consumir tanque 1", nullptr));
        checkBox_consumoT2->setText(QCoreApplication::translate("MainWindow", "consumir tanque 2", nullptr));
        checkBox_s32->setText(QCoreApplication::translate("MainWindow", "S32", nullptr));
        checkBox_s31->setText(QCoreApplication::translate("MainWindow", "S31", nullptr));
        checkBox_consumoT3->setText(QCoreApplication::translate("MainWindow", "consumir tanque 3", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tanque 3", nullptr));
        checkBox_v2->setText(QCoreApplication::translate("MainWindow", "V2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

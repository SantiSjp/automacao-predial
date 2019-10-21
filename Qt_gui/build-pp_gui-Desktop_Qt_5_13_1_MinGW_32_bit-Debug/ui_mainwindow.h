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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
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
        checkBox_s12->setGeometry(QRect(120, 170, 41, 17));
        progressBar_Tanque1 = new QProgressBar(centralWidget);
        progressBar_Tanque1->setObjectName(QString::fromUtf8("progressBar_Tanque1"));
        progressBar_Tanque1->setGeometry(QRect(50, 162, 61, 71));
        progressBar_Tanque1->setValue(100);
        progressBar_Tanque1->setTextVisible(false);
        progressBar_Tanque1->setOrientation(Qt::Vertical);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 150, 47, 13));
        progressBar_Tanque2 = new QProgressBar(centralWidget);
        progressBar_Tanque2->setObjectName(QString::fromUtf8("progressBar_Tanque2"));
        progressBar_Tanque2->setGeometry(QRect(220, 120, 61, 71));
        progressBar_Tanque2->setValue(100);
        progressBar_Tanque2->setTextVisible(false);
        progressBar_Tanque2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 100, 47, 13));
        checkBox_s21 = new QCheckBox(centralWidget);
        checkBox_s21->setObjectName(QString::fromUtf8("checkBox_s21"));
        checkBox_s21->setGeometry(QRect(300, 160, 41, 17));
        checkBox_s22 = new QCheckBox(centralWidget);
        checkBox_s22->setObjectName(QString::fromUtf8("checkBox_s22"));
        checkBox_s22->setGeometry(QRect(300, 120, 41, 17));
        checkBox_b1 = new QCheckBox(centralWidget);
        checkBox_b1->setObjectName(QString::fromUtf8("checkBox_b1"));
        checkBox_b1->setGeometry(QRect(160, 120, 31, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

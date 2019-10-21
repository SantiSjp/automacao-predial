#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "threadbehavior.h"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ThreadBehavior tbehavior;
    QTimer timer10ms;

private:
    Ui::MainWindow *ui;

public slots:
    void AtualizaInterface();
    void ProcessoFisico();
};

#endif // MAINWINDOW_H

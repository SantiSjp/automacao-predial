#include "mainwindow.h"
#include "ui_mainwindow.h"

double nivelTanque1 = 100;
double nivelTanque2 = 100;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    tbehavior.start();

    connect(&timer10ms,
            SIGNAL(timeout()),
            this,
            SLOT(AtualizaInterface()));
    connect(&timer10ms,
            SIGNAL(timeout()),
            this,
            SLOT(ProcessoFisico()));
    timer10ms.start(10);
}

MainWindow::~MainWindow()
{
    tbehavior.terminate();
    delete ui;
}

#include "../../common/datatypes.h"
extern boolean pin_s12;
extern boolean pin_s11;
extern boolean pin_v1;
extern boolean pin_b1;
extern boolean pin_s21;
extern boolean pin_s22;

void MainWindow::AtualizaInterface(){
    ui->checkBox_v1->setChecked(pin_v1);
    ui->checkBox_s11->setChecked(pin_s11);
    ui->checkBox_s12->setChecked(pin_s12);
    ui->progressBar_Tanque1->setValue(nivelTanque1);
    ui->checkBox_b1->setChecked(pin_b1);
    ui->checkBox_s21->setChecked(pin_s21);
    ui->checkBox_s22->setChecked(pin_s22);
    ui->progressBar_Tanque2->setValue(nivelTanque2);
}

void MainWindow::ProcessoFisico(){

    // Enche o tanque 1 se a valvula ligar
    if(pin_v1){
        nivelTanque1 += .15; // Válvula V1 sempre ligada
        if(nivelTanque1>100)
            nivelTanque1 = 100; // Certifica que não transborde
    }

    // enche o tanque 2 se a bomba e pin_s11 estiverem ligados
    if(pin_b1){
        if(nivelTanque1<0.05){
            nivelTanque2 += nivelTanque1;
            nivelTanque1 = 0;
        }else{
            nivelTanque1 -= 0.05;
            nivelTanque2 += 0.05;
        }
        if(nivelTanque2>100)
           nivelTanque2 = 100;
        if(nivelTanque1 < 0)
            nivelTanque1 = 0;
    }

    // Consumir tanque 1
    if(ui->checkBox_consumoTanque1->isChecked()){
        nivelTanque1 -= 0.5;
        if(nivelTanque1 < 0)
            nivelTanque1 = 0;
    }

    // Consumir tanque 2
    if(ui->checkBox_consumoTanque2->isChecked()){
        nivelTanque2 -= 0.5;
        if(nivelTanque2 < 0)
            nivelTanque2 = 0;
    }


    // liga sensores
    pin_s11 = (nivelTanque1 >= 10);
    pin_s12 = (nivelTanque1 >= 90);
    pin_s21 = (nivelTanque2 >= 10);
    pin_s22 = (nivelTanque2 >= 90);

 /*
    //nivelTanque1 -= .05;    // Simulando um consumo
    if(nivelTanque1<0)
        nivelTanque1=0;     // Certifica que não tenha valor negativo


    if(pin_b1){            // Simula a bomba para encher tanque 2
        nivelTanque2 += .15;
        nivelTanque1 -= .15;
    }

    if(nivelTanque2>100)
        nivelTanque2 = 100; // Certifica que não transborde


    //pin_s21 = nivelTanque2 >= 10;
    //pin_s22 = nivelTanque2 >= 90;
    nivelTanque2 -= .05;    // Simulando um consumo


    if(nivelTanque2<0)
        nivelTanque2=0; // Certifica que não tenha valor negativo
*/


}

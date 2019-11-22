#include "mainwindow.h"
#include "ui_mainwindow.h"

double nivelTanque1 = 100;
double nivelTanque2 = 100;
double nivelTanque3 = 0;

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
extern boolean pin_v2;
extern boolean pin_b1;
extern boolean pin_s21;
extern boolean pin_s22;
extern boolean pin_s31;
extern boolean pin_s32;
extern boolean pin_resistencia;
extern double Temperatura = 25;

void MainWindow::AtualizaInterface(){
    ui->checkBox_v1->setChecked(pin_v1);
    ui->checkBox_v2->setChecked(pin_v2);
    ui->checkBox_s11->setChecked(pin_s11);
    ui->checkBox_s12->setChecked(pin_s12);
    ui->progressBar_Tanque1->setValue(nivelTanque1);
    ui->checkBox_b1->setChecked(pin_b1);
    ui->checkBox_s21->setChecked(pin_s21);
    ui->checkBox_s22->setChecked(pin_s22);
    ui->progressBar_Tanque2->setValue(nivelTanque2);
    ui->checkBox_s31->setChecked(pin_s31);
    ui->checkBox_s32->setChecked(pin_s32);
    ui->progressBar_Tanque3->setValue(nivelTanque3);
    ui->checkBox_resistencia->setChecked(pin_resistencia);
    ui->lcdNumber_temperatura->display(Temperatura);
}

void MainWindow::ProcessoFisico(){

    // liga sensores
    pin_s11 = (nivelTanque1 >= 10);
    pin_s12 = (nivelTanque1 >= 90);
    pin_s21 = (nivelTanque2 >= 10);
    pin_s22 = (nivelTanque2 >= 90);
    pin_s31 = (nivelTanque3 >= 10);
    pin_s32 = (nivelTanque3 >= 90);

    // Enche o tanque 1 se a valvula ligar
    if(pin_v1){
        nivelTanque1 += .05; // Válvula V1 sempre ligada
        if(nivelTanque1>100)
            nivelTanque1 = 100; // Certifica que não transborde
    }

    // enche o tanque 2 se a bomba e pin_s11 estiverem ligados
    if(pin_b1){
        if(nivelTanque1<.05){
            nivelTanque2 += nivelTanque1;
            nivelTanque1 = 0;
        }else{
            nivelTanque1 -= 0.15;
            nivelTanque2 += 0.15;
        }
        if(nivelTanque2>100)
           nivelTanque2 = 100;
        if(nivelTanque1 < 0)
            nivelTanque1 = 0;
    }



    // Atividade 2
    if(pin_v2){
        if(nivelTanque2 > nivelTanque3/2){ // altura do tanque 2 maior que tanque 3 -> agua vai para tanque 3

                nivelTanque2 -= 0.1;
                nivelTanque3 += 0.4;

            if(nivelTanque3>100) nivelTanque3 = 100;
            if(nivelTanque2<0) nivelTanque2 = 0;
        }
        if(nivelTanque2 < nivelTanque3/2){ // altura do tanque 3 maior que tanque 2 -> agua vai para tanque 2

                nivelTanque3 -= 0.4;
                nivelTanque2 += 0.1;
           // }
            if(nivelTanque2>100) nivelTanque2 = 100;
            if(nivelTanque3<0) nivelTanque3 = 0;
        }
    }


    if(pin_resistencia){
        if(Temperatura<100) Temperatura = Temperatura + 0.01;
    }
    else
        if(Temperatura>25) Temperatura = Temperatura - 0.01;



    // Consumir tanque 1
    if(ui->checkBox_consumoT1->isChecked()){
        nivelTanque1 -= 0.5;
        if(nivelTanque1 < 0)
            nivelTanque1 = 0;
    }

    // Consumir tanque 2
    if(ui->checkBox_consumoT2->isChecked()){
        nivelTanque2 -= 0.5;
        if(nivelTanque2 < 0)
            nivelTanque2 = 0;
    }

    // Consumir tanque 3
   if(ui->checkBox_consumoT3->isChecked()){
       nivelTanque3 -= 0.2;
       if(nivelTanque3 < 0)
           nivelTanque3 = 0;
   }


}

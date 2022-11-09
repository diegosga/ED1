#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <recursividade.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    dsg::recursividade teste;
    int numero=ui->lineEditNum->text().toInt();
    teste.setNum(numero);
    QString texto=teste.EX1_i() +" | "+teste.EX2()+teste.EX3() +" | "+teste.EX4()+" | "+teste.EX5() +" | "+teste.EX6();
    ui->textEditSaida->setText(texto);

}


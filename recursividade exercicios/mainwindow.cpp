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
    QString Saida=teste.EX1_i() +"\n O Exercicio 1 recursivo {"+
            teste.EX1_r(1)+"\n"+teste.EX2_i()+ "\n O Exercicio 2 recursivo {"+
            teste.EX2_r(1)+"\n"+teste.EX3_i() +"\n O Exercicio 3 recursivo {"+
            teste.EX3_r(1)+"\n"+teste.EX4_i()+"\n O Exercicio 4 recursivo "+
            QString::number(teste.EX4_r(1))+"\n"+teste.EX5_i() +
            "\n O Exercicio 5 recursivo "+QString::number(teste.EX5_r(3,-1,4)) +
            "\n "+teste.EX6_i()+ "\n O Exercicio 6 recursivo "+ QString::number(teste.EX6_r(1,1,0));
    ui->textEditSaida->setText(Saida);

}


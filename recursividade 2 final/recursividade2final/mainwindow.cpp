#include "mainwindow.h"
#include "ui_mainwindow.h"

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
void MainWindow::on_pushButtonb_clicked()
{
    int n1=ui->lineEditn1->text().toInt();
    int n2=ui->lineEditn2->text().toInt();
    r.setNum(n1);
    //r.mostravetor()+r.EX3R(0,100);
    QString textointerativo="Parte interativa \n"+r.EX1I()+"\n"
            +r.EX2I()+"\n "+r.EX3I()+"\n"+r.EX4_i()+"\n"+r.EX5_i(n1,n2)+
            "\n"+r.EX6_i(n1,n2);
    QString textoRecursivo="Parte recursiva \n A soma dos cubos é "+QString::number(r.EX1R(1,0))+"\n"+
            r.EX2R("A contagem regressiva é ",n1)+"\n"//+
            +r.EX3R(0,100)+"\n O numero digitado em binario é "+QString::number(r.EX4R(n1))+
            "\n A potencia é "+
            QString::number(r.EX5_r(n1,n2,1,1))+"\n A multiplicação é "
            +QString::number(r.EX6_r(n1,n2,0,1));

    ui->textEditSaida->setText(textoRecursivo);

    ui->textEditSaida_2->setText(textointerativo);
}


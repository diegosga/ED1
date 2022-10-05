#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"filaordenada.h"
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
    int tamanho= ui->lineEditTamanho->text().toInt();
    filao=new dsg::FilaOrdenada(tamanho);
    QString resultado= filao->getArray();
    ui->lineEditDesordenado->setText(resultado);
    ui->lineEditOrdenado->setText(filao->Ordenar());
    ui->lineEditTamanho->clear();
}



void MainWindow::on_pushButtonOrdenar_clicked()
{
    //

}


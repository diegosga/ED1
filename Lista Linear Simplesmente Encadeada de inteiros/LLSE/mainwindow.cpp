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


void MainWindow::on_pushButtonInserirInicio_clicked()
{try {
        int elemento=ui->lineEditInserirElemento->text().toInt();
        teste.InserirInicio(elemento);
        ui->lineEditInserirElemento->clear();
    } catch (QString &erro) {
    QMessageBox::information(this, "ERRO NO SISTEMA",erro);
    }

}


void MainWindow::on_pushButtonMostrarLista_clicked()
{
    try {
        QString saida="TODOS OS DADOS DA LISTA \n";
        saida+=teste.ObterDadosDaLista();
        ui->textEditSaida->setText(saida);
        } catch (QString &erro) {
        QMessageBox::information(this, "ERRO NO SISTEMA",erro);
        }

}


void MainWindow::on_pushButtonAcessarInicio_clicked()
{
    try {
        int elemento=teste.AcesarInicio();
        QString saida="Primeiro Elemento da Lista: ";
        saida+=QString::number(elemento);
        ui->textEditSaida->setText(saida);
        } catch (QString &erro) {
        QMessageBox::information(this, "ERRO NO SISTEMA",erro);
        }
}


void MainWindow::on_pushButtonRemover_clicked()
{
    try {
    teste.RemoverDoInicio();
        } catch (QString &erro) {
        QMessageBox::information(this, "ERRO NO SISTEMA",erro);
        }
}


void MainWindow::on_pushButtonAcessarFim_clicked()
{
    try{
    int elemento=teste.AcessarFim();
    QString saida="Ultimo Elemento da Lista: ";
    saida+=QString::number(elemento);
    ui->textEditSaida->setText(saida);
    }
    catch (QString &erro) {
    QMessageBox::information(this, "ERRO NO SISTEMA",erro);
    }
}

void MainWindow::on_pushButtonInserirFim_clicked()
{
    try {
            int elemento=ui->lineEditInserirElemento->text().toInt();
            teste.InserirFim(elemento);
            ui->lineEditInserirElemento->clear();
        } catch (QString &erro) {
        QMessageBox::information(this, "ERRO NO SISTEMA",erro);
        }
}





void MainWindow::on_pushButtonRemoverFim_clicked()
{
    try {
    teste.RemoverFim();
        } catch (QString &erro) {
        QMessageBox::information(this, "ERRO NO SISTEMA",erro);
        }
}


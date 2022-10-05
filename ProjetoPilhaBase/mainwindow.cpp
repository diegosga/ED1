#include "mainwindow.h"
#include "mudarbase.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,pino(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    if(pino) delete pino;
    delete ui;
}


void MainWindow::on_pushButtonIncluirNaPilha_clicked()
{
    pin= new dsg::MudarBase;
    int elemento=ui->lineEditElemento->text().toInt();
    int base=ui->comboBox->currentText().toInt();
    QString resultado=pin->CalcularMudanca(elemento,base);
    ui->textEditSaida->setText(resultado);

}


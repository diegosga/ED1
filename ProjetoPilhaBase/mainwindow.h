#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mudarbase.h"
#include <QMainWindow>
#include <pilha.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonCriarPilha_clicked();

    void on_pushButtonIncluirNaPilha_clicked();

private:
    Ui::MainWindow *ui;
    dsg::Pilha *pino;
    dsg::MudarBase *pin;
};
#endif // MAINWINDOW_H

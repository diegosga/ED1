#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <filaordenada.h>
#include <QMainWindow>
#include <fila.h>
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
    void on_pushButtonInserir_clicked();

    void on_pushButtonTamanho_clicked();

    void on_pushButtonAcessar_clicked();

    void on_pushButtonRemover_clicked();

    void on_pushButton_clicked();

    void on_pushButtonOrdenar_clicked();

private:
    Ui::MainWindow *ui;
    dsg::Fila *pino;
    dsg::FilaOrdenada *filao;
};
#endif // MAINWINDOW_H

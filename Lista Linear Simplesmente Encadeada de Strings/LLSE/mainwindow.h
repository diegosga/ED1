#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QString>
#include <QMainWindow>
#include<llse.h>
#include<QMessageBox>

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
    void on_pushButtonInserirInicio_clicked();

    void on_pushButtonMostrarLista_clicked();

    void on_pushButtonAcessarInicio_clicked();

    void on_pushButtonRemover_clicked();

    void on_pushButtonInserirFim_clicked();

    void on_pushButtonAcessarFim_clicked();

    void on_pushButtonRemoverFim_clicked();

private:
    Ui::MainWindow *ui;
    diego::LLSE teste;
};
#endif // MAINWINDOW_H

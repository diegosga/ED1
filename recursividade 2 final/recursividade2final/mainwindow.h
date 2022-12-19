#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "recursividade2.h"
#include <QMainWindow>
#include "ex3.h"
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
    void on_pushButtonb_clicked();

private:
    Ui::MainWindow *ui;
    dsg::recursividade2 r;
};
#endif // MAINWINDOW_H

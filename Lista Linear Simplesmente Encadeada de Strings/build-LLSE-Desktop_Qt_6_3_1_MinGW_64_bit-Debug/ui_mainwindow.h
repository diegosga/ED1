/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEditSaida;
    QLabel *label;
    QLineEdit *lineEditInserirElemento;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonInserirInicio;
    QPushButton *pushButtonAcessarInicio;
    QPushButton *pushButtonRemover;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButtonMostrarLista;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEditSaida = new QTextEdit(centralwidget);
        textEditSaida->setObjectName(QString::fromUtf8("textEditSaida"));
        textEditSaida->setGeometry(QRect(40, 220, 591, 201));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 71, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEditInserirElemento = new QLineEdit(centralwidget);
        lineEditInserirElemento->setObjectName(QString::fromUtf8("lineEditInserirElemento"));
        lineEditInserirElemento->setGeometry(QRect(170, 30, 151, 22));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(330, 30, 150, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonInserirInicio = new QPushButton(widget);
        pushButtonInserirInicio->setObjectName(QString::fromUtf8("pushButtonInserirInicio"));

        verticalLayout->addWidget(pushButtonInserirInicio);

        pushButtonAcessarInicio = new QPushButton(widget);
        pushButtonAcessarInicio->setObjectName(QString::fromUtf8("pushButtonAcessarInicio"));

        verticalLayout->addWidget(pushButtonAcessarInicio);

        pushButtonRemover = new QPushButton(widget);
        pushButtonRemover->setObjectName(QString::fromUtf8("pushButtonRemover"));

        verticalLayout->addWidget(pushButtonRemover);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 190, 301, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        pushButtonMostrarLista = new QPushButton(widget1);
        pushButtonMostrarLista->setObjectName(QString::fromUtf8("pushButtonMostrarLista"));

        horizontalLayout->addWidget(pushButtonMostrarLista);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">VALOR:</span></p></body></html>", nullptr));
        pushButtonInserirInicio->setText(QCoreApplication::translate("MainWindow", "INSERIR INICIO", nullptr));
        pushButtonAcessarInicio->setText(QCoreApplication::translate("MainWindow", "ACESSAR INICIO", nullptr));
        pushButtonRemover->setText(QCoreApplication::translate("MainWindow", "REMOVER INICIO", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">SAIDA:</span></p></body></html>", nullptr));
        pushButtonMostrarLista->setText(QCoreApplication::translate("MainWindow", "MOSTRAR LISTA COMPLETA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

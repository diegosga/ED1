/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonInserirInicio;
    QPushButton *pushButtonAcessarInicio;
    QPushButton *pushButtonRemover;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButtonMostrarLista;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonInserirFim;
    QPushButton *pushButtonAcessarFim;
    QPushButton *pushButtonRemoverFim;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEditSaida = new QTextEdit(centralwidget);
        textEditSaida->setObjectName("textEditSaida");
        textEditSaida->setGeometry(QRect(40, 220, 591, 201));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 71, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEditInserirElemento = new QLineEdit(centralwidget);
        lineEditInserirElemento->setObjectName("lineEditInserirElemento");
        lineEditInserirElemento->setGeometry(QRect(170, 30, 151, 22));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(330, 30, 150, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonInserirInicio = new QPushButton(layoutWidget);
        pushButtonInserirInicio->setObjectName("pushButtonInserirInicio");

        verticalLayout->addWidget(pushButtonInserirInicio);

        pushButtonAcessarInicio = new QPushButton(layoutWidget);
        pushButtonAcessarInicio->setObjectName("pushButtonAcessarInicio");

        verticalLayout->addWidget(pushButtonAcessarInicio);

        pushButtonRemover = new QPushButton(layoutWidget);
        pushButtonRemover->setObjectName("pushButtonRemover");

        verticalLayout->addWidget(pushButtonRemover);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 190, 301, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        pushButtonMostrarLista = new QPushButton(layoutWidget1);
        pushButtonMostrarLista->setObjectName("pushButtonMostrarLista");

        horizontalLayout->addWidget(pushButtonMostrarLista);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(510, 30, 141, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonInserirFim = new QPushButton(layoutWidget2);
        pushButtonInserirFim->setObjectName("pushButtonInserirFim");

        verticalLayout_2->addWidget(pushButtonInserirFim);

        pushButtonAcessarFim = new QPushButton(layoutWidget2);
        pushButtonAcessarFim->setObjectName("pushButtonAcessarFim");

        verticalLayout_2->addWidget(pushButtonAcessarFim);

        pushButtonRemoverFim = new QPushButton(layoutWidget2);
        pushButtonRemoverFim->setObjectName("pushButtonRemoverFim");

        verticalLayout_2->addWidget(pushButtonRemoverFim);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
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
        pushButtonInserirFim->setText(QCoreApplication::translate("MainWindow", "INSERIR FIM", nullptr));
        pushButtonAcessarFim->setText(QCoreApplication::translate("MainWindow", "ACESSAR FIM", nullptr));
        pushButtonRemoverFim->setText(QCoreApplication::translate("MainWindow", "REMOVER FIM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

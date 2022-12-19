/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditn1;
    QLineEdit *lineEditn2;
    QPushButton *pushButtonb;
    QTextEdit *textEditSaida;
    QPushButton *pushButton;
    QTextEdit *textEditSaida_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEditn1 = new QLineEdit(centralwidget);
        lineEditn1->setObjectName(QString::fromUtf8("lineEditn1"));
        lineEditn1->setGeometry(QRect(170, 110, 301, 28));
        lineEditn2 = new QLineEdit(centralwidget);
        lineEditn2->setObjectName(QString::fromUtf8("lineEditn2"));
        lineEditn2->setGeometry(QRect(170, 150, 301, 28));
        pushButtonb = new QPushButton(centralwidget);
        pushButtonb->setObjectName(QString::fromUtf8("pushButtonb"));
        pushButtonb->setGeometry(QRect(530, 140, 107, 29));
        textEditSaida = new QTextEdit(centralwidget);
        textEditSaida->setObjectName(QString::fromUtf8("textEditSaida"));
        textEditSaida->setGeometry(QRect(20, 210, 381, 301));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 110, 16, 16));
        textEditSaida_2 = new QTextEdit(centralwidget);
        textEditSaida_2->setObjectName(QString::fromUtf8("textEditSaida_2"));
        textEditSaida_2->setGeometry(QRect(410, 210, 351, 301));
        MainWindow->setCentralWidget(centralwidget);
        pushButton->raise();
        lineEditn1->raise();
        lineEditn2->raise();
        pushButtonb->raise();
        textEditSaida->raise();
        textEditSaida_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        pushButtonb->setText(QCoreApplication::translate("MainWindow", "Entrar", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

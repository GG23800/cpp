/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *VSlider1;
    QSlider *VSlider2;
    QLineEdit *Text_minsig;
    QLabel *Label_minsig;
    QCustomPlot *customPlot;
    QLineEdit *Text_maxsig;
    QLabel *Label_maxsig;
    QLineEdit *Text_minsat;
    QLabel *Label_minsat;
    QLabel *Label_maxsat;
    QLineEdit *Text_maxsat;
    QLabel *BitLabel;
    QLineEdit *BitText;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(887, 451);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VSlider1 = new QSlider(centralWidget);
        VSlider1->setObjectName(QStringLiteral("VSlider1"));
        VSlider1->setGeometry(QRect(10, 60, 20, 241));
        VSlider1->setOrientation(Qt::Vertical);
        VSlider2 = new QSlider(centralWidget);
        VSlider2->setObjectName(QStringLiteral("VSlider2"));
        VSlider2->setGeometry(QRect(480, 60, 20, 241));
        VSlider2->setMinimum(-100);
        VSlider2->setMaximum(100);
        VSlider2->setSliderPosition(0);
        VSlider2->setOrientation(Qt::Vertical);
        Text_minsig = new QLineEdit(centralWidget);
        Text_minsig->setObjectName(QStringLiteral("Text_minsig"));
        Text_minsig->setGeometry(QRect(70, 30, 41, 22));
        Text_minsig->setReadOnly(true);
        Label_minsig = new QLabel(centralWidget);
        Label_minsig->setObjectName(QStringLiteral("Label_minsig"));
        Label_minsig->setGeometry(QRect(0, 30, 81, 20));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(60, 60, 391, 301));
        Text_maxsig = new QLineEdit(centralWidget);
        Text_maxsig->setObjectName(QStringLiteral("Text_maxsig"));
        Text_maxsig->setGeometry(QRect(480, 30, 41, 22));
        Text_maxsig->setReadOnly(true);
        Label_maxsig = new QLabel(centralWidget);
        Label_maxsig->setObjectName(QStringLiteral("Label_maxsig"));
        Label_maxsig->setGeometry(QRect(400, 30, 81, 20));
        Text_minsat = new QLineEdit(centralWidget);
        Text_minsat->setObjectName(QStringLiteral("Text_minsat"));
        Text_minsat->setGeometry(QRect(90, 370, 41, 22));
        Text_minsat->setReadOnly(true);
        Label_minsat = new QLabel(centralWidget);
        Label_minsat->setObjectName(QStringLiteral("Label_minsat"));
        Label_minsat->setGeometry(QRect(0, 370, 101, 20));
        Label_maxsat = new QLabel(centralWidget);
        Label_maxsat->setObjectName(QStringLiteral("Label_maxsat"));
        Label_maxsat->setGeometry(QRect(390, 370, 101, 20));
        Text_maxsat = new QLineEdit(centralWidget);
        Text_maxsat->setObjectName(QStringLiteral("Text_maxsat"));
        Text_maxsat->setGeometry(QRect(490, 370, 41, 22));
        Text_maxsat->setReadOnly(true);
        BitLabel = new QLabel(centralWidget);
        BitLabel->setObjectName(QStringLiteral("BitLabel"));
        BitLabel->setGeometry(QRect(180, 370, 111, 16));
        BitText = new QLineEdit(centralWidget);
        BitText->setObjectName(QStringLiteral("BitText"));
        BitText->setGeometry(QRect(280, 370, 51, 22));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(580, 90, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 887, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Text_minsig->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        Label_minsig->setText(QApplication::translate("MainWindow", "Min signal:", Q_NULLPTR));
        Text_maxsig->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        Label_maxsig->setText(QApplication::translate("MainWindow", "Max signal:", Q_NULLPTR));
        Text_minsat->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        Label_minsat->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Min saturation:</p></body></html>", Q_NULLPTR));
        Label_maxsat->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Max saturation:</p></body></html>", Q_NULLPTR));
        Text_maxsat->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        BitLabel->setText(QApplication::translate("MainWindow", "Number of bits:", Q_NULLPTR));
        BitText->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

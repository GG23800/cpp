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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actiontest;
    QAction *actionmenu_1;
    QAction *actionmenu_2;
    QAction *actionmenu_3;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menumenu_deroulant;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(566, 465);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        actiontest = new QAction(MainWindow);
        actiontest->setObjectName(QStringLiteral("actiontest"));
        actionmenu_1 = new QAction(MainWindow);
        actionmenu_1->setObjectName(QStringLiteral("actionmenu_1"));
        actionmenu_2 = new QAction(MainWindow);
        actionmenu_2->setObjectName(QStringLiteral("actionmenu_2"));
        actionmenu_3 = new QAction(MainWindow);
        actionmenu_3->setObjectName(QStringLiteral("actionmenu_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 566, 19));
        menumenu_deroulant = new QMenu(menuBar);
        menumenu_deroulant->setObjectName(QStringLiteral("menumenu_deroulant"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menumenu_deroulant->menuAction());
        menumenu_deroulant->addAction(actionmenu_1);
        menumenu_deroulant->addAction(actionmenu_2);
        menumenu_deroulant->addAction(actionmenu_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionFile->setText(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        actiontest->setText(QApplication::translate("MainWindow", "test", Q_NULLPTR));
        actionmenu_1->setText(QApplication::translate("MainWindow", "menu 1", Q_NULLPTR));
        actionmenu_2->setText(QApplication::translate("MainWindow", "menu 2", Q_NULLPTR));
        actionmenu_3->setText(QApplication::translate("MainWindow", "menu 3", Q_NULLPTR));
        menumenu_deroulant->setTitle(QApplication::translate("MainWindow", "menu deroulant", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(800, 600);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 100, 93, 28));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu->setStatusBar(statusbar);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "inicio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *VX5;
    QSpinBox *numeroc;
    QDoubleSpinBox *Y4;
    QLabel *cuerpo2;
    QLabel *cuerpo4;
    QLabel *y;
    QLabel *y2;
    QLabel *masa2;
    QLabel *vy;
    QLabel *x;
    QDoubleSpinBox *Y5;
    QLabel *x2;
    QDoubleSpinBox *VX4;
    QDoubleSpinBox *Vyo;
    QPushButton *pushButton_2;
    QDoubleSpinBox *Vxo;
    QDoubleSpinBox *VX3;
    QDoubleSpinBox *Yo;
    QDoubleSpinBox *VY5;
    QDoubleSpinBox *Xo;
    QDoubleSpinBox *X4;
    QDoubleSpinBox *VY4;
    QDoubleSpinBox *YI;
    QDoubleSpinBox *VY3;
    QDoubleSpinBox *XI;
    QDoubleSpinBox *X3;
    QDoubleSpinBox *X5;
    QLabel *cuerpo3;
    QPushButton *pushButton_3;
    QDoubleSpinBox *masa;
    QPushButton *pushButton;
    QLabel *cuerpo5;
    QLabel *numc;
    QDoubleSpinBox *Y3;
    QLabel *vx;
    QLabel *cuerpo1;
    QLabel *Bola;
    QLabel *Bola1;
    QLabel *Bola_3;
    QLabel *Bola_2;
    QLabel *Bola_4;
    QLabel *Bola_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1077, 686);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 773, 276));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        VX5 = new QDoubleSpinBox(layoutWidget);
        VX5->setObjectName(QString::fromUtf8("VX5"));
        VX5->setMinimum(-99999999999999995280522225138166806691251291352861698530421623488512.000000000000000);
        VX5->setMaximum(100000000000000004384584304507619735463404765184.000000000000000);

        gridLayout->addWidget(VX5, 7, 6, 1, 1);

        numeroc = new QSpinBox(layoutWidget);
        numeroc->setObjectName(QString::fromUtf8("numeroc"));

        gridLayout->addWidget(numeroc, 0, 5, 1, 1);

        Y4 = new QDoubleSpinBox(layoutWidget);
        Y4->setObjectName(QString::fromUtf8("Y4"));
        Y4->setMinimum(-99999999999999999322094867436162797646170844194406400.000000000000000);
        Y4->setMaximum(100000000000000000620008645040778319495168.000000000000000);

        gridLayout->addWidget(Y4, 6, 5, 1, 1);

        cuerpo2 = new QLabel(layoutWidget);
        cuerpo2->setObjectName(QString::fromUtf8("cuerpo2"));

        gridLayout->addWidget(cuerpo2, 4, 0, 1, 2);

        cuerpo4 = new QLabel(layoutWidget);
        cuerpo4->setObjectName(QString::fromUtf8("cuerpo4"));

        gridLayout->addWidget(cuerpo4, 6, 0, 1, 2);

        y = new QLabel(layoutWidget);
        y->setObjectName(QString::fromUtf8("y"));

        gridLayout->addWidget(y, 3, 5, 1, 1);

        y2 = new QLabel(layoutWidget);
        y2->setObjectName(QString::fromUtf8("y2"));

        gridLayout->addWidget(y2, 1, 5, 1, 1);

        masa2 = new QLabel(layoutWidget);
        masa2->setObjectName(QString::fromUtf8("masa2"));

        gridLayout->addWidget(masa2, 1, 6, 1, 1);

        vy = new QLabel(layoutWidget);
        vy->setObjectName(QString::fromUtf8("vy"));

        gridLayout->addWidget(vy, 3, 7, 1, 1);

        x = new QLabel(layoutWidget);
        x->setObjectName(QString::fromUtf8("x"));

        gridLayout->addWidget(x, 3, 2, 1, 2);

        Y5 = new QDoubleSpinBox(layoutWidget);
        Y5->setObjectName(QString::fromUtf8("Y5"));
        Y5->setMinimum(-99999999999999996863366107917975552.000000000000000);
        Y5->setMaximum(9999999999999999538762658202121142272.000000000000000);

        gridLayout->addWidget(Y5, 7, 5, 1, 1);

        x2 = new QLabel(layoutWidget);
        x2->setObjectName(QString::fromUtf8("x2"));

        gridLayout->addWidget(x2, 1, 2, 1, 1);

        VX4 = new QDoubleSpinBox(layoutWidget);
        VX4->setObjectName(QString::fromUtf8("VX4"));
        VX4->setMinimum(-100000000000000007629769841091887003294964970946560.000000000000000);
        VX4->setMaximum(10000000000000000102350670204085511496304388135324745728.000000000000000);

        gridLayout->addWidget(VX4, 6, 6, 1, 1);

        Vyo = new QDoubleSpinBox(layoutWidget);
        Vyo->setObjectName(QString::fromUtf8("Vyo"));
        Vyo->setMinimum(-10000000000000000470601344959054695891559601407866630764278709534898249531392.000000000000000);
        Vyo->setMaximum(999999999999999926539781176481198923508803215199467887262646419780362305536.000000000000000);

        gridLayout->addWidget(Vyo, 4, 7, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        Vxo = new QDoubleSpinBox(layoutWidget);
        Vxo->setObjectName(QString::fromUtf8("Vxo"));
        Vxo->setMinimum(-10000000000000000139372116959414099130712064.000000000000000);
        Vxo->setMaximum(10000000000000000102350670204085511496304388135324745728.000000000000000);

        gridLayout->addWidget(Vxo, 4, 6, 1, 1);

        VX3 = new QDoubleSpinBox(layoutWidget);
        VX3->setObjectName(QString::fromUtf8("VX3"));
        VX3->setMinimum(-9999999999999999493871352970740188669636450110134100730839040.000000000000000);
        VX3->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);

        gridLayout->addWidget(VX3, 5, 6, 1, 1);

        Yo = new QDoubleSpinBox(layoutWidget);
        Yo->setObjectName(QString::fromUtf8("Yo"));
        Yo->setMinimum(-99999999999999999322094867436162797646170844194406400.000000000000000);
        Yo->setMaximum(10000000000000000146306952306748730309700429878646550592786107871697963642511482159104.000000000000000);

        gridLayout->addWidget(Yo, 4, 5, 1, 1);

        VY5 = new QDoubleSpinBox(layoutWidget);
        VY5->setObjectName(QString::fromUtf8("VY5"));
        VY5->setMinimum(-9999999999999999931398190359470212947659194368.000000000000000);
        VY5->setMaximum(1000000000000000048346692115553659057528394845890514255872.000000000000000);

        gridLayout->addWidget(VY5, 7, 7, 1, 1);

        Xo = new QDoubleSpinBox(layoutWidget);
        Xo->setObjectName(QString::fromUtf8("Xo"));
        Xo->setMinimum(-9999999999999999464902769475481793196872414789632.000000000000000);
        Xo->setMaximum(9999999999999999438119489974413630815797154428513196965888.000000000000000);

        gridLayout->addWidget(Xo, 4, 2, 1, 3);

        X4 = new QDoubleSpinBox(layoutWidget);
        X4->setObjectName(QString::fromUtf8("X4"));
        X4->setMinimum(-1000000000000000078291540404596243842305360299886116864.000000000000000);
        X4->setMaximum(99999999999999999322094867436162797646170844194406400.000000000000000);

        gridLayout->addWidget(X4, 6, 2, 1, 3);

        VY4 = new QDoubleSpinBox(layoutWidget);
        VY4->setObjectName(QString::fromUtf8("VY4"));
        VY4->setMinimum(-9999999999999999464902769475481793196872414789632.000000000000000);
        VY4->setMaximum(9999999999999999932209486743616279764617084419440640.000000000000000);

        gridLayout->addWidget(VY4, 6, 7, 1, 1);

        YI = new QDoubleSpinBox(layoutWidget);
        YI->setObjectName(QString::fromUtf8("YI"));
        YI->setMinimum(-1000000000000000078291540404596243842305360299886116864.000000000000000);
        YI->setMaximum(10000000000000000213204190094543968723012578712679649467743338496.000000000000000);

        gridLayout->addWidget(YI, 2, 5, 1, 1);

        VY3 = new QDoubleSpinBox(layoutWidget);
        VY3->setObjectName(QString::fromUtf8("VY3"));
        VY3->setMinimum(-1000000000000000044885712678075916785549312.000000000000000);
        VY3->setMaximum(9999999999999999932209486743616279764617084419440640.000000000000000);

        gridLayout->addWidget(VY3, 5, 7, 1, 1);

        XI = new QDoubleSpinBox(layoutWidget);
        XI->setObjectName(QString::fromUtf8("XI"));
        XI->setMinimum(-10000000000000000139372116959414099130712064.000000000000000);
        XI->setMaximum(99999999999999999322094867436162797646170844194406400.000000000000000);

        gridLayout->addWidget(XI, 2, 2, 1, 3);

        X3 = new QDoubleSpinBox(layoutWidget);
        X3->setObjectName(QString::fromUtf8("X3"));
        X3->setMinimum(-99999999999999999209038626283633850822756121694230455365568299008.000000000000000);
        X3->setMaximum(1000000000000000044885712678075916785549312.000000000000000);

        gridLayout->addWidget(X3, 5, 2, 1, 3);

        X5 = new QDoubleSpinBox(layoutWidget);
        X5->setObjectName(QString::fromUtf8("X5"));
        X5->setMinimum(-100000000000000007629769841091887003294964970946560.000000000000000);
        X5->setMaximum(99999999999999997748809823456034029568.000000000000000);

        gridLayout->addWidget(X5, 7, 2, 1, 3);

        cuerpo3 = new QLabel(layoutWidget);
        cuerpo3->setObjectName(QString::fromUtf8("cuerpo3"));

        gridLayout->addWidget(cuerpo3, 5, 0, 1, 2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 6, 1, 1);

        masa = new QDoubleSpinBox(layoutWidget);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setMaximum(9999999999999999827367757839185598317239782875580932278577147150336.000000000000000);

        gridLayout->addWidget(masa, 2, 6, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 8, 0, 1, 3);

        cuerpo5 = new QLabel(layoutWidget);
        cuerpo5->setObjectName(QString::fromUtf8("cuerpo5"));

        gridLayout->addWidget(cuerpo5, 7, 0, 1, 2);

        numc = new QLabel(layoutWidget);
        numc->setObjectName(QString::fromUtf8("numc"));

        gridLayout->addWidget(numc, 0, 4, 1, 1);

        Y3 = new QDoubleSpinBox(layoutWidget);
        Y3->setObjectName(QString::fromUtf8("Y3"));
        Y3->setMinimum(-999999999999999993220948674361627976461708441944064.000000000000000);
        Y3->setMaximum(1000000000000000048346692115553659057528394845890514255872.000000000000000);

        gridLayout->addWidget(Y3, 5, 5, 1, 1);

        vx = new QLabel(layoutWidget);
        vx->setObjectName(QString::fromUtf8("vx"));

        gridLayout->addWidget(vx, 3, 6, 1, 1);

        cuerpo1 = new QLabel(layoutWidget);
        cuerpo1->setObjectName(QString::fromUtf8("cuerpo1"));

        gridLayout->addWidget(cuerpo1, 2, 0, 1, 1);

        Bola = new QLabel(centralwidget);
        Bola->setObjectName(QString::fromUtf8("Bola"));
        Bola->setGeometry(QRect(710, 480, 31, 21));
        Bola->setPixmap(QPixmap(QString::fromUtf8(":/bola1.jpg")));
        Bola->setScaledContents(true);
        Bola1 = new QLabel(centralwidget);
        Bola1->setObjectName(QString::fromUtf8("Bola1"));
        Bola1->setGeometry(QRect(640, 460, 31, 21));
        Bola1->setPixmap(QPixmap(QString::fromUtf8(":/bola.jpg")));
        Bola1->setScaledContents(true);
        Bola_3 = new QLabel(centralwidget);
        Bola_3->setObjectName(QString::fromUtf8("Bola_3"));
        Bola_3->setGeometry(QRect(610, 530, 31, 21));
        Bola_3->setPixmap(QPixmap(QString::fromUtf8(":/bola3.jpg")));
        Bola_3->setScaledContents(true);
        Bola_2 = new QLabel(centralwidget);
        Bola_2->setObjectName(QString::fromUtf8("Bola_2"));
        Bola_2->setGeometry(QRect(580, 480, 31, 21));
        Bola_2->setPixmap(QPixmap(QString::fromUtf8(":/bola2.jpg")));
        Bola_2->setScaledContents(true);
        Bola_4 = new QLabel(centralwidget);
        Bola_4->setObjectName(QString::fromUtf8("Bola_4"));
        Bola_4->setGeometry(QRect(710, 570, 31, 21));
        Bola_4->setPixmap(QPixmap(QString::fromUtf8(":/bola4.jpg")));
        Bola_4->setScaledContents(true);
        Bola_5 = new QLabel(centralwidget);
        Bola_5->setObjectName(QString::fromUtf8("Bola_5"));
        Bola_5->setGeometry(QRect(790, 550, 31, 21));
        Bola_5->setPixmap(QPixmap(QString::fromUtf8(":/bola5.jpg")));
        Bola_5->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cuerpo2->setText(QCoreApplication::translate("MainWindow", "Cuerpo 2", nullptr));
        cuerpo4->setText(QCoreApplication::translate("MainWindow", "Cuerpo 4", nullptr));
        y->setText(QCoreApplication::translate("MainWindow", "Posicion Y", nullptr));
        y2->setText(QCoreApplication::translate("MainWindow", "Posicion Y", nullptr));
        masa2->setText(QCoreApplication::translate("MainWindow", "Masa", nullptr));
        vy->setText(QCoreApplication::translate("MainWindow", "Velocidad Yo", nullptr));
        x->setText(QCoreApplication::translate("MainWindow", "Posicion X", nullptr));
        x2->setText(QCoreApplication::translate("MainWindow", "Posicion X", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Fin", nullptr));
        cuerpo3->setText(QCoreApplication::translate("MainWindow", "Cuerpo 3", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Inicio", nullptr));
        cuerpo5->setText(QCoreApplication::translate("MainWindow", "Cuerpo 5", nullptr));
        numc->setText(QCoreApplication::translate("MainWindow", "#Cuerpos", nullptr));
        vx->setText(QCoreApplication::translate("MainWindow", "Velocidad Xo", nullptr));
        cuerpo1->setText(QCoreApplication::translate("MainWindow", "Cuerpo 1", nullptr));
        Bola->setText(QString());
        Bola1->setText(QString());
        Bola_3->setText(QString());
        Bola_2->setText(QString());
        Bola_4->setText(QString());
        Bola_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

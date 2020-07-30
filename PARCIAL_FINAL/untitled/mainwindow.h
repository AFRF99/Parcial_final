#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include<string>
#include<stdlib.h>
#include <fstream>
using namespace std;
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
    void move();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



private:
    QTimer *timer;
    double x,xi,yi, y, vx, vy, T=0.01, ax2,ay2,ax3,ay3,ax4,ay4,ax5,ay5,a=-9.8,G=1,masa,ra,r3,r4,r5,yo,x3,x4,x5,y3,y4,y5,vx3,vx4,vx5,vy3,vy4,vy5;
    string info;
    string parte;
    Ui::MainWindow *ui;
    float dt;
    int h_limit;
    int v_limit;
    QGraphicsScene *scene;

};
#endif // MAINWINDOW_H

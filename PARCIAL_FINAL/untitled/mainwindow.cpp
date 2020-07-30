#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsTextItem>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //info=lectura();

    ui->setupUi(this);
    ui->pushButton->setEnabled(true);


    ui->Bola->setVisible(true);
    ui->Bola1->setVisible(true);
    ui->Bola_2->setVisible(true);
    ui->Bola_3->setVisible(true);
    ui->Bola_4->setVisible(true);
    v_limit=625;
    h_limit=999;
    timer = new QTimer(this);
    scene = new QGraphicsScene(this);//crea escena
    scene->setSceneRect(0,0,h_limit,v_limit);//limites de la escena

    scene->addRect(scene->sceneRect());





    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
}
int n=5;
MainWindow::~MainWindow()
{
    delete ui;
}
int escala=10;
void MainWindow::move()
{
    if(n==5){

        ra=sqrt(pow((xi-x),2)+ pow((yi-y),2));
        ay2=((G*masa)*(yi-y))/pow(ra,3);
        ax2=((G*masa)*(xi-x))/pow(ra,3);
        vy+=(ay2*T);
        vx+=(ax2*T);
        x+=(vx*T);
        y+=vy*T;

        r3=sqrt(pow((xi-x3),2)+ pow((yi-y3),2));
        ay3=((G*masa)*(yi-y3))/pow(r3,3);
        ax3=((G*masa)*(xi-x3))/pow(r3,3);
        vy3+=(ay3*T);
        vx3+=(ax3*T);
        x3+=(vx3*T);
        y3+=vy3*T;

        r4=sqrt(pow((xi-x4),2)+ pow((yi-y4),2));
        ay4=((G*masa)*(yi-y4))/pow(r4,3);
        ax4=((G*masa)*(xi-x4))/pow(r4,3);
        vy4+=(ay4*T);
        vx4+=(ax4*T);
        x4+=(vx4*T);
        y4+=vy4*T;

        r5=sqrt(pow((xi-x),2)+ pow((yi-y5),2));
        ay5=((G*masa)*(yi-y5))/pow(r5,3);
        ax5=((G*masa)*(xi-x5))/pow(r5,3);
        vy5+=(ay5*T);
        vx5+=(ax5*T);
        x5+=(vx5*T);
        y5+=vy5*T;
    }

    double wx=1077/2;
    double wy=686/2;
    ui->Bola->setGeometry(double(x/escala+wx),double(y/escala+wy),ui->Bola->width(),ui->Bola->height());
    ui->Bola1->setGeometry(double(xi/escala+wx),double(yi/escala+wy),ui->Bola1->width(),ui->Bola1->height());
    ui->Bola_2->setGeometry(double(x3/escala+wx),double(y3/escala+wy),ui->Bola_2->width(),ui->Bola_2->height());
    ui->Bola_3->setGeometry(double(x4/escala+wx),double(y4/escala+wy),ui->Bola_3->width(),ui->Bola_3->height());
    ui->Bola_4->setGeometry(double(x5/escala+wx),double(y5/escala+wy),ui->Bola_4->width(),ui->Bola_4->height());


}


void MainWindow::on_pushButton_clicked()
{
    timer->start(dt);

    ui->pushButton->setEnabled(true);

    x=0;
    y=0;
    masa=50000;
    vx=1;
    vy=0;
    xi=1000;
    yi=1000;
    x3=-3000;
    y3=0;
    vx3=-1;
    vy3=0;
    x4=3500;
    y4=-2500;
    vx4=0;
    vy4=1;
    x5=3000;
    y5=-1000;
    vx5=0;
    vy5=-1;

    //escritura

    if(n==5){
        ofstream archivo;
        archivo.open("datos.txt",ios::app);
        archivo<<"Cuerpo 1"<<"   x: "<<xi<<"    y: "<<yi<<"    masa: "<<masa<<endl;
        archivo<<"Cuerpo 2"<<"   x: "<<x<<"    y: "<<y<<"   vx: "<<vx<<"    vy: "<<vy<<endl;
        archivo<<"Cuerpo 3"<<"   x: "<<x3<<"    y: "<<y3<<"   vx: "<<vx3<<"    vy: "<<vy3<<endl;
        archivo<<"Cuerpo 4"<<"   x: "<<x4<<"    y: "<<y4<<"   vx: "<<vx4<<"    vy: "<<vy4<<endl;
        archivo<<"Cuerpo 5"<<"   x: "<<x5<<"    y: "<<y5<<"   vx: "<<vx5<<"    vy: "<<vy5<<endl<<endl;
        archivo.close();
        ui->Bola->setVisible(true);
        ui->Bola1->setVisible(true);
        ui->Bola_2->setVisible(true);
        ui->Bola_3->setVisible(true);
        ui->Bola_4->setVisible(true);
    }

   //

    ui->pushButton->setVisible(true);


    timer->start(int(T*10));
}

void MainWindow::on_pushButton_2_clicked()
{

    ui->pushButton->setEnabled(true);
    ui->Bola->setVisible(true);
    ui->Bola1->setVisible(true);
    ui->Bola_2->setVisible(true);
    ui->Bola_3->setVisible(true);
    ui->Bola_4->setVisible(true);

    //ui->pushButton_2->setVisible(true);

    timer->stop();
}

void MainWindow::on_pushButton_3_clicked()
{

    if(n==5){

        ui->pushButton->setEnabled(true);

    }

}

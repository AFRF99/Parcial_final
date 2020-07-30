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
    t= new QTimer;
    ui->setupUi(this);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->XI->setEnabled(false);
    ui->Xo->setEnabled(false);
    ui->X3->setEnabled(false);
    ui->X4->setEnabled(false);
    ui->X5->setEnabled(false);

    ui->YI->setEnabled(false);
    ui->Yo->setEnabled(false);
    ui->Y3->setEnabled(false);
    ui->Y4->setEnabled(false);
    ui->Y5->setEnabled(false);

    ui->Vxo->setEnabled(false);
    ui->VX3->setEnabled(false);
    ui->VX4->setEnabled(false);
    ui->VX5->setEnabled(false);

    ui->Vyo->setEnabled(false);
    ui->VY3->setEnabled(false);
    ui->VY4->setEnabled(false);
    ui->VY5->setEnabled(false);

    ui->Vxo->setEnabled(false);
    ui->VX3->setEnabled(false);
    ui->VX4->setEnabled(false);
    ui->VX5->setEnabled(false);
    ui->masa->setEnabled(false);


    ui->Bola->setVisible(false);
    ui->Bola1->setVisible(false);
    ui->Bola_2->setVisible(false);
    ui->Bola_3->setVisible(false);
    ui->Bola_4->setVisible(false);

    connect(t,SIGNAL(timeout()),this,SLOT(move()));
}
int n=0;
MainWindow::~MainWindow()
{
    delete ui;
}
int escala=10;
void MainWindow::move()
{
    if(n==2){
    ra=sqrt(pow((xi-x),2)+ pow((yi-y),2));
    ay2=((G*masa)*(yi-y))/pow(ra,3);
    ax2=((G*masa)*(xi-x))/pow(ra,3);
    vy+=(ay2*T);
    vx+=(ax2*T);
    x+=(vx*T);
    y+=vy*T;
   }
    if(n==3){
    ra=sqrt(pow((xi-x),2)+ pow((yi-y),2));
    r3=sqrt(pow((x3-x),2)+ pow((y3-y),2));
    ay2=((G*masa)*(yi-y))/pow(ra,3)+((G*masa)*(y3-y))/pow(r3,3);
    ax2=((G*masa)*(xi-x))/pow(ra,3)+((G*masa)*(x3-x))/pow(r3,3);
    vy+=(ay2*T);
    vx+=(ax2*T);
    x+=(vx*T);
    y+=vy*T;
    ra=sqrt(pow((xi-x3),2)+ pow((yi-y3),2));
    r3=sqrt(pow((x-x3),2)+ pow((y-y3),2));
    ay3=((G*masa)*(yi-y3))/pow(ra,3)+((G*masa)*(y-y3))/pow(r3,3);
    ax3=((G*masa)*(xi-x3))/pow(ra,3)+((G*masa)*(x-x3))/pow(r3,3);
    vy3+=(ay3*T);
    vx3+=(ax3*T);
    x3+=(vx3*T);
    y3+=vy3*T;
   }
    if(n==4){
    ra=sqrt(pow((xi-x),2)+ pow((yi-y),2));
    r3=sqrt(pow((x3-x),2)+ pow((y3-y),2));
    r4=sqrt(pow((x4-x),2)+ pow((y4-y),2));
    ay2=((G*masa)*(yi-y))/pow(ra,3)+((G*masa)*(y3-y))/pow(r3,3)+((G*masa)*(y4-y))/pow(r4,3);
    ax2=((G*masa)*(xi-x))/pow(ra,3)+((G*masa)*(x3-x))/pow(r3,3)+((G*masa)*(x4-x))/pow(r4,3);
    vy+=(ay2*T);
    vx+=(ax2*T);
    x+=(vx*T);
    y+=vy*T;
    ra=sqrt(pow((xi-x3),2)+ pow((yi-y3),2));
    r3=sqrt(pow((x-x3),2)+ pow((y-y3),2));
    r4=sqrt(pow((x4-x3),2)+ pow((y4-y3),2));
    ay3=((G*masa)*(yi-y3))/pow(ra,3)+((G*masa)*(y-y3))/pow(r3,3)+((G*masa)*(y4-y3))/pow(r4,3);
    ax3=((G*masa)*(xi-x3))/pow(ra,3)+((G*masa)*(x-x3))/pow(r3,3)+((G*masa)*(x4-x3))/pow(r4,3);
    vy3+=(ay3*T);
    vx3+=(ax3*T);
    x3+=(vx3*T);
    y3+=vy3*T;
    ra=sqrt(pow((xi-x4),2)+ pow((yi-y4),2));
    r3=sqrt(pow((x-x4),2)+ pow((y-y3),2));
    r4=sqrt(pow((x3-x4),2)+ pow((y3-y4),2));
    ay4=((G*masa)*(yi-y4))/pow(ra,3)+((G*masa)*(y-y4))/pow(r3,3)+((G*masa)*(y3-y4))/pow(r4,3);
    ax4=((G*masa)*(xi-x4))/pow(ra,3)+((G*masa)*(x-x4))/pow(r3,3)+((G*masa)*(x3-x4))/pow(r4,3);
    vy4+=(ay4*T);
    vx4+=(ax4*T);
    x4+=(vx4*T);
    y4+=vy4*T;
   }
    if(n==5){
    ra=sqrt(pow((xi-x),2)+ pow((yi-y),2));
    r3=sqrt(pow((x3-x),2)+ pow((y3-y),2));
    r4=sqrt(pow((x4-x),2)+ pow((y4-y),2));
    r5=sqrt(pow((x5-x),2)+ pow((y5-y),2));
    ay2=((G*masa)*(yi-y))/pow(ra,3)+((G*masa)*(y3-y))/pow(r3,3)+((G*masa)*(y4-y))/pow(r4,3)+((G*masa)*(y5-y))/pow(r5,3);
    ax2=((G*masa)*(xi-x))/pow(ra,3)+((G*masa)*(x3-x))/pow(r3,3)+((G*masa)*(x4-x))/pow(r4,3)+((G*masa)*(x5-x))/pow(r5,3);
    vy+=(ay2*T);
    vx+=(ax2*T);
    x+=(vx*T);
    y+=vy*T;
    ra=sqrt(pow((xi-x3),2)+ pow((yi-y3),2));
    r3=sqrt(pow((x-x3),2)+ pow((y-y3),2));
    r4=sqrt(pow((x4-x3),2)+ pow((y4-y3),2));
    r5=sqrt(pow((x5-x3),2)+ pow((y5-y3),2));
    ay3=((G*masa)*(yi-y))/pow(ra,3)+((G*masa)*(y-y3))/pow(r3,3)+((G*masa)*(y4-y3))/pow(r4,3)+((G*masa)*(y5-y3))/pow(r5,3);
    ax3=((G*masa)*(xi-x))/pow(ra,3)+((G*masa)*(x-x3))/pow(r3,3)+((G*masa)*(x4-x3))/pow(r4,3)+((G*masa)*(x5-x3))/pow(r5,3);
    vy3+=(ay3*T);
    vx3+=(ax3*T);
    x3+=(vx3*T);
    y3+=vy3*T;
    ra=sqrt(pow((xi-x4),2)+ pow((yi-y4),2));
    r3=sqrt(pow((x-x4),2)+ pow((y-y4),2));
    r4=sqrt(pow((x3-x4),2)+ pow((y3-y4),2));
    r5=sqrt(pow((x5-x4),2)+ pow((y5-y4),2));
    ay4=((G*masa)*(yi-y4))/pow(ra,3)+((G*masa)*(y-y4))/pow(r3,3)+((G*masa)*(y3-y4))/pow(r4,3)+((G*masa)*(y5-y4))/pow(r5,3);
    ax4=((G*masa)*(xi-x4))/pow(ra,3)+((G*masa)*(x-x4))/pow(r3,3)+((G*masa)*(x3-x4))/pow(r4,3)+((G*masa)*(x5-x4))/pow(r5,3);
    vy4+=(ay4*T);
    vx4+=(ax4*T);
    x4+=(vx4*T);
    y4+=vy4*T;
    ra=sqrt(pow((xi-x5),2)+ pow((yi-y5),2));
    r3=sqrt(pow((x-x5),2)+ pow((y-y5),2));
    r4=sqrt(pow((x3-x5),2)+ pow((y3-y5),2));
    r5=sqrt(pow((x4-x5),2)+ pow((y4-y5),2));
    ay5=((G*masa)*(yi-y5))/pow(ra,3)+((G*masa)*(y-y5))/pow(r3,3)+((G*masa)*(y3-y5))/pow(r4,3)+((G*masa)*(y4-y5))/pow(r5,3);
    ax5=((G*masa)*(xi-x5))/pow(ra,3)+((G*masa)*(x-x5))/pow(r3,3)+((G*masa)*(x3-x5))/pow(r4,3)+((G*masa)*(x4-x5))/pow(r5,3);
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
    ui->pushButton_2->setEnabled(true);
    ui->pushButton->setEnabled(false);

    x=ui->Xo->value();
    y=ui->Yo->value();
    masa=ui->masa->value();
    vx=ui->Vxo->value();
    vy=ui->Vyo->value();
    xi=ui->XI->value();
    yi=ui->YI->value();
    x3=ui->X3->value();
    y3=ui->Y3->value();
    vx3=ui->VX3->value();
    vy3=ui->VY3->value();
    x4=ui->X4->value();
    y4=ui->Y4->value();
    vx4=ui->VX4->value();
    vy4=ui->VY4->value();
    x5=ui->X5->value();
    y5=ui->Y5->value();
    vx5=ui->VX5->value();
    vy5=ui->VY5->value();

    //escritura
    if(n==2){
       ofstream archivo;
       archivo.open("datos.txt",ios::app);
       archivo<<"Cuerpo 1"<<"   x: "<<xi<<"    y: "<<yi<<"    masa: "<<masa<<endl;
       archivo<<"Cuerpo 2"<<"   x: "<<x<<"    y: "<<y<<"   vx: "<<vx<<"    vy: "<<vy<<endl<<endl;
       archivo.close();

       ui->Bola->setVisible(true);
       ui->Bola1->setVisible(true);
    }
    if(n==3){
        ofstream archivo;
        archivo.open("datos.txt",ios::app);
        archivo<<"Cuerpo 1"<<"   x: "<<xi<<"    y: "<<yi<<"    masa: "<<masa<<endl;
        archivo<<"Cuerpo 2"<<"   x: "<<x<<"    y: "<<y<<"   vx: "<<vx<<"    vy: "<<vy<<endl;
        archivo<<"Cuerpo 3"<<"   x: "<<x3<<"    y: "<<y3<<"   vx: "<<vx3<<"    vy: "<<vy3<<endl<<endl;
        archivo.close();
        ui->Bola->setVisible(true);
        ui->Bola1->setVisible(true);
        ui->Bola_2->setVisible(true);
    }
    if(n==4){
        ofstream archivo;
        archivo.open("datos.txt",ios::app);
        archivo<<"Cuerpo 1"<<"   x: "<<xi<<"    y: "<<yi<<"    masa: "<<masa<<endl;
        archivo<<"Cuerpo 2"<<"   x: "<<x<<"    y: "<<y<<"   vx: "<<vx<<"    vy: "<<vy<<endl;
        archivo<<"Cuerpo 3"<<"   x: "<<x3<<"    y: "<<y3<<"   vx: "<<vx3<<"    vy: "<<vy3<<endl;
        archivo<<"Cuerpo 4"<<"   x: "<<x4<<"    y: "<<y4<<"   vx: "<<vx4<<"    vy: "<<vy4<<endl<<endl;
        archivo.close();
        ui->Bola->setVisible(true);
        ui->Bola1->setVisible(true);
        ui->Bola_2->setVisible(true);
        ui->Bola_3->setVisible(true);
    }
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
    ui->Xo->setEnabled(false);
    ui->masa->setEnabled(false);
    ui->Yo->setEnabled(false);
    ui->Vxo->setEnabled(false);
    ui->Vyo->setEnabled(false);
    ui->XI->setEnabled(false);
    ui->YI->setEnabled(false);
    ui->X3->setEnabled(false);
    ui->Y3->setEnabled(false);
    ui->VX3->setEnabled(false);
    ui->VY3->setEnabled(false);
    ui->X4->setEnabled(false);
    ui->Y4->setEnabled(false);
    ui->VX4->setEnabled(false);
    ui->VY4->setEnabled(false);
    ui->X5->setEnabled(false);
    ui->Y5->setEnabled(false);
    ui->VX5->setEnabled(false);
    ui->VY5->setEnabled(false);

//quitar los cuadros
    ui->Xo->setVisible(false);
    ui->masa->setVisible(false);
    ui->Yo->setVisible(false);
    ui->Vxo->setVisible(false);
    ui->Vyo->setVisible(false);
    ui->XI->setVisible(false);
    ui->YI->setVisible(false);
    ui->X3->setVisible(false);
    ui->Y3->setVisible(false);
    ui->VX3->setVisible(false);
    ui->VY3->setVisible(false);
    ui->X4->setVisible(false);
    ui->Y4->setVisible(false);
    ui->VX4->setVisible(false);
    ui->VY4->setVisible(false);
    ui->X5->setVisible(false);
    ui->Y5->setVisible(false);
    ui->VX5->setVisible(false);
    ui->VY5->setVisible(false);

    ui->cuerpo1->setVisible(false);
    ui->cuerpo2->setVisible(false);
    ui->cuerpo3->setVisible(false);
    ui->cuerpo4->setVisible(false);
    ui->cuerpo5->setVisible(false);

    ui->x->setVisible(false);
    ui->y->setVisible(false);
    ui->x2->setVisible(false);
    ui->y2->setVisible(false);
    ui->vx->setVisible(false);
    ui->vy->setVisible(false);
    ui->masa2->setVisible(false);
    ui->numeroc->setVisible(false);
    ui->numc->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->pushButton_3->setVisible(false);

    t->start(int(T*10));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_2->setEnabled(false);
    ui->pushButton->setEnabled(true);
     ui->pushButton_3->setEnabled(true);
    ui->Bola->setVisible(false);
    ui->Bola1->setVisible(false);
    ui->Bola_2->setVisible(false);
    ui->Bola_3->setVisible(false);
    ui->Bola_4->setVisible(false);


//aparecer cuadros
    ui->Xo->setVisible(true);
    ui->masa->setVisible(true);
    ui->Yo->setVisible(true);
    ui->Vxo->setVisible(true);
    ui->Vyo->setVisible(true);
    ui->XI->setVisible(true);
    ui->YI->setVisible(true);
    ui->X3->setVisible(true);
    ui->Y3->setVisible(true);
    ui->VX3->setVisible(true);
    ui->VY3->setVisible(true);
    ui->X4->setVisible(true);
    ui->Y4->setVisible(true);
    ui->VX4->setVisible(true);
    ui->VY4->setVisible(true);
    ui->X5->setVisible(true);
    ui->Y5->setVisible(true);
    ui->VX5->setVisible(true);
    ui->VY5->setVisible(true);
    ui->cuerpo1->setVisible(true);
    ui->cuerpo2->setVisible(true);
    ui->cuerpo3->setVisible(true);
    ui->cuerpo4->setVisible(true);
    ui->cuerpo5->setVisible(true);
    ui->x->setVisible(true);
    ui->y->setVisible(true);
    ui->x2->setVisible(true);
    ui->y2->setVisible(true);
    ui->vx->setVisible(true);
    ui->vy->setVisible(true);
    ui->masa2->setVisible(true);
    ui->numeroc->setVisible(true);
    ui->numc->setVisible(true);
    ui->pushButton->setVisible(true);
    ui->pushButton_3->setVisible(true);
    //ui->pushButton_2->setVisible(false);

    t->stop();
}

void MainWindow::on_pushButton_3_clicked()
{
    n=ui->numeroc->value();
    if(n==2){
        ui->Xo->setEnabled(true);
        ui->Yo->setEnabled(true);
        ui->Vxo->setEnabled(true);
        ui->Vyo->setEnabled(true);
        ui->XI->setEnabled(true);
        ui->YI->setEnabled(true);
        ui->masa->setEnabled(true);
        ui->pushButton->setEnabled(true);
       ui->pushButton_3->setEnabled(false);
    }
    if(n==3){
        ui->Xo->setEnabled(true);
        ui->Yo->setEnabled(true);
        ui->Vxo->setEnabled(true);
        ui->Vyo->setEnabled(true);
        ui->X3->setEnabled(true);
        ui->Y3->setEnabled(true);
        ui->VX3->setEnabled(true);
        ui->VY3->setEnabled(true);
        ui->XI->setEnabled(true);
        ui->YI->setEnabled(true);
        ui->masa->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
    }
    if(n==4){
        ui->Xo->setEnabled(true);
        ui->Yo->setEnabled(true);
        ui->Vxo->setEnabled(true);
        ui->Vyo->setEnabled(true);
        ui->X3->setEnabled(true);
        ui->Y3->setEnabled(true);
        ui->VX3->setEnabled(true);
        ui->VY3->setEnabled(true);
        ui->X4->setEnabled(true);
        ui->Y4->setEnabled(true);
        ui->VX4->setEnabled(true);
        ui->VY4->setEnabled(true);
        ui->XI->setEnabled(true);
        ui->YI->setEnabled(true);
        ui->masa->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
    }
    if(n==5){
        ui->Xo->setEnabled(true);
        ui->Yo->setEnabled(true);
        ui->Vxo->setEnabled(true);
        ui->Vyo->setEnabled(true);
        ui->X3->setEnabled(true);
        ui->Y3->setEnabled(true);
        ui->VX3->setEnabled(true);
        ui->VY3->setEnabled(true);
        ui->X4->setEnabled(true);
        ui->Y4->setEnabled(true);
        ui->VX4->setEnabled(true);
        ui->VY4->setEnabled(true);
        ui->X5->setEnabled(true);
        ui->Y5->setEnabled(true);
        ui->VX5->setEnabled(true);
        ui->VY5->setEnabled(true);
        ui->XI->setEnabled(true);
        ui->YI->setEnabled(true);
        ui->masa->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
    }

}

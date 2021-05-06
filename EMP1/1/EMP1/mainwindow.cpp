#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
#include <QDateTime>
#include <QTime>
#include <QMediaPlayer>


void MainWindow:: music()
{
   QMediaPlayer * player = new QMediaPlayer;

   player->setMedia(QUrl::fromLocalFile("D:/QT/Awork/produit_ingredient_1/sound/piano.mp3"));
   player->setVolume(100);
   player->play();

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showtime()));
    timer->start();

    QDate date = QDate ::currentDate();
    QString datee=date.toString();

    ui->date_P->setText(datee) ;


    music();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showtime ()
{
    QTime time = QTime::currentTime();

           QString time_text=time.toString("hh : mm : ss");
           if((time.second() % 2) == 0 )
           {
               time_text[3] = ' ';
               time_text[8] = ' ';
           }
           ui->digital_date_P->setText(time_text) ;

}

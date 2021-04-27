//#include "mainwindow.h"
#include "clients_achats.h"
#include <QApplication>
#include <QDebug>
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;

     connexion C;
    bool test;
        test=C.createConnection();
        Clients_Achats c;
 if(test)
   //  qDebug() <<"connection reussi";
     QMessageBox::information(nullptr,QObject::tr("database is   open"),QObject::tr("connection reussi\n"
                                                                                  "click OK to exit"),
                              QMessageBox::Ok);

 else
     //qDebug()<<"erreur de connection";
     QMessageBox::information(nullptr,QObject::tr("database is  not open"),QObject::tr("connection failed\n"
                                                                                  "click cancel to exit"),
                              QMessageBox::Cancel);



    c.show();
    return a.exec();
}

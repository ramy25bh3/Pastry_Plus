#include "eventicket.h"
#include "connexion.h"
#include <QDebug>
#include <QMessageBox>


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eventicket w;

    connexion C;
    bool test;
        test=C.createConnection();
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

   w.show();


    return a.exec();
}

#include "produit_ingredient.h"

#include <QApplication>
#include "connection.h"
#include <QDebug>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection C;
    bool test=C.createConnection();
    Produit_ingredient w;

    if(test)
      { // QDebug() <<"Connection réussite";
    w.show();
    QMessageBox::information(nullptr,QObject::tr("database is open"),QObject::tr("Connection successful" "Click ok to exit"),QMessageBox::Ok);
}
    else
        //QDebug() <<"Erreur de connection";
        QMessageBox::critical(nullptr,QObject::tr("database is open"),QObject::tr("Connection failed" "Click cancel to exit"),QMessageBox::Cancel);

    return a.exec();
}

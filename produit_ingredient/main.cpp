#include "produit_ingredient.h"
#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection C;
    bool test=C.createConnection();
    //Produit_ingredient w;

     MainWindow M; // heeeeeeeeeeeeeeeeeere!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    QFile file("D:/QT/Awork/produit_ingredient_1/produit_ingredient/Toolery.qss");
                file.open(QFile::ReadOnly);

                QString styleSheet { QLatin1String(file.readAll()) };

                //setup stylesheet
                a.setStyleSheet(styleSheet);

    if(test)
      { // QDebug() <<"Connection réussite";
    //w.show();

        M.show(); // heeeeeeeeeeeeeeeere!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    QMessageBox::information(nullptr,QObject::tr("database is open"),QObject::tr("Connection successful" "Click ok to exit"),QMessageBox::Ok);
}
    else
        //QDebug() <<"Erreur de connection";
        QMessageBox::critical(nullptr,QObject::tr("database is open"),QObject::tr("Connection failed" "Click cancel to exit"),QMessageBox::Cancel);

    return a.exec();
}

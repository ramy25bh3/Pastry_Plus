#include "eventicket.h"
#include "connexion.h"
#include <QDebug>
#include <QMessageBox>


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eventicket w;



   w.show();


    return a.exec();
}

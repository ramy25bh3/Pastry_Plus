#include "eventicket.h"
#include "connexion.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>



#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eventicket w;

    QFile file(":/tsawer/Toolery.qss");
                file.open(QFile::ReadOnly);

                QString styleSheet { QLatin1String(file.readAll()) };

                //setup stylesheet
                a.setStyleSheet(styleSheet);


   w.show();


    return a.exec();
}

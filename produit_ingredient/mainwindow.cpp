#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"


// include the header of your workspace here

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    id="";
     e =3; // nombre de tentatives
    ui->statusbar->addPermanentWidget(ui->label_3);

    QPixmap pix1("D:/QT/Awork/produit_ingredient_1/produit_ingredient/front.jpg");
    int w= ui->login_img->width();
    int h= ui->login_img->height();
    ui->login_img->setPixmap(pix1.scaled(w,h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{

    delete ui;
}

/*QString MainWindow::user () const{

     return ui->lineEdit_userID->text();
 }
*/

void MainWindow::on_pushButton_submit_clicked()
{
    // QString userID;


     //extract userId and password
     //tmp=user();
     //userID=user();
     QString userID=ui->lineEdit_userID->text();
     QString given_password= ui->lineEdit_password->text();

     //check if userid is a number
     bool num ;
     int a=userID.toInt(&num,10);
     a++;

     //check if user is in default list
     QString users=""; // you add your ID in format admin(first 2 letters of your departement name)
     bool user_ex = users.contains(userID);


     //check if password is in default list
     QString password =""; // you add your password in format ADM-(first 2 letters of your departement name)
     bool pass_ex = password.contains(given_password);


QSqlQuery qry;
 int count=0;

if(qry.exec( "select * from employe where id='"+userID+"'and MDP='"+given_password+"'" ))
{
    while(qry.next())
    {
        count++;
    }

if (count<1)
    ui->statusbar->showMessage("UserID and Password don't match",3000);

}

if(count==1 || (user_ex && pass_ex))
{
close();
PI = new Produit_ingredient();
PI ->show();
}//end test login

    else if( userID.length()!= 8 )
           ui->statusbar->showMessage("Check the userID input format",3000);
    else if( given_password.length()<4 )
           ui->statusbar->showMessage("Password too short",3000);

}

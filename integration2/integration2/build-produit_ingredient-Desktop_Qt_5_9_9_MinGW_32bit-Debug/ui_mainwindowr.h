/********************************************************************************
** Form generated from reading UI file 'mainwindowr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWR_H
#define UI_MAINWINDOWR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowr
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *pushButton_submit;
    QLineEdit *lineEdit_userID;
    QLineEdit *lineEdit_password;
    QLabel *label_3;
    QLabel *login_img;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowr)
    {
        if (MainWindowr->objectName().isEmpty())
            MainWindowr->setObjectName(QStringLiteral("MainWindowr"));
        MainWindowr->resize(800, 600);
        centralwidget = new QWidget(MainWindowr);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 160, 431, 41));
        label->setStyleSheet(QLatin1String("font: 75 20pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 230, 131, 31));
        label_2->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(85, 0, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 270, 151, 31));
        label_5->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(85, 0, 255);"));
        pushButton_submit = new QPushButton(centralwidget);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(310, 350, 121, 41));
        lineEdit_userID = new QLineEdit(centralwidget);
        lineEdit_userID->setObjectName(QStringLiteral("lineEdit_userID"));
        lineEdit_userID->setGeometry(QRect(390, 230, 113, 31));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(390, 270, 113, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 410, 121, 20));
        label_3->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        login_img = new QLabel(centralwidget);
        login_img->setObjectName(QStringLiteral("login_img"));
        login_img->setGeometry(QRect(0, 0, 791, 581));
        login_img->setPixmap(QPixmap(QString::fromUtf8(":/image/front.jpg")));
        MainWindowr->setCentralWidget(centralwidget);
        login_img->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        pushButton_submit->raise();
        lineEdit_userID->raise();
        lineEdit_password->raise();
        label_3->raise();
        menubar = new QMenuBar(MainWindowr);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindowr->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowr);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowr->setStatusBar(statusbar);

        retranslateUi(MainWindowr);

        QMetaObject::connectSlotsByName(MainWindowr);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowr)
    {
        MainWindowr->setWindowTitle(QApplication::translate("MainWindowr", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowr", "WELCOME to PASTRY PLUS", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowr", "User Name :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowr", "Mot de passe :", Q_NULLPTR));
        pushButton_submit->setText(QApplication::translate("MainWindowr", "Log in", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowr", "Connecting ...", Q_NULLPTR));
        login_img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowr: public Ui_MainWindowr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWR_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QTableView *tableView;
    QTabWidget *tabWidget_3;
    QWidget *tab_4;
    QLineEdit *txt_cin;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txt_nom;
    QLabel *label_3;
    QLineEdit *txt_num;
    QLabel *label_5;
    QLineEdit *txt_email;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLineEdit *txt_adresse;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QComboBox *comboBox_spec;
    QWidget *tab_5;
    QTableView *tableView_3;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLineEdit *txt_nom_2;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *txt_prenom_2;
    QLabel *label_13;
    QLineEdit *txt_tel_2;
    QLineEdit *txt_age_2;
    QComboBox *comboBox_2;
    QDateEdit *dateEdit_2;
    QLabel *label_14;
    QComboBox *comboBox_3;
    QWidget *tab_6;
    QLabel *label_17;
    QPushButton *pushButton_4;
    QComboBox *comboBox_supp;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QTableView *tableView_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 791, 561));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(-10, 0, 791, 531));
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 210, 781, 192));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 0, 781, 191));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        txt_cin = new QLineEdit(tab_4);
        txt_cin->setObjectName(QStringLiteral("txt_cin"));
        txt_cin->setGeometry(QRect(90, 10, 113, 20));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 47, 14));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 40, 81, 16));
        txt_nom = new QLineEdit(tab_4);
        txt_nom->setObjectName(QStringLiteral("txt_nom"));
        txt_nom->setGeometry(QRect(90, 40, 113, 20));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 70, 101, 16));
        txt_num = new QLineEdit(tab_4);
        txt_num->setObjectName(QStringLiteral("txt_num"));
        txt_num->setGeometry(QRect(90, 70, 113, 20));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 10, 121, 16));
        txt_email = new QLineEdit(tab_4);
        txt_email->setObjectName(QStringLiteral("txt_email"));
        txt_email->setGeometry(QRect(370, 10, 113, 21));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 40, 131, 16));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 70, 81, 16));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 130, 75, 23));
        txt_adresse = new QLineEdit(tab_4);
        txt_adresse->setObjectName(QStringLiteral("txt_adresse"));
        txt_adresse->setGeometry(QRect(620, 50, 113, 21));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 50, 91, 16));
        dateEdit = new QDateEdit(tab_4);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(370, 40, 111, 22));
        comboBox_spec = new QComboBox(tab_4);
        comboBox_spec->setObjectName(QStringLiteral("comboBox_spec"));
        comboBox_spec->setGeometry(QRect(370, 70, 111, 22));
        tabWidget_3->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView_3 = new QTableView(tab_5);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(150, 240, 781, 192));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(690, 130, 75, 23));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 20, 121, 16));
        txt_nom_2 = new QLineEdit(tab_5);
        txt_nom_2->setObjectName(QStringLiteral("txt_nom_2"));
        txt_nom_2->setGeometry(QRect(100, 50, 113, 20));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 101, 16));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 80, 81, 16));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(540, 60, 91, 16));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 50, 81, 16));
        txt_prenom_2 = new QLineEdit(tab_5);
        txt_prenom_2->setObjectName(QStringLiteral("txt_prenom_2"));
        txt_prenom_2->setGeometry(QRect(100, 80, 113, 20));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(270, 50, 131, 16));
        txt_tel_2 = new QLineEdit(tab_5);
        txt_tel_2->setObjectName(QStringLiteral("txt_tel_2"));
        txt_tel_2->setGeometry(QRect(380, 20, 113, 21));
        txt_age_2 = new QLineEdit(tab_5);
        txt_age_2->setObjectName(QStringLiteral("txt_age_2"));
        txt_age_2->setGeometry(QRect(630, 60, 113, 21));
        comboBox_2 = new QComboBox(tab_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(380, 80, 111, 22));
        dateEdit_2 = new QDateEdit(tab_5);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(380, 50, 111, 22));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 20, 47, 14));
        comboBox_3 = new QComboBox(tab_5);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(100, 20, 111, 22));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(90, 50, 47, 14));
        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 40, 75, 31));
        comboBox_supp = new QComboBox(tab_6);
        comboBox_supp->setObjectName(QStringLiteral("comboBox_supp"));
        comboBox_supp->setGeometry(QRect(140, 40, 141, 31));
        tabWidget_3->addTab(tab_6, QString());
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 400, 75, 23));
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 0, 771, 192));
        tabWidget_2->addTab(tab_3, QString());
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom societe:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Numero de tel: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Adresse E-maill:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Date d'adhesion:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Sp\303\251cialit\303\251: ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Adresse local:", Q_NULLPTR));
        comboBox_spec->clear();
        comboBox_spec->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bio", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Naturel", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Normal", Q_NULLPTR)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Adresse E-maill:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Numero de tel: ", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Sp\303\251cialit\303\251: ", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Adresse local:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Nom societe:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Date d'adhesion:", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bio", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Naturel", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Normal", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Afficher ", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "Fournisseurs", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Commandes vente", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Cyrine", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

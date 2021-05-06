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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_employe;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonRetour;
    QPushButton *pushButtonMenu;
    QGroupBox *ajout_employe;
    QLabel *label_2;
    QLineEdit *lineEditID;
    QLineEdit *lineEditNom;
    QLabel *label_3;
    QDateEdit *dateEditAdhesion;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBoxSexe;
    QLabel *label_7;
    QLineEdit *lineEditNum;
    QLineEdit *lineEditMail;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEditSalaire;
    QPushButton *pushButtonAjouterEmploye;
    QPushButton *pushButtonVider;
    QGroupBox *consulter_employe;
    QLineEdit *lineEditChercher;
    QPushButton *pushButtonRechercher;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonPDF;
    QTableView *tableViewEmploye;
    QRadioButton *radioButtonHomme;
    QRadioButton *radioButtonFemme;
    QDateEdit *date_recherche;
    QCheckBox *checkBoxDate;
    QPushButton *pushButtonTrier;
    QCheckBox *checkBoxSexe;
    QCheckBox *checkBoxNom;
    QComboBox *comboBoxOrdre;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLineEdit *lineEditDepart;
    QWidget *tab_conges;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonReturn;
    QPushButton *pushButtonMenuPrincipal;
    QGroupBox *ajout_conge;
    QLabel *label_10;
    QLineEdit *lineEditNumConge;
    QLabel *label_11;
    QDateEdit *dateEditDebut;
    QDateEdit *dateEditFin;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEditType;
    QComboBox *comboBoxType;
    QPushButton *ajouter;
    QPushButton *viderCases;
    QGroupBox *consulter_conge;
    QPushButton *pushButtonSuppr;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonPDF_2;
    QPushButton *pushButtonRechercherConge;
    QTableView *tableViewConge;
    QRadioButton *radioButton_nom;
    QRadioButton *radioButton_ID;
    QLineEdit *line_recherche_critere;
    QPushButton *pushButton;
    QPushButton *pushButton_afficher;
    QPushButton *pushButton_stat;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1078, 625);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Poppins Medium"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_employe = new QWidget();
        tab_employe->setObjectName(QStringLiteral("tab_employe"));
        gridLayout_3 = new QGridLayout(tab_employe);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButtonRetour = new QPushButton(tab_employe);
        pushButtonRetour->setObjectName(QStringLiteral("pushButtonRetour"));

        gridLayout_3->addWidget(pushButtonRetour, 1, 0, 1, 1);

        pushButtonMenu = new QPushButton(tab_employe);
        pushButtonMenu->setObjectName(QStringLiteral("pushButtonMenu"));

        gridLayout_3->addWidget(pushButtonMenu, 1, 1, 1, 1);

        ajout_employe = new QGroupBox(tab_employe);
        ajout_employe->setObjectName(QStringLiteral("ajout_employe"));
        label_2 = new QLabel(ajout_employe);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 101, 16));
        label_2->setFont(font);
        lineEditID = new QLineEdit(ajout_employe);
        lineEditID->setObjectName(QStringLiteral("lineEditID"));
        lineEditID->setGeometry(QRect(150, 40, 191, 21));
        lineEditNom = new QLineEdit(ajout_employe);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setGeometry(QRect(150, 80, 191, 21));
        label_3 = new QLabel(ajout_employe);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 91, 16));
        dateEditAdhesion = new QDateEdit(ajout_employe);
        dateEditAdhesion->setObjectName(QStringLiteral("dateEditAdhesion"));
        dateEditAdhesion->setGeometry(QRect(150, 120, 191, 22));
        label_4 = new QLabel(ajout_employe);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 120, 111, 16));
        label_5 = new QLabel(ajout_employe);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 101, 16));
        comboBoxSexe = new QComboBox(ajout_employe);
        comboBoxSexe->setObjectName(QStringLiteral("comboBoxSexe"));
        comboBoxSexe->setGeometry(QRect(150, 160, 191, 22));
        label_7 = new QLabel(ajout_employe);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 210, 131, 16));
        lineEditNum = new QLineEdit(ajout_employe);
        lineEditNum->setObjectName(QStringLiteral("lineEditNum"));
        lineEditNum->setGeometry(QRect(150, 210, 191, 21));
        lineEditMail = new QLineEdit(ajout_employe);
        lineEditMail->setObjectName(QStringLiteral("lineEditMail"));
        lineEditMail->setGeometry(QRect(150, 250, 191, 21));
        label_8 = new QLabel(ajout_employe);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 250, 121, 16));
        label_9 = new QLabel(ajout_employe);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 300, 47, 13));
        lineEditSalaire = new QLineEdit(ajout_employe);
        lineEditSalaire->setObjectName(QStringLiteral("lineEditSalaire"));
        lineEditSalaire->setGeometry(QRect(150, 290, 191, 21));
        pushButtonAjouterEmploye = new QPushButton(ajout_employe);
        pushButtonAjouterEmploye->setObjectName(QStringLiteral("pushButtonAjouterEmploye"));
        pushButtonAjouterEmploye->setGeometry(QRect(260, 360, 91, 31));
        pushButtonVider = new QPushButton(ajout_employe);
        pushButtonVider->setObjectName(QStringLiteral("pushButtonVider"));
        pushButtonVider->setGeometry(QRect(10, 360, 111, 31));
        consulter_employe = new QGroupBox(ajout_employe);
        consulter_employe->setObjectName(QStringLiteral("consulter_employe"));
        consulter_employe->setGeometry(QRect(410, 0, 591, 471));
        lineEditChercher = new QLineEdit(consulter_employe);
        lineEditChercher->setObjectName(QStringLiteral("lineEditChercher"));
        lineEditChercher->setGeometry(QRect(10, 30, 311, 21));
        pushButtonRechercher = new QPushButton(consulter_employe);
        pushButtonRechercher->setObjectName(QStringLiteral("pushButtonRechercher"));
        pushButtonRechercher->setGeometry(QRect(490, 30, 91, 31));
        pushButtonSupprimer = new QPushButton(consulter_employe);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));
        pushButtonSupprimer->setGeometry(QRect(500, 420, 91, 31));
        pushButtonModifier = new QPushButton(consulter_employe);
        pushButtonModifier->setObjectName(QStringLiteral("pushButtonModifier"));
        pushButtonModifier->setGeometry(QRect(410, 420, 91, 31));
        pushButtonModifier->setCheckable(true);
        pushButtonPDF = new QPushButton(consulter_employe);
        pushButtonPDF->setObjectName(QStringLiteral("pushButtonPDF"));
        pushButtonPDF->setGeometry(QRect(10, 420, 91, 31));
        tableViewEmploye = new QTableView(consulter_employe);
        tableViewEmploye->setObjectName(QStringLiteral("tableViewEmploye"));
        tableViewEmploye->setGeometry(QRect(10, 100, 571, 321));
        radioButtonHomme = new QRadioButton(consulter_employe);
        radioButtonHomme->setObjectName(QStringLiteral("radioButtonHomme"));
        radioButtonHomme->setGeometry(QRect(0, 70, 71, 19));
        radioButtonFemme = new QRadioButton(consulter_employe);
        radioButtonFemme->setObjectName(QStringLiteral("radioButtonFemme"));
        radioButtonFemme->setGeometry(QRect(80, 70, 61, 19));
        date_recherche = new QDateEdit(consulter_employe);
        date_recherche->setObjectName(QStringLiteral("date_recherche"));
        date_recherche->setGeometry(QRect(150, 70, 121, 22));
        checkBoxDate = new QCheckBox(consulter_employe);
        checkBoxDate->setObjectName(QStringLiteral("checkBoxDate"));
        checkBoxDate->setGeometry(QRect(280, 70, 51, 19));
        pushButtonTrier = new QPushButton(consulter_employe);
        pushButtonTrier->setObjectName(QStringLiteral("pushButtonTrier"));
        pushButtonTrier->setGeometry(QRect(180, 420, 93, 28));
        checkBoxSexe = new QCheckBox(consulter_employe);
        checkBoxSexe->setObjectName(QStringLiteral("checkBoxSexe"));
        checkBoxSexe->setGeometry(QRect(440, 70, 83, 20));
        checkBoxNom = new QCheckBox(consulter_employe);
        checkBoxNom->setObjectName(QStringLiteral("checkBoxNom"));
        checkBoxNom->setGeometry(QRect(530, 70, 83, 20));
        comboBoxOrdre = new QComboBox(consulter_employe);
        comboBoxOrdre->setObjectName(QStringLiteral("comboBoxOrdre"));
        comboBoxOrdre->setGeometry(QRect(290, 420, 73, 22));
        pushButton_2 = new QPushButton(consulter_employe);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 420, 71, 31));
        pushButton_3 = new QPushButton(consulter_employe);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 30, 93, 28));
        label_6 = new QLabel(ajout_employe);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 330, 101, 16));
        lineEditDepart = new QLineEdit(ajout_employe);
        lineEditDepart->setObjectName(QStringLiteral("lineEditDepart"));
        lineEditDepart->setGeometry(QRect(150, 330, 191, 22));

        gridLayout_3->addWidget(ajout_employe, 0, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        tabWidget->addTab(tab_employe, QString());
        tab_conges = new QWidget();
        tab_conges->setObjectName(QStringLiteral("tab_conges"));
        gridLayout_2 = new QGridLayout(tab_conges);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButtonReturn = new QPushButton(tab_conges);
        pushButtonReturn->setObjectName(QStringLiteral("pushButtonReturn"));

        gridLayout_2->addWidget(pushButtonReturn, 1, 0, 1, 1);

        pushButtonMenuPrincipal = new QPushButton(tab_conges);
        pushButtonMenuPrincipal->setObjectName(QStringLiteral("pushButtonMenuPrincipal"));

        gridLayout_2->addWidget(pushButtonMenuPrincipal, 1, 1, 1, 1);

        ajout_conge = new QGroupBox(tab_conges);
        ajout_conge->setObjectName(QStringLiteral("ajout_conge"));
        ajout_conge->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(ajout_conge);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 40, 101, 16));
        label_10->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        lineEditNumConge = new QLineEdit(ajout_conge);
        lineEditNumConge->setObjectName(QStringLiteral("lineEditNumConge"));
        lineEditNumConge->setGeometry(QRect(150, 40, 191, 21));
        label_11 = new QLabel(ajout_conge);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 80, 101, 16));
        dateEditDebut = new QDateEdit(ajout_conge);
        dateEditDebut->setObjectName(QStringLiteral("dateEditDebut"));
        dateEditDebut->setGeometry(QRect(149, 120, 191, 22));
        dateEditFin = new QDateEdit(ajout_conge);
        dateEditFin->setObjectName(QStringLiteral("dateEditFin"));
        dateEditFin->setGeometry(QRect(149, 160, 191, 22));
        label_12 = new QLabel(ajout_conge);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 120, 101, 16));
        label_13 = new QLabel(ajout_conge);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 160, 101, 16));
        label_14 = new QLabel(ajout_conge);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 200, 101, 16));
        lineEditType = new QLineEdit(ajout_conge);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setGeometry(QRect(150, 80, 191, 21));
        comboBoxType = new QComboBox(ajout_conge);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));
        comboBoxType->setGeometry(QRect(150, 200, 191, 22));
        ajouter = new QPushButton(ajout_conge);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(260, 250, 101, 31));
        ajouter->setStyleSheet(QStringLiteral(""));
        viderCases = new QPushButton(ajout_conge);
        viderCases->setObjectName(QStringLiteral("viderCases"));
        viderCases->setGeometry(QRect(10, 250, 121, 31));
        consulter_conge = new QGroupBox(ajout_conge);
        consulter_conge->setObjectName(QStringLiteral("consulter_conge"));
        consulter_conge->setGeometry(QRect(430, 0, 631, 471));
        pushButtonSuppr = new QPushButton(consulter_conge);
        pushButtonSuppr->setObjectName(QStringLiteral("pushButtonSuppr"));
        pushButtonSuppr->setGeometry(QRect(500, 420, 91, 31));
        pushButtonEdit = new QPushButton(consulter_conge);
        pushButtonEdit->setObjectName(QStringLiteral("pushButtonEdit"));
        pushButtonEdit->setGeometry(QRect(390, 420, 91, 31));
        pushButtonEdit->setCheckable(true);
        pushButtonPDF_2 = new QPushButton(consulter_conge);
        pushButtonPDF_2->setObjectName(QStringLiteral("pushButtonPDF_2"));
        pushButtonPDF_2->setGeometry(QRect(10, 420, 91, 31));
        pushButtonRechercherConge = new QPushButton(consulter_conge);
        pushButtonRechercherConge->setObjectName(QStringLiteral("pushButtonRechercherConge"));
        pushButtonRechercherConge->setGeometry(QRect(420, 30, 111, 31));
        tableViewConge = new QTableView(consulter_conge);
        tableViewConge->setObjectName(QStringLiteral("tableViewConge"));
        tableViewConge->setGeometry(QRect(20, 100, 541, 311));
        radioButton_nom = new QRadioButton(consulter_conge);
        radioButton_nom->setObjectName(QStringLiteral("radioButton_nom"));
        radioButton_nom->setGeometry(QRect(420, 70, 97, 20));
        radioButton_ID = new QRadioButton(consulter_conge);
        radioButton_ID->setObjectName(QStringLiteral("radioButton_ID"));
        radioButton_ID->setGeometry(QRect(300, 70, 97, 20));
        line_recherche_critere = new QLineEdit(consulter_conge);
        line_recherche_critere->setObjectName(QStringLiteral("line_recherche_critere"));
        line_recherche_critere->setGeometry(QRect(62, 40, 301, 22));
        pushButton = new QPushButton(consulter_conge);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 420, 91, 31));
        pushButtonPDF_2->raise();
        pushButtonSuppr->raise();
        pushButtonEdit->raise();
        pushButtonRechercherConge->raise();
        tableViewConge->raise();
        radioButton_nom->raise();
        radioButton_ID->raise();
        line_recherche_critere->raise();
        pushButton->raise();
        pushButton_afficher = new QPushButton(ajout_conge);
        pushButton_afficher->setObjectName(QStringLiteral("pushButton_afficher"));
        pushButton_afficher->setGeometry(QRect(300, 287, 101, 31));
        pushButton_stat = new QPushButton(ajout_conge);
        pushButton_stat->setObjectName(QStringLiteral("pushButton_stat"));
        pushButton_stat->setGeometry(QRect(40, 347, 111, 31));

        gridLayout_2->addWidget(ajout_conge, 0, 0, 1, 2);

        tabWidget->addTab(tab_conges, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1078, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Gestion Des Employ\303\251s", Q_NULLPTR));
        pushButtonRetour->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pushButtonMenu->setText(QApplication::translate("MainWindow", "Menu Principal", Q_NULLPTR));
        ajout_employe->setTitle(QApplication::translate("MainWindow", "Ajouter Un Employ\303\251", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Nom & Pr\303\251nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Date D'Adh\303\251sion :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        comboBoxSexe->clear();
        comboBoxSexe->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Homme", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Femme", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Autre", Q_NULLPTR)
        );
        comboBoxSexe->setCurrentText(QApplication::translate("MainWindow", "Homme", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Numero De T\303\251l\303\251phone :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Adresse E-Mail :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Salaire :", Q_NULLPTR));
        pushButtonAjouterEmploye->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButtonVider->setText(QApplication::translate("MainWindow", "Vider Les Cases", Q_NULLPTR));
        consulter_employe->setTitle(QApplication::translate("MainWindow", "Consulter Les Employ\303\251s", Q_NULLPTR));
        pushButtonRechercher->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButtonModifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButtonPDF->setText(QApplication::translate("MainWindow", "Exporter PDF", Q_NULLPTR));
        radioButtonHomme->setText(QApplication::translate("MainWindow", "Homme", Q_NULLPTR));
        radioButtonFemme->setText(QApplication::translate("MainWindow", "Femme", Q_NULLPTR));
        checkBoxDate->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        pushButtonTrier->setText(QApplication::translate("MainWindow", "trier", Q_NULLPTR));
        checkBoxSexe->setText(QApplication::translate("MainWindow", "sex", Q_NULLPTR));
        checkBoxNom->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        comboBoxOrdre->clear();
        comboBoxOrdre->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ASC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DESC", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("MainWindow", "Excel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Envoyer Mail", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "departement", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_employe), QApplication::translate("MainWindow", "Employ\303\251s", Q_NULLPTR));
        pushButtonReturn->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pushButtonMenuPrincipal->setText(QApplication::translate("MainWindow", "Menu Principal", Q_NULLPTR));
        ajout_conge->setTitle(QApplication::translate("MainWindow", "Ajouter Un Cong\303\251", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Num De Cong\303\251 :", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nom Employ\303\251 :", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Date De D\303\251but :", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Date De Fin :", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Type De Cong\303\251 :", Q_NULLPTR));
        comboBoxType->clear();
        comboBoxType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CONGE PAYE", Q_NULLPTR)
         << QApplication::translate("MainWindow", " CONGE ANNUEL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CONGE MALADIE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CONGE MATERNITE", Q_NULLPTR)
        );
        ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        viderCases->setText(QApplication::translate("MainWindow", "Vider Les Cases", Q_NULLPTR));
        consulter_conge->setTitle(QApplication::translate("MainWindow", "Consulter Les Cong\303\251s", Q_NULLPTR));
        pushButtonSuppr->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButtonEdit->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButtonPDF_2->setText(QApplication::translate("MainWindow", "Exporter PDF", Q_NULLPTR));
        pushButtonRechercherConge->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        radioButton_nom->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        radioButton_ID->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "excel", Q_NULLPTR));
        pushButton_afficher->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pushButton_stat->setText(QApplication::translate("MainWindow", "stat", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_conges), QApplication::translate("MainWindow", "Cong\303\251s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

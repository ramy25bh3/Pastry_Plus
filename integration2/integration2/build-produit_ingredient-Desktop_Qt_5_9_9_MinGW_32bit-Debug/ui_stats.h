/********************************************************************************
** Form generated from reading UI file 'stats.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_H
#define UI_STATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Statsr
{
public:
    QPushButton *hide_P;
    QFrame *charts_P;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *Statsr)
    {
        if (Statsr->objectName().isEmpty())
            Statsr->setObjectName(QStringLiteral("Statsr"));
        Statsr->resize(814, 625);
        Statsr->setStyleSheet(QStringLiteral(""));
        hide_P = new QPushButton(Statsr);
        hide_P->setObjectName(QStringLiteral("hide_P"));
        hide_P->setGeometry(QRect(310, 540, 93, 28));
        charts_P = new QFrame(Statsr);
        charts_P->setObjectName(QStringLiteral("charts_P"));
        charts_P->setGeometry(QRect(20, 30, 761, 491));
        horizontalLayout = new QHBoxLayout(charts_P);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        retranslateUi(Statsr);

        QMetaObject::connectSlotsByName(Statsr);
    } // setupUi

    void retranslateUi(QDialog *Statsr)
    {
        Statsr->setWindowTitle(QApplication::translate("Statsr", "Dialog", Q_NULLPTR));
        hide_P->setText(QApplication::translate("Statsr", "Hide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Statsr: public Ui_Statsr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_H

/********************************************************************************
** Form generated from reading UI file 'clavier.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAVIER_H
#define UI_CLAVIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clavier
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonMarche;
    QPushButton *pushButton0;
    QPushButton *pushButtonArret;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxLedVerte;
    QCheckBox *checkBoxLedRouge;

    void setupUi(QWidget *Clavier)
    {
        if (Clavier->objectName().isEmpty())
            Clavier->setObjectName("Clavier");
        Clavier->resize(800, 600);
        widget = new QWidget(Clavier);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 210, 254, 112));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton1 = new QPushButton(widget);
        pushButton1->setObjectName("pushButton1");

        gridLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton2 = new QPushButton(widget);
        pushButton2->setObjectName("pushButton2");

        gridLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton3 = new QPushButton(widget);
        pushButton3->setObjectName("pushButton3");

        gridLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton4 = new QPushButton(widget);
        pushButton4->setObjectName("pushButton4");

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton5 = new QPushButton(widget);
        pushButton5->setObjectName("pushButton5");

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton6 = new QPushButton(widget);
        pushButton6->setObjectName("pushButton6");

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName("pushButton7");

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton8 = new QPushButton(widget);
        pushButton8->setObjectName("pushButton8");

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton9 = new QPushButton(widget);
        pushButton9->setObjectName("pushButton9");

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButtonMarche = new QPushButton(widget);
        pushButtonMarche->setObjectName("pushButtonMarche");

        gridLayout->addWidget(pushButtonMarche, 3, 0, 1, 1);

        pushButton0 = new QPushButton(widget);
        pushButton0->setObjectName("pushButton0");

        gridLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButtonArret = new QPushButton(widget);
        pushButtonArret->setObjectName("pushButtonArret");

        gridLayout->addWidget(pushButtonArret, 3, 2, 1, 1);

        widget1 = new QWidget(Clavier);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(170, 159, 174, 31));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxLedVerte = new QCheckBox(widget1);
        checkBoxLedVerte->setObjectName("checkBoxLedVerte");
        checkBoxLedVerte->setEnabled(false);

        gridLayout_2->addWidget(checkBoxLedVerte, 0, 0, 1, 1);

        checkBoxLedRouge = new QCheckBox(widget1);
        checkBoxLedRouge->setObjectName("checkBoxLedRouge");
        checkBoxLedRouge->setEnabled(false);

        gridLayout_2->addWidget(checkBoxLedRouge, 0, 1, 1, 1);


        retranslateUi(Clavier);

        QMetaObject::connectSlotsByName(Clavier);
    } // setupUi

    void retranslateUi(QWidget *Clavier)
    {
        Clavier->setWindowTitle(QCoreApplication::translate("Clavier", "Clavier", nullptr));
        pushButton1->setText(QCoreApplication::translate("Clavier", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("Clavier", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("Clavier", "3", nullptr));
        pushButton4->setText(QCoreApplication::translate("Clavier", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("Clavier", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("Clavier", "6", nullptr));
        pushButton7->setText(QCoreApplication::translate("Clavier", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Clavier", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Clavier", "9", nullptr));
        pushButtonMarche->setText(QCoreApplication::translate("Clavier", "Marche", nullptr));
        pushButton0->setText(QCoreApplication::translate("Clavier", "0", nullptr));
        pushButtonArret->setText(QCoreApplication::translate("Clavier", "Arr\303\252t", nullptr));
        checkBoxLedVerte->setText(QCoreApplication::translate("Clavier", "Led verte", nullptr));
        checkBoxLedRouge->setText(QCoreApplication::translate("Clavier", "Led rouge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clavier: public Ui_Clavier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAVIER_H

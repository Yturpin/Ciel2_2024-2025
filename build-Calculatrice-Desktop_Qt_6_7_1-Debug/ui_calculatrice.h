/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton9;
    QPushButton *pushButton7;
    QPushButton *pushButton3;
    QPushButton *pushButtonAdditionner;
    QPushButton *pushButton6;
    QPushButton *pushButton8;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButton1;
    QPushButton *pushButton4;
    QPushButton *pushButtonSoustraire;
    QPushButton *pushButtonDiviser;
    QPushButton *pushButton0;
    QPushButton *pushButton5;
    QPushButton *pushButton2;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonEffacer;
    QLineEdit *lineEditAfficheur;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName("Calculatrice");
        Calculatrice->resize(800, 600);
        Calculatrice->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(15);
        Calculatrice->setFont(font);
        widget = new QWidget(Calculatrice);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 100, 340, 276));
        widget->setMinimumSize(QSize(50, 50));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton9 = new QPushButton(widget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton3 = new QPushButton(widget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonAdditionner = new QPushButton(widget);
        pushButtonAdditionner->setObjectName("pushButtonAdditionner");
        pushButtonAdditionner->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonAdditionner, 1, 3, 1, 1);

        pushButton6 = new QPushButton(widget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButton8 = new QPushButton(widget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButtonMultiplier = new QPushButton(widget);
        pushButtonMultiplier->setObjectName("pushButtonMultiplier");
        pushButtonMultiplier->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButton1 = new QPushButton(widget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton4 = new QPushButton(widget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButtonSoustraire = new QPushButton(widget);
        pushButtonSoustraire->setObjectName("pushButtonSoustraire");
        pushButtonSoustraire->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonSoustraire, 2, 3, 1, 1);

        pushButtonDiviser = new QPushButton(widget);
        pushButtonDiviser->setObjectName("pushButtonDiviser");
        pushButtonDiviser->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);

        pushButton0 = new QPushButton(widget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton5 = new QPushButton(widget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton2 = new QPushButton(widget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButtonEgal = new QPushButton(widget);
        pushButtonEgal->setObjectName("pushButtonEgal");
        pushButtonEgal->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonEffacer = new QPushButton(widget);
        pushButtonEffacer->setObjectName("pushButtonEffacer");
        pushButtonEffacer->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonEffacer, 4, 0, 1, 1);

        lineEditAfficheur = new QLineEdit(widget);
        lineEditAfficheur->setObjectName("lineEditAfficheur");
        lineEditAfficheur->setMinimumSize(QSize(50, 50));
        lineEditAfficheur->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"background-color: rgb(38, 162, 105);"));
        lineEditAfficheur->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditAfficheur->setReadOnly(true);

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QCoreApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton9->setText(QCoreApplication::translate("Calculatrice", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("Calculatrice", "7", nullptr));
        pushButton3->setText(QCoreApplication::translate("Calculatrice", "3", nullptr));
        pushButtonAdditionner->setText(QCoreApplication::translate("Calculatrice", "+", nullptr));
        pushButton6->setText(QCoreApplication::translate("Calculatrice", "6", nullptr));
        pushButton8->setText(QCoreApplication::translate("Calculatrice", "8", nullptr));
        pushButtonMultiplier->setText(QCoreApplication::translate("Calculatrice", "*", nullptr));
        pushButton1->setText(QCoreApplication::translate("Calculatrice", "1", nullptr));
        pushButton4->setText(QCoreApplication::translate("Calculatrice", "4", nullptr));
        pushButtonSoustraire->setText(QCoreApplication::translate("Calculatrice", "-", nullptr));
        pushButtonDiviser->setText(QCoreApplication::translate("Calculatrice", "/", nullptr));
        pushButton0->setText(QCoreApplication::translate("Calculatrice", "0", nullptr));
        pushButton5->setText(QCoreApplication::translate("Calculatrice", "5", nullptr));
        pushButton2->setText(QCoreApplication::translate("Calculatrice", "2", nullptr));
        pushButtonEgal->setText(QCoreApplication::translate("Calculatrice", "=", nullptr));
        pushButtonEffacer->setText(QCoreApplication::translate("Calculatrice", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H

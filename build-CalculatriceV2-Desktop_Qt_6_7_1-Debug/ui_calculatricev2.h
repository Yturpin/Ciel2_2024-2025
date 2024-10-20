/********************************************************************************
** Form generated from reading UI file 'calculatricev2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICEV2_H
#define UI_CALCULATRICEV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatriceV2
{
public:
    QWidget *layoutWidget;
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

    void setupUi(QWidget *CalculatriceV2)
    {
        if (CalculatriceV2->objectName().isEmpty())
            CalculatriceV2->setObjectName("CalculatriceV2");
        CalculatriceV2->resize(800, 600);
        layoutWidget = new QWidget(CalculatriceV2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 150, 340, 276));
        layoutWidget->setMinimumSize(QSize(50, 50));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton9 = new QPushButton(layoutWidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButton7 = new QPushButton(layoutWidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton3 = new QPushButton(layoutWidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonAdditionner = new QPushButton(layoutWidget);
        pushButtonAdditionner->setObjectName("pushButtonAdditionner");
        pushButtonAdditionner->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonAdditionner, 1, 3, 1, 1);

        pushButton6 = new QPushButton(layoutWidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButton8 = new QPushButton(layoutWidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButtonMultiplier = new QPushButton(layoutWidget);
        pushButtonMultiplier->setObjectName("pushButtonMultiplier");
        pushButtonMultiplier->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButton1 = new QPushButton(layoutWidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton4 = new QPushButton(layoutWidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButtonSoustraire = new QPushButton(layoutWidget);
        pushButtonSoustraire->setObjectName("pushButtonSoustraire");
        pushButtonSoustraire->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonSoustraire, 2, 3, 1, 1);

        pushButtonDiviser = new QPushButton(layoutWidget);
        pushButtonDiviser->setObjectName("pushButtonDiviser");
        pushButtonDiviser->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);

        pushButton0 = new QPushButton(layoutWidget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton5 = new QPushButton(layoutWidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton2 = new QPushButton(layoutWidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButtonEgal = new QPushButton(layoutWidget);
        pushButtonEgal->setObjectName("pushButtonEgal");
        pushButtonEgal->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonEffacer = new QPushButton(layoutWidget);
        pushButtonEffacer->setObjectName("pushButtonEffacer");
        pushButtonEffacer->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonEffacer, 4, 0, 1, 1);

        lineEditAfficheur = new QLineEdit(layoutWidget);
        lineEditAfficheur->setObjectName("lineEditAfficheur");
        lineEditAfficheur->setMinimumSize(QSize(50, 50));
        lineEditAfficheur->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"background-color: rgb(38, 162, 105);"));
        lineEditAfficheur->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditAfficheur->setReadOnly(true);

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);


        retranslateUi(CalculatriceV2);

        QMetaObject::connectSlotsByName(CalculatriceV2);
    } // setupUi

    void retranslateUi(QWidget *CalculatriceV2)
    {
        CalculatriceV2->setWindowTitle(QCoreApplication::translate("CalculatriceV2", "CalculatriceV2", nullptr));
        pushButton9->setText(QCoreApplication::translate("CalculatriceV2", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("CalculatriceV2", "7", nullptr));
        pushButton3->setText(QCoreApplication::translate("CalculatriceV2", "3", nullptr));
        pushButtonAdditionner->setText(QCoreApplication::translate("CalculatriceV2", "+", nullptr));
        pushButton6->setText(QCoreApplication::translate("CalculatriceV2", "6", nullptr));
        pushButton8->setText(QCoreApplication::translate("CalculatriceV2", "8", nullptr));
        pushButtonMultiplier->setText(QCoreApplication::translate("CalculatriceV2", "*", nullptr));
        pushButton1->setText(QCoreApplication::translate("CalculatriceV2", "1", nullptr));
        pushButton4->setText(QCoreApplication::translate("CalculatriceV2", "4", nullptr));
        pushButtonSoustraire->setText(QCoreApplication::translate("CalculatriceV2", "-", nullptr));
        pushButtonDiviser->setText(QCoreApplication::translate("CalculatriceV2", "/", nullptr));
        pushButton0->setText(QCoreApplication::translate("CalculatriceV2", "0", nullptr));
        pushButton5->setText(QCoreApplication::translate("CalculatriceV2", "5", nullptr));
        pushButton2->setText(QCoreApplication::translate("CalculatriceV2", "2", nullptr));
        pushButtonEgal->setText(QCoreApplication::translate("CalculatriceV2", "=", nullptr));
        pushButtonEffacer->setText(QCoreApplication::translate("CalculatriceV2", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceV2: public Ui_CalculatriceV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICEV2_H

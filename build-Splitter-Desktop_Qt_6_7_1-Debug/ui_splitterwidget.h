/********************************************************************************
** Form generated from reading UI file 'splitterwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITTERWIDGET_H
#define UI_SPLITTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitterWidget
{
public:
    QPushButton *pushButtonQuitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditNom;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditDecoder;
    QPushButton *pushButtonDecoder;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditPrenom;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEditAge;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditPoids;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditTaille;

    void setupUi(QWidget *SplitterWidget)
    {
        if (SplitterWidget->objectName().isEmpty())
            SplitterWidget->setObjectName("SplitterWidget");
        SplitterWidget->resize(800, 600);
        pushButtonQuitter = new QPushButton(SplitterWidget);
        pushButtonQuitter->setObjectName("pushButtonQuitter");
        pushButtonQuitter->setGeometry(QRect(570, 420, 80, 23));
        widget = new QWidget(SplitterWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 230, 321, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditNom = new QLineEdit(widget);
        lineEditNom->setObjectName("lineEditNom");

        horizontalLayout->addWidget(lineEditNom);

        widget1 = new QWidget(SplitterWidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(140, 200, 320, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEditDecoder = new QLineEdit(widget1);
        lineEditDecoder->setObjectName("lineEditDecoder");

        horizontalLayout_2->addWidget(lineEditDecoder);

        pushButtonDecoder = new QPushButton(widget1);
        pushButtonDecoder->setObjectName("pushButtonDecoder");

        horizontalLayout_2->addWidget(pushButtonDecoder);

        widget2 = new QWidget(SplitterWidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(140, 260, 321, 24));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEditPrenom = new QLineEdit(widget2);
        lineEditPrenom->setObjectName("lineEditPrenom");

        horizontalLayout_3->addWidget(lineEditPrenom);

        widget3 = new QWidget(SplitterWidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(140, 290, 321, 24));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        lineEditAge = new QLineEdit(widget3);
        lineEditAge->setObjectName("lineEditAge");

        horizontalLayout_4->addWidget(lineEditAge);

        widget4 = new QWidget(SplitterWidget);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(140, 320, 321, 24));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        lineEditPoids = new QLineEdit(widget4);
        lineEditPoids->setObjectName("lineEditPoids");

        horizontalLayout_5->addWidget(lineEditPoids);

        widget5 = new QWidget(SplitterWidget);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(140, 350, 321, 24));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget5);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        lineEditTaille = new QLineEdit(widget5);
        lineEditTaille->setObjectName("lineEditTaille");

        horizontalLayout_6->addWidget(lineEditTaille);


        retranslateUi(SplitterWidget);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, SplitterWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(SplitterWidget);
    } // setupUi

    void retranslateUi(QWidget *SplitterWidget)
    {
        SplitterWidget->setWindowTitle(QCoreApplication::translate("SplitterWidget", "SplitterWidget", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("SplitterWidget", "Quitter", nullptr));
        label_2->setText(QCoreApplication::translate("SplitterWidget", "Nom :", nullptr));
        label->setText(QCoreApplication::translate("SplitterWidget", "Texte \303\240 d\303\251coder :", nullptr));
        pushButtonDecoder->setText(QCoreApplication::translate("SplitterWidget", "D\303\251coder", nullptr));
        label_3->setText(QCoreApplication::translate("SplitterWidget", "Pr\303\251nom :", nullptr));
        label_4->setText(QCoreApplication::translate("SplitterWidget", "\303\202ge :", nullptr));
        label_5->setText(QCoreApplication::translate("SplitterWidget", "Poids :", nullptr));
        label_6->setText(QCoreApplication::translate("SplitterWidget", "Taille :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplitterWidget: public Ui_SplitterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITTERWIDGET_H

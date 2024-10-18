/********************************************************************************
** Form generated from reading UI file 'monwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONWIDGET_H
#define UI_MONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonWidget
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QToolButton *toolButton;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *AppuieLeVieux;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *MonWidget)
    {
        if (MonWidget->objectName().isEmpty())
            MonWidget->setObjectName("MonWidget");
        MonWidget->resize(800, 600);
        groupBox = new QGroupBox(MonWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(370, 40, 391, 161));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(393, 38, 100, 21));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 90, 100, 21));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(20, 60, 100, 21));
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(130, 50, 101, 71));
        groupBox_2 = new QGroupBox(MonWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(100, 240, 261, 151));
        pushButton = new QPushButton(MonWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 280, 80, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;"));
        AppuieLeVieux = new QPushButton(MonWidget);
        AppuieLeVieux->setObjectName("AppuieLeVieux");
        AppuieLeVieux->setGeometry(QRect(620, 280, 80, 23));
        AppuieLeVieux->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        scrollArea = new QScrollArea(MonWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(430, 360, 120, 80));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 78));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget = new QWidget(MonWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 130, 331, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        retranslateUi(MonWidget);
        QObject::connect(pushButton, &QPushButton::clicked, MonWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(MonWidget);
    } // setupUi

    void retranslateUi(QWidget *MonWidget)
    {
        MonWidget->setWindowTitle(QCoreApplication::translate("MonWidget", "MonWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MonWidget", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("MonWidget", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MonWidget", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MonWidget", "RadioButton", nullptr));
        toolButton->setText(QCoreApplication::translate("MonWidget", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MonWidget", "GroupBox", nullptr));
        pushButton->setText(QCoreApplication::translate("MonWidget", "PushButton", nullptr));
        AppuieLeVieux->setText(QCoreApplication::translate("MonWidget", "Quitter", nullptr));
        checkBox->setText(QCoreApplication::translate("MonWidget", "CheckBox", nullptr));
        label->setText(QCoreApplication::translate("MonWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonWidget: public Ui_MonWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *Eingabe_Laenge;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Ausgabe_Flaeche;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        Eingabe_Laenge = new QLineEdit(Widget);
        Eingabe_Laenge->setObjectName(QStringLiteral("Eingabe_Laenge"));
        Eingabe_Laenge->setGeometry(QRect(120, 70, 113, 20));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 70, 47, 13));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 47, 13));
        Ausgabe_Flaeche = new QLineEdit(Widget);
        Ausgabe_Flaeche->setObjectName(QStringLiteral("Ausgabe_Flaeche"));
        Ausgabe_Flaeche->setGeometry(QRect(120, 150, 113, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 70, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "Laenge", 0));
        label_2->setText(QApplication::translate("Widget", "Flaeche", 0));
        pushButton->setText(QApplication::translate("Widget", "CalcFlaeche", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

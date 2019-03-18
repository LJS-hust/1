/********************************************************************************
** Form generated from reading UI file 'cpu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPU_H
#define UI_CPU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Cpu
{
public:
    QCustomPlot *Cpu_widget;
    QCustomPlot *Mem_widget;
    QCustomPlot *Swap_widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QWidget *Cpu)
    {
        if (Cpu->objectName().isEmpty())
            Cpu->setObjectName(QString::fromUtf8("Cpu"));
        Cpu->resize(660, 504);
        Cpu_widget = new QCustomPlot(Cpu);
        Cpu_widget->setObjectName(QString::fromUtf8("Cpu_widget"));
        Cpu_widget->setGeometry(QRect(10, 20, 641, 131));
        Mem_widget = new QCustomPlot(Cpu);
        Mem_widget->setObjectName(QString::fromUtf8("Mem_widget"));
        Mem_widget->setGeometry(QRect(10, 170, 641, 131));
        Swap_widget = new QCustomPlot(Cpu);
        Swap_widget->setObjectName(QString::fromUtf8("Swap_widget"));
        Swap_widget->setGeometry(QRect(10, 320, 641, 131));
        label = new QLabel(Cpu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 300, 67, 17));
        label_2 = new QLabel(Cpu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 150, 67, 17));
        label_3 = new QLabel(Cpu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 0, 67, 17));
        pushButton = new QPushButton(Cpu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 470, 89, 25));

        retranslateUi(Cpu);

        QMetaObject::connectSlotsByName(Cpu);
    } // setupUi

    void retranslateUi(QWidget *Cpu)
    {
        Cpu->setWindowTitle(QApplication::translate("Cpu", "Form", nullptr));
        label->setText(QApplication::translate("Cpu", "Swap", nullptr));
        label_2->setText(QApplication::translate("Cpu", "Mem", nullptr));
        label_3->setText(QApplication::translate("Cpu", "Cpu", nullptr));
        pushButton->setText(QApplication::translate("Cpu", "RePaint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cpu: public Ui_Cpu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPU_H

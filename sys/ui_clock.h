/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clock
{
public:

    void setupUi(QWidget *clock)
    {
        if (clock->objectName().isEmpty())
            clock->setObjectName(QString::fromUtf8("clock"));
        clock->resize(400, 300);

        retranslateUi(clock);

        QMetaObject::connectSlotsByName(clock);
    } // setupUi

    void retranslateUi(QWidget *clock)
    {
        clock->setWindowTitle(QApplication::translate("clock", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clock: public Ui_clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H

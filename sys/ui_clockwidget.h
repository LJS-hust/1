/********************************************************************************
** Form generated from reading UI file 'clockwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKWIDGET_H
#define UI_CLOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clockWidget
{
public:

    void setupUi(QWidget *clockWidget)
    {
        if (clockWidget->objectName().isEmpty())
            clockWidget->setObjectName(QString::fromUtf8("clockWidget"));
        clockWidget->resize(400, 300);

        retranslateUi(clockWidget);

        QMetaObject::connectSlotsByName(clockWidget);
    } // setupUi

    void retranslateUi(QWidget *clockWidget)
    {
        clockWidget->setWindowTitle(QApplication::translate("clockWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clockWidget: public Ui_clockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKWIDGET_H

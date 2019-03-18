/********************************************************************************
** Form generated from reading UI file 'about_my_pc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_MY_PC_H
#define UI_ABOUT_MY_PC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About_My_Pc
{
public:
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *About_My_Pc)
    {
        if (About_My_Pc->objectName().isEmpty())
            About_My_Pc->setObjectName(QString::fromUtf8("About_My_Pc"));
        About_My_Pc->resize(673, 488);
        label = new QLabel(About_My_Pc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 121, 17));
        textEdit = new QTextEdit(About_My_Pc);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(23, 29, 631, 441));

        retranslateUi(About_My_Pc);

        QMetaObject::connectSlotsByName(About_My_Pc);
    } // setupUi

    void retranslateUi(QWidget *About_My_Pc)
    {
        About_My_Pc->setWindowTitle(QApplication::translate("About_My_Pc", "Form", nullptr));
        label->setText(QApplication::translate("About_My_Pc", "About My Pc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About_My_Pc: public Ui_About_My_Pc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_MY_PC_H

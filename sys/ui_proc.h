/********************************************************************************
** Form generated from reading UI file 'proc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROC_H
#define UI_PROC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_proc
{
public:
    QTableWidget *tableWidget;
    QPushButton *kill;
    QPushButton *info;
    QPushButton *Search;
    QLineEdit *lineEdit;

    void setupUi(QWidget *proc)
    {
        if (proc->objectName().isEmpty())
            proc->setObjectName(QString::fromUtf8("proc"));
        proc->resize(660, 516);
        tableWidget = new QTableWidget(proc);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(5, 1, 651, 471));
        kill = new QPushButton(proc);
        kill->setObjectName(QString::fromUtf8("kill"));
        kill->setGeometry(QRect(560, 480, 89, 25));
        info = new QPushButton(proc);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(460, 480, 89, 25));
        Search = new QPushButton(proc);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(360, 480, 89, 25));
        lineEdit = new QLineEdit(proc);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 480, 291, 25));

        retranslateUi(proc);

        QMetaObject::connectSlotsByName(proc);
    } // setupUi

    void retranslateUi(QWidget *proc)
    {
        proc->setWindowTitle(QApplication::translate("proc", "Form", nullptr));
        kill->setText(QApplication::translate("proc", "kill", nullptr));
        info->setText(QApplication::translate("proc", "info", nullptr));
        Search->setText(QApplication::translate("proc", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class proc: public Ui_proc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROC_H

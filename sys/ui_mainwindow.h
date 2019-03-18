/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp_Information;
    QAction *actionAbout_My_pc;
    QAction *actionShut;
    QAction *actionReboot;
    QAction *actionCpu_Graph;
    QAction *actionProc;
    QAction *actionNew_proc;
    QWidget *centralWidget;
    QFrame *frame1;
    QFrame *frame;
    QLabel *Cpu_label;
    QLabel *Cpu_Num;
    QLabel *Mem_label;
    QLabel *Mem_Num;
    QLabel *Active_time;
    QLabel *Run_time;
    QLabel *Hostname;
    QLabel *system1;
    QLabel *label_time;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuCPU;
    QMenu *menuProc;
    QMenu *menuAbout;
    QMenu *menuOption;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(922, 625);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionHelp_Information = new QAction(MainWindow);
        actionHelp_Information->setObjectName(QString::fromUtf8("actionHelp_Information"));
        actionAbout_My_pc = new QAction(MainWindow);
        actionAbout_My_pc->setObjectName(QString::fromUtf8("actionAbout_My_pc"));
        actionShut = new QAction(MainWindow);
        actionShut->setObjectName(QString::fromUtf8("actionShut"));
        actionReboot = new QAction(MainWindow);
        actionReboot->setObjectName(QString::fromUtf8("actionReboot"));
        actionCpu_Graph = new QAction(MainWindow);
        actionCpu_Graph->setObjectName(QString::fromUtf8("actionCpu_Graph"));
        actionProc = new QAction(MainWindow);
        actionProc->setObjectName(QString::fromUtf8("actionProc"));
        actionNew_proc = new QAction(MainWindow);
        actionNew_proc->setObjectName(QString::fromUtf8("actionNew_proc"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame1 = new QFrame(centralWidget);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setGeometry(QRect(250, 0, 661, 511));
        sizePolicy.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy);
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 241, 561));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Cpu_label = new QLabel(frame);
        Cpu_label->setObjectName(QString::fromUtf8("Cpu_label"));
        Cpu_label->setGeometry(QRect(100, 10, 67, 17));
        sizePolicy.setHeightForWidth(Cpu_label->sizePolicy().hasHeightForWidth());
        Cpu_label->setSizePolicy(sizePolicy);
        Cpu_Num = new QLabel(frame);
        Cpu_Num->setObjectName(QString::fromUtf8("Cpu_Num"));
        Cpu_Num->setGeometry(QRect(90, 110, 67, 17));
        sizePolicy.setHeightForWidth(Cpu_Num->sizePolicy().hasHeightForWidth());
        Cpu_Num->setSizePolicy(sizePolicy);
        Mem_label = new QLabel(frame);
        Mem_label->setObjectName(QString::fromUtf8("Mem_label"));
        Mem_label->setGeometry(QRect(100, 250, 67, 17));
        sizePolicy.setHeightForWidth(Mem_label->sizePolicy().hasHeightForWidth());
        Mem_label->setSizePolicy(sizePolicy);
        Mem_Num = new QLabel(frame);
        Mem_Num->setObjectName(QString::fromUtf8("Mem_Num"));
        Mem_Num->setGeometry(QRect(90, 350, 67, 17));
        sizePolicy.setHeightForWidth(Mem_Num->sizePolicy().hasHeightForWidth());
        Mem_Num->setSizePolicy(sizePolicy);
        Active_time = new QLabel(frame);
        Active_time->setObjectName(QString::fromUtf8("Active_time"));
        Active_time->setGeometry(QRect(10, 500, 201, 17));
        sizePolicy.setHeightForWidth(Active_time->sizePolicy().hasHeightForWidth());
        Active_time->setSizePolicy(sizePolicy);
        Run_time = new QLabel(frame);
        Run_time->setObjectName(QString::fromUtf8("Run_time"));
        Run_time->setGeometry(QRect(10, 530, 201, 17));
        sizePolicy.setHeightForWidth(Run_time->sizePolicy().hasHeightForWidth());
        Run_time->setSizePolicy(sizePolicy);
        Hostname = new QLabel(frame);
        Hostname->setObjectName(QString::fromUtf8("Hostname"));
        Hostname->setGeometry(QRect(10, 470, 231, 17));
        sizePolicy.setHeightForWidth(Hostname->sizePolicy().hasHeightForWidth());
        Hostname->setSizePolicy(sizePolicy);
        system1 = new QLabel(centralWidget);
        system1->setObjectName(QString::fromUtf8("system1"));
        system1->setGeometry(QRect(430, 520, 301, 31));
        sizePolicy.setHeightForWidth(system1->sizePolicy().hasHeightForWidth());
        system1->setSizePolicy(sizePolicy);
        label_time = new QLabel(centralWidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(680, 540, 231, 20));
        sizePolicy.setHeightForWidth(label_time->sizePolicy().hasHeightForWidth());
        label_time->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 922, 28));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuCPU = new QMenu(menuBar);
        menuCPU->setObjectName(QString::fromUtf8("menuCPU"));
        menuProc = new QMenu(menuBar);
        menuProc->setObjectName(QString::fromUtf8("menuProc"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuOption = new QMenu(menuBar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuProc->menuAction());
        menuBar->addAction(menuCPU->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuOption->menuAction());
        menuHelp->addAction(actionHelp_Information);
        menuCPU->addAction(actionCpu_Graph);
        menuProc->addAction(actionProc);
        menuProc->addAction(actionNew_proc);
        menuAbout->addAction(actionAbout_My_pc);
        menuOption->addAction(actionShut);
        menuOption->addAction(actionReboot);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHelp_Information->setText(QApplication::translate("MainWindow", "Help-Information", nullptr));
        actionAbout_My_pc->setText(QApplication::translate("MainWindow", "About_My_pc", nullptr));
        actionShut->setText(QApplication::translate("MainWindow", "Shut Down", nullptr));
        actionReboot->setText(QApplication::translate("MainWindow", "Reboot", nullptr));
        actionCpu_Graph->setText(QApplication::translate("MainWindow", "Cpu_Graph", nullptr));
        actionProc->setText(QApplication::translate("MainWindow", "Proc", nullptr));
        actionNew_proc->setText(QApplication::translate("MainWindow", "New_proc", nullptr));
        Cpu_label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Cpu_Num->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Mem_label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Mem_Num->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Active_time->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Run_time->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Hostname->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        system1->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_time->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuCPU->setTitle(QApplication::translate("MainWindow", "CPU", nullptr));
        menuProc->setTitle(QApplication::translate("MainWindow", "Proc", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        menuOption->setTitle(QApplication::translate("MainWindow", "Option", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

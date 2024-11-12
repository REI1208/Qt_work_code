/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnSquare;
    QLineEdit *display;
    QPushButton *btnNum4;
    QPushButton *btnNum9;
    QPushButton *btnMltiple;
    QPushButton *btnMinus;
    QPushButton *btnNum0;
    QPushButton *btnNum2;
    QPushButton *btnNum3;
    QPushButton *btnEqual;
    QPushButton *btnNum1;
    QPushButton *btnSqrt;
    QPushButton *btnNum7;
    QPushButton *btnPlus;
    QPushButton *btnInverse;
    QPushButton *btnDivide;
    QPushButton *btnNum5;
    QPushButton *btnClearAll;
    QPushButton *btnNum6;
    QPushButton *btnSign;
    QPushButton *btnClear;
    QPushButton *btnPercnetage;
    QPushButton *btnDel;
    QPushButton *btnNum8;
    QPushButton *btnPeriod;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(466, 444);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(180, 180, 180);\n"
"font-size:36pt;\n"
"color:white;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(194, 194, 194);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 249, 243);\n"
"color:grey;\n"
"}\n"
"QLineEdit{\n"
"font-size:48pt;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnSquare = new QPushButton(centralwidget);
        btnSquare->setObjectName("btnSquare");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnSquare, 2, 1, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy2);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 4);

        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        sizePolicy1.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum4, 4, 0, 1, 1);

        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        sizePolicy1.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum9, 3, 2, 1, 1);

        btnMltiple = new QPushButton(centralwidget);
        btnMltiple->setObjectName("btnMltiple");
        sizePolicy1.setHeightForWidth(btnMltiple->sizePolicy().hasHeightForWidth());
        btnMltiple->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnMltiple, 3, 3, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        sizePolicy1.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnMinus, 4, 3, 1, 1);

        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        sizePolicy1.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum0, 6, 1, 1, 1);

        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        sizePolicy1.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum2, 5, 1, 1, 1);

        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        sizePolicy1.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum3, 5, 2, 1, 1);

        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName("btnEqual");
        sizePolicy1.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnEqual, 6, 3, 1, 1);

        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName("btnNum1");
        sizePolicy1.setHeightForWidth(btnNum1->sizePolicy().hasHeightForWidth());
        btnNum1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum1, 5, 0, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        btnSqrt->setObjectName("btnSqrt");
        sizePolicy1.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnSqrt, 2, 2, 1, 1);

        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        sizePolicy1.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy1);
        btnNum7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnNum7, 3, 0, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        sizePolicy1.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnPlus, 5, 3, 1, 1);

        btnInverse = new QPushButton(centralwidget);
        btnInverse->setObjectName("btnInverse");
        sizePolicy1.setHeightForWidth(btnInverse->sizePolicy().hasHeightForWidth());
        btnInverse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnInverse, 2, 0, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        sizePolicy1.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnDivide, 2, 3, 1, 1);

        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        sizePolicy1.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum5, 4, 1, 1, 1);

        btnClearAll = new QPushButton(centralwidget);
        btnClearAll->setObjectName("btnClearAll");
        sizePolicy1.setHeightForWidth(btnClearAll->sizePolicy().hasHeightForWidth());
        btnClearAll->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnClearAll, 1, 2, 1, 1);

        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        sizePolicy1.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum6, 4, 2, 1, 1);

        btnSign = new QPushButton(centralwidget);
        btnSign->setObjectName("btnSign");
        sizePolicy1.setHeightForWidth(btnSign->sizePolicy().hasHeightForWidth());
        btnSign->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnSign, 6, 0, 1, 1);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnClear, 1, 1, 1, 1);

        btnPercnetage = new QPushButton(centralwidget);
        btnPercnetage->setObjectName("btnPercnetage");
        sizePolicy1.setHeightForWidth(btnPercnetage->sizePolicy().hasHeightForWidth());
        btnPercnetage->setSizePolicy(sizePolicy1);
        btnPercnetage->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnPercnetage, 1, 0, 1, 1);

        btnDel = new QPushButton(centralwidget);
        btnDel->setObjectName("btnDel");
        sizePolicy1.setHeightForWidth(btnDel->sizePolicy().hasHeightForWidth());
        btnDel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnDel, 1, 3, 1, 1);

        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        sizePolicy1.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum8, 3, 1, 1, 1);

        btnPeriod = new QPushButton(centralwidget);
        btnPeriod->setObjectName("btnPeriod");
        sizePolicy1.setHeightForWidth(btnPeriod->sizePolicy().hasHeightForWidth());
        btnPeriod->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnPeriod, 6, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 466, 21));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250-\345\220\264\346\235\255\351\223\256-2022414040233", nullptr));
        btnSquare->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        display->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnMltiple->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnSqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnInverse->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnClearAll->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btnPercnetage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnDel->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnPeriod->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

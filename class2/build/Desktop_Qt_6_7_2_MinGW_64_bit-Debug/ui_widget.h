/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton;
    QToolButton *toolButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(490, 600);
        Widget->setMinimumSize(QSize(490, 600));
        Widget->setMaximumSize(QSize(490, 16777215));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 204, 312, 210));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName("checkBox_3");

        horizontalLayout->addWidget(checkBox_3);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(310, 0));
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");

        horizontalLayout_2->addWidget(radioButton);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_2->addWidget(radioButton_3);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_5->addWidget(pushButton_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        toolButton = new QToolButton(widget);
        toolButton->setObjectName("toolButton");

        horizontalLayout_4->addWidget(toolButton);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName("toolButton_2");

        horizontalLayout_4->addWidget(toolButton_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "CheckBox", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "CheckBox", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Widget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
<<<<<<< HEAD
#include <QString>
=======
>>>>>>> main

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnNum0,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum1,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum2,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum3,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum4,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum5,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum6,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum7,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum8,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnNum9,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
<<<<<<< HEAD
=======

    connect(ui->btnPlus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMinus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMltiple,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnDivide,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
>>>>>>> main
}

MainWindow::~MainWindow()
{
    delete ui;
}

<<<<<<< HEAD
void MainWindow::btnNumClicked()
{
    QString str=ui->display->text();
    str+=qobject_cast<QPushButton*>(sender())->text();
    ui->display->setText(str);
    ui->statusBar->showMessage(qobject_cast<QPushButton*>(sender())->text()+"btn clicked");
=======
QString MainWindow::calculation(bool *ok)
{

    if(operand.size()==2&&operand.size()>0){
        ui->statusBar->showMessage("calcuation is in progress");
    }else{
        ui->statusBar->showMessage(QString("operand is {1}"));
    }
    return "";
}

void MainWindow::btnNumClicked()
{
    QString digit = qobject_cast<QPushButton*>(sender())->text();
    if(digit=="0"&&operand=="0")
        digit="";
    if(operand=="0"&&digit!="0")
        operand="";
    operand+=digit;
    ui->display->setText(operand);
>>>>>>> main
}



<<<<<<< HEAD
=======

>>>>>>> main
void MainWindow::on_btnPeriod_clicked()
{
    if(!operand.contains(".")){
        operand += qobject_cast<QPushButton*>(sender())->text();
    }
    ui->display->setText(operand);
}


void MainWindow::on_btnDel_clicked()
{
    operand = operand.left(operand.length()-1);
    ui->display->setText(operand);
}


void MainWindow::on_btnClearAll_clicked()
{
    operand.clear();
    ui->display->setText(operand);
}

<<<<<<< HEAD
=======
void MainWindow::btnBinaryOperatorClicked()
{
    ui->statusBar->showMessage("last operand"+operand);
    QString opcode = qobject_cast<QPushButton*>(sender())->text();


    if(operand!=""){
        operands.push_back(operand);
        operand="";

        operands.push_back(opcode);

    }
    QString result =  calculation();
    ui->display->setText(result);

}


void MainWindow::on_btnEqual_clicked()
{
    if(operand!=""){
        operands.push_back(operand);
        operand="";
    }
    QString result =  calculation();
    ui->display->setText(result);
}

>>>>>>> main

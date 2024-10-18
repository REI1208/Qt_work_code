#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <math.h>


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

    connect(ui->btnPlus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMinus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMltiple,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnDivide,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));

    connect(ui->btnPercnetage,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnInverse,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnSquare,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnSqrt,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnSign,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::calculation(bool *ok)
{
    double result = 0;
    if(operands.size()==2&&opcodes.size()>0){
        double operand1 = operands.front().toDouble();
        operands.pop_front();
        double operand2 = operands.front().toDouble();
        operands.pop_front();

        QString op = opcodes.front();
        opcodes.pop_front();

        if(op == "+"){
            result = operand1+operand2;
        }
        else if(op == "-"){
            result = operand1-operand2;
        }
        else if(op == "×"){
            result = operand1*operand2;
        }
        else if(op == "/"){
            result = operand1/operand2;
        }

        operands.push_back(QString::number(result));

        ui->statusBar->showMessage(QString("calcuation is in progress;operand is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));
    }else{
        ui->statusBar->showMessage(QString("operand is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));
    }
    return QString::number(result);
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
}




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
    operands.clear();
    opcodes.clear();
    ui->display->setText(operand);
}

void MainWindow::btnBinaryOperatorClicked()
{
    ui->statusBar->showMessage("last operand"+operand);
    QString opcode = qobject_cast<QPushButton*>(sender())->text();

    if(operand!=""){
        operands.push_back(operand);
        operand="";
    }
    if (operands.size() == 2) {
        QString result = calculation();  // 执行运算并显示结果
        ui->display->setText(result);
    }
    opcodes.push_back(opcode);
}

void MainWindow::btnUnaryOperatorClicked()
{
    if(operand!=""){
        double result = operand.toDouble();
        operand="";

        QString op = qobject_cast<QPushButton*>(sender())->text();

        if(op=="%"){
            result /=100.0;
        }
        else if(op=="1/x"){
            result =1/result;
        }
        else if(op=="x^2"){
            result *=result;
        }
        else if(op=="√"){
            result =sqrt(result);
        }
        else if(op=="+/-"){
            result = -result;
        }
        ui->display->setText(QString::number(result));
        operand=QString::number(result);
    }
}



void MainWindow::on_btnEqual_clicked()
{
    if(operand!=""){
        operands.push_back(operand);
        operand="";
    }
    // 如果已经有两个操作数，则进行计算
    if (operands.size() == 2) {
        QString result = calculation();  // 计算并显示结果
        ui->display->setText(result);

        // 清空操作符队列，并将计算结果作为下一个运算的初始值
        opcodes.clear();
        operands.clear();
        operand=result;
    }
}


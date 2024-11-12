#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"
#include "searchdialog.h"
#include "replacedialog.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    textChanged = false;

    statusLabel.setMaximumWidth(150);
    statusLabel.setText("Length: "+ QString::number(0) + "   lines: " + QString::number(1));
    ui->statusbar->addPermanentWidget(&statusLabel);

    statusCursorLabel.setMaximumWidth(150);
    statusCursorLabel.setText("Ln: "+ QString::number(0) + "   Col: " + QString::number(1));
    ui->statusbar->addPermanentWidget(&statusCursorLabel);

    QLabel *author = new QLabel(ui->statusbar);
    author->setText(("吴杭铮"));
    ui->statusbar->addPermanentWidget(author);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionFind_triggered()
{
    SearchDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionReplace_triggered()
{
    ReplaceDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionNew_triggered()
{
    if(!userEditConfirmed()){
        return;
    }

    ui->TextEdit->clear();
    this->setWindowTitle(tr("新建文本 - 编辑器"));

    textChanged = false;
}


void MainWindow::on_actionOpen_triggered()
{
    if(!userEditConfirmed()){
        return;
    }

    QString filename = QFileDialog::getOpenFileName(this,"打开文件",".",tr("Text Files (*.txt) ;; All (*.*)"));
    QFile file(filename);
    if(!file.open(QFile::ReadOnly |QFile::Text)){
        QMessageBox::warning(this,"..","打开文件失败");
        return;
    }

    filePath = filename;

    QTextStream in(&file);
    QString text = in.readAll();
    ui->TextEdit->insertPlainText(text);
    file.close();

    this->setWindowTitle(QFileInfo(filename).absoluteFilePath());

    textChanged = false;
}


void MainWindow::on_actionSave_triggered()
{


    QFile file(filePath);

    if(!file.open(QFile::WriteOnly |QFile::Text)){
        QMessageBox::warning(this,"..","打开文件失败");

        QString filename = QFileDialog::getSaveFileName(this,"保存文件",".",tr("Text Files (*.txt)"));

        QFile file(filename);
        if(!file.open(QFile::WriteOnly |QFile::Text)){

            QMessageBox::warning(this,"..","打开保存文件失败");
            return;

        }
        filePath =filename;
    }

    QTextStream out(&file);
    QString text = ui->TextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absoluteFilePath());
}


void MainWindow::on_actionSaveAs_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,"保存文件",".",tr("Text Files (*.txt)"));

    QFile file(filename);
    if(!file.open(QFile::WriteOnly |QFile::Text)){

        QMessageBox::warning(this,"..","打开保存文件失败");
        return;

    }
    filePath =filename;
    QTextStream out(&file);
    QString text = ui->TextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absoluteFilePath());
}


void MainWindow::on_TextEdit_textChanged()
{
    if(!textChanged){
        this->setWindowTitle("*" +  this->windowTitle());
        textChanged = true;

    }
}

bool MainWindow::userEditConfirmed()
{
    QString path = filePath != "" ? filePath:"无标题.txt";

    if(!textChanged){
        QMessageBox msg(this);
        msg.setWindowTitle("...");
        msg.setWindowFlag(Qt::Drawer);
        msg.setText(QString("是否将更改保存到\n") + "\"" + path + "\" ?");
        msg.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel );
        int r = msg.exec();
        switch(r){
        case QMessageBox::Yes:
            on_actionSave_triggered();
            break;
        case QMessageBox::No:
            textChanged=false;
            break;
        case QMessageBox::Cancel:
            return false;
        }

    }
    return true;

}


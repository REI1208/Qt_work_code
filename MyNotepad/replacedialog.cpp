#include "replacedialog.h"
#include "ui_replacedialog.h"
#include <QMessageBox>

ReplaceDialog::ReplaceDialog(QWidget *parent,QPlainTextEdit* textEdit):
    QDialog(parent),
    ui(new Ui::ReplaceDialog)
{
    ui->setupUi(this);
    pTextEdit = textEdit;

    ui->rbDown->setChecked(true);
}

ReplaceDialog::~ReplaceDialog()
{
    delete ui;
}

void ReplaceDialog::on_btFindNext_clicked()
{
    QString target = ui->searchEdit->text();

    if(target == ""|| pTextEdit==nullptr )
        return;

    QString text = pTextEdit->toPlainText();
    QTextCursor c  =pTextEdit->textCursor();
    int index =-1;



    // 向下查找
    if (ui->rbDown->isChecked()) {
        index = text.indexOf(target, c.position(),
                             ui->cbCaseSensetive->isChecked() ? Qt::CaseSensitive: Qt::CaseInsensitive );  // 从当前光标位置向下查找
        if (index >= 0) {
            c.setPosition(index);
            c.setPosition(index + target.length(), QTextCursor::KeepAnchor);  // 设置选中文本
            pTextEdit->setTextCursor(c);  // 设置光标并选中文本
        }
    }
    // 向上查找
    else if (ui->rbUp->isChecked()) {
        // 从当前光标位置向上查找，需要确保索引不小于0
        int startPos = c.position() - 1; // 从当前位置之前开始查找
        index = text.lastIndexOf(target, startPos,
                                 ui->cbCaseSensetive->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive );   // 使用 `lastIndexOf` 向上查找
        if (index >= 0) {
            c.setPosition(index + target.length());
            c.setPosition(index, QTextCursor::KeepAnchor);  // 设置选中文本
            pTextEdit->setTextCursor(c);  // 设置光标并选中文本
        }
    }
    if(index<0){
        QMessageBox msg(this);  // 如果没有找到
        msg.setWindowTitle("记事本");
        msg.setText(QString("未找到 ") + target);
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}


void ReplaceDialog::on_btReplace_clicked()
{
    QString target = ui->searchEdit->text();
    QString to = ui->targetText->text();
    QString text = pTextEdit->toPlainText();

    QString selText = pTextEdit->textCursor().selectedText();

    if(selText == target)
        pTextEdit->insertPlainText(to);
}


void ReplaceDialog::on_btAllReplace_clicked()
{
    QString target = ui->searchEdit->text();
    QString to = ui->targetText->text();

    // 获取编辑器中的全部文本
    if((pTextEdit!= nullptr) && (target!="") && (to!="") ) {
        QString text = pTextEdit->toPlainText();

        // 使用 QString::replace 替换所有匹配项
        text.replace(target, to,ui->cbCaseSensetive->isChecked() ? Qt::CaseSensitive: Qt::CaseInsensitive);

        // 更新编辑器中的文本
        pTextEdit->clear();
        pTextEdit->insertPlainText(text);
    }


}


void ReplaceDialog::on_btCancel_clicked()
{
    accept();
}


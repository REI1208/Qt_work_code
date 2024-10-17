#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString operand;
    QStack<QString> operands;
private slots:
    void btnNumClicked();

    void on_btnPeriod_clicked();

    void on_btnDel_clicked();

    void on_btnClearAll_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *statusMsgLabel;
};
#endif // MAINWINDOW_H

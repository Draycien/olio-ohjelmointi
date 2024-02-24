#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::on_btnCount_clicked()
{
    result++;
    QString s = QString::number(result);
    qDebug()<<"Button has been clicked";
    ui->labelResult->setText(""+s+"");
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Button has been clicked";
    result=0;
    ui->labelResult->setText("0");
}


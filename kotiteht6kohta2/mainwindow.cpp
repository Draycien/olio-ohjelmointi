#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QObject::connect(ui->btn0, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn1, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn2, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn3, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn4, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn5, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn6, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn7, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn8, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);
    QObject::connect(ui->btn9, &QPushButton::clicked, this,&MainWindow::numberClickedHandler);

    QObject::connect(ui->btnSub, &QPushButton::clicked, this,&MainWindow::addSubMulDivClickHandler);
    QObject::connect(ui->btnMul, &QPushButton::clicked, this,&MainWindow::addSubMulDivClickHandler);
    QObject::connect(ui->btnDiv, &QPushButton::clicked, this,&MainWindow::addSubMulDivClickHandler);
    QObject::connect(ui->btnAdd, &QPushButton::clicked, this,&MainWindow::addSubMulDivClickHandler);

    QObject::connect(ui->btnClear, &QPushButton::clicked, this,&MainWindow::clearAndEnterClickHandler);
    QObject::connect(ui->btnEnter, &QPushButton::clicked, this,&MainWindow::clearAndEnterClickHandler);

    state=0;
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::numberClickedHandler() {
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"State is : "<<state;

    if(state==1 || state==0) {
        number1 = number1 + name.last(1);
        ui->lineOne->setText(number1);
        qDebug()<<"Button name: "<<name;
        state=1;
    }
    if(state==2 || state==3) {
        state=2;
        number2 = number2 + name.last(1);
        ui->lineTwo->setText(number2);
        qDebug()<<"Button name: " <<name;

    }
}

void MainWindow::clearAndEnterClickHandler() {
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"State is : "<<state;

    if(name=="btnClear") {
        if(state==1) {
            number1=0;
            ui->lineOne->setText(number1);
        }
        else if(state==2) {
            number2=0;
            ui->lineTwo->setText(number2);
        }
        else if(state==3) {
            resetLineEdits();
        }
    }

    if(name=="btnEnter") {
        state=3;
        float n1=number1.toFloat();
        float n2=number2.toFloat();

        switch(operand) {
        case '-' :
            result=n1-n2;
            break;
        case '*' :
            result=n1*n2;
            break;
        case '/' :
            result=n1/n2;
            break;
        case '+' :
            result=n1+n2;
            break;
        }
        ui->lineResult->setText(QString::number(result));

    }
}

void MainWindow::addSubMulDivClickHandler() {
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString text = button->objectName();

    if(state==1) {
        if(text=="btnSub") {
            operand='-';
            qDebug()<<"Subtract";
        }
        else if(text=="btnMul") {
            operand='*';
            qDebug()<<"Multiply";
        }
        else if(text=="btnDiv") {
            operand='/';
            qDebug()<<"Divide";
        }
        else if(text=="btnAdd") {
            operand='+';
            qDebug()<<"Add";
        }
    }
    state=2;
}

void MainWindow::resetLineEdits() {
    qDebug()<<"Reset button.";
    number1=0;
    number2=0;
    result=0;
    operand=0;
    state=0;
    ui->lineOne->setText(number1);
    ui->lineTwo->setText(number2);
    ui->lineResult->setText(QString::number(result));

}

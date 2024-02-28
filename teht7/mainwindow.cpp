#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    pQTimer=new QTimer();
    ui->pBarPlayer1->setValue(0);
    ui->pBarPlayer2->setValue(0);
    ui->gametext->setText("Select Playtime and press to start the game");

    QObject::connect(ui->btnStart, &QPushButton::clicked, this,&MainWindow::ClickerHandler);
    QObject::connect(ui->btnStop, &QPushButton::clicked, this,&MainWindow::ClickerHandler);
    QObject::connect(ui->btnPlayer1, &QPushButton::clicked, this,&MainWindow::ClickerHandler);
    QObject::connect(ui->btnPlayer2, &QPushButton::clicked, this,&MainWindow::ClickerHandler);
    QObject::connect(ui->btn120s, &QPushButton::clicked, this,&MainWindow::ClickerHandler);
    QObject::connect(ui->btn5min, &QPushButton::clicked, this,&MainWindow::ClickerHandler);

}

MainWindow::~MainWindow() {
    delete ui;
    delete pQTimer;
    pQTimer=nullptr;

}

void MainWindow::timeout() {
    if (player1Time>gameTimer && player2Time>gameTimer && currentPlayer>0){
        ui->pBarPlayer1->setValue(player1Time);
        ui->pBarPlayer2->setValue(player2Time);
        updateProgressBar();
    }
    else if (player1Time<=gameTimer){
        ui->pBarPlayer1->setValue(player1Time);
        currentPlayer=0;
        ui->gametext->setText("Player 1 ran out of time");
        pQTimer->stop();
    }
    else if (player2Time<=gameTimer){
        ui->pBarPlayer2->setValue(player2Time);
        currentPlayer=0;
        ui->gametext->setText("Player 2 ran out of time");
        pQTimer->stop();

    }
}

void MainWindow::ClickerHandler() {
    qDebug()<<"clicker handler";
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if (name=="btn120s" && gameTimer==0) {

        player1Time=60;
        player2Time=60;
        gameTimer=0;
        ui->pBarPlayer1->setRange(0,player1Time);
        ui->pBarPlayer2->setRange(0,player2Time);
        qDebug()<<"120 seconds "<<gameTimer;
        ui->gametext->setText("Game is going to be 120 seconds Press Start to play");
        currentPlayer=0;
    }

    if (name=="btn5min") {

        player1Time=150;
        player2Time=150;
        gameTimer=0;
        qDebug()<<"300 seconds "<<gameTimer;
        ui->pBarPlayer1->setRange(0,player1Time);
        ui->pBarPlayer2->setRange(0,player2Time);
        ui->gametext->setText("Game is going to be 5 minutes Press Start to play");
        currentPlayer=0;
    }


    if (name=="btnStart" && currentPlayer==0) {
        connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
        pQTimer->start(1000);
        currentPlayer=1;
        qDebug()<<"Button name: "<<name;
        ui->gametext->setText("Player 1 Turn");
    }

    else if (name=="BtnSTOP") {
        currentPlayer=0;
        player1Time=0;
        player2Time=0;
        qDebug()<<"Game Over";
        ui->gametext->setText("Select Playtime and press to start the game");
        pQTimer->stop();
        ui->pBarPlayer1->setValue(0);
        ui->pBarPlayer2->setValue(0);
    }

    if (name=="btnPlayer1" &&currentPlayer==1) {
        currentPlayer=2;
        ui->gametext->setText("Player 2 Turn");
    }

    else  if (name=="btnPlayer2" &&currentPlayer==2) {
        currentPlayer=1;
        ui->gametext->setText("Player 1 Turn");
    }
}

void MainWindow::updateProgressBar() {
        if (currentPlayer==1){
        ui->pBarPlayer1->setValue(player1Time);
        qDebug()<<"Player 1:"<<player1Time;
        player1Time-=1;

    } else if (currentPlayer==2){
        ui->pBarPlayer2->setValue(player2Time);
        qDebug()<<"Player 2: "<<player2Time;
        player2Time-=1;
    }

}

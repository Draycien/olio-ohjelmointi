#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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

private slots:
    void timeout();

private:
    Ui::MainWindow *ui;

    void ClickerHandler();
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTimer;

    QTimer * pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString,short);
};
#endif // MAINWINDOW_H

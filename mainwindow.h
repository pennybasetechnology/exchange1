#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QWidget>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QByteRef>

//#include "conn.cpp"
#include "QLayout"
#include "bitcoin.h"
#include "litecoin.h"
#include "dogecoin.h"
#include "bitcoincash.h"
#include <bitcoinapi/bitcoinapi.h>
#include "shapshift.h"

#include "sendbitcoin.h"
#include "senddogecoin.h"
#include "sendlitecoin.h"
#include "recievebitcoin.h"
#include "recievedogecoin.h"
#include "recivelitecoin.h"
#include "sendbitcoincash.h"
#include "recievebitcoincash.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QNetworkAccessManager *network1;
    QNetworkAccessManager *manager;
    bitcoin Cbitcoin;
    litecoin Clitecoin;
    dogecoin Cdogecoin;
    bitcoincash Cbitcoincash;

    sendbitcoin SendBitecoin;
    senddogecoin SendDogecoin;
    sendlitecoin SendLitecoin;
    recievebitcoin RecieveBitcoin;
    recivelitecoin RecieveLitecoin;
    recievedogecoin RecieveDogecoin;
    sendbitcoincash SendBitcoincash;
    recievebitcoincash RecieveBitcoincash;

    //shapshift shape;

    //MyFixture Mf;

    void hideallframe();
    QLayout *layout1;

    void restoreWindowGeometry();
    void rate(QString pair);
    void postconnection(QString pair);
    double exchange_rate;
    double limit;
    double minimum;
    double minerfee;


private slots:

    void bitcoinlitecoinrate(QNetworkReply *pReply);
    void replyfinished(QNetworkReply *pReply);

    void on_home_pushButton_clicked();

    void on_wallet_pushButton_clicked();

    void on_exchange_pushButton_clicked();

    void on_select_exchange_comboBox_activated(const QString &arg1);

    void on_select_recieve_comboBox_activated(const QString &arg1);

    void on_bitcoin_pushButton_clicked();

    void on_litecoin_pushButton_clicked();

    void on_dogecoin_pushButton_clicked();

    void on_exchange_pushButton_2_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_send_bitcoin_pushButton_clicked();

    void on_recieve_bitcoin_pushButton_clicked();

    void on_send_litecoin_pushButton_clicked();

    void on_recieve_litecoin_pushButton_clicked();

    void on_send_dogecoin_pushButton_clicked();

    void on_recieve_docecoin_pushButton_clicked();

    void on_bitcoin_cash_pushButton_clicked();

    void on_ethereum_pushButton_clicked();

    void on_send_bitcoin_cash_pushButton_clicked();

    void on_recieve_bitcoin_cash_pushButton_clicked();

    void on_send_ethereum_pushButton_clicked();

    void on_recieve_ethereum_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

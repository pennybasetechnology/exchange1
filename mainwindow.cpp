#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QWidget"
#include <bitcoinapi/bitcoinapi.h>
#include <bitcoinapi/exception.h>
#include <iostream>
#include <QSettings>
#include <QDesktopWidget>
#include <QGridLayout>
#include "parser.h"
#include <QStandardItem>
#include <time.h>
#include <QDateTime>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    restoreWindowGeometry();

    hideallframe();
    ui->menu_frame->show();
    ui->home_frame->show();

    ui->ethereum_pushButton->hide();


    //ui->main_label->setStyleSheet("background-image: url(:/background/exodus.png)");

    ui->main_pushButton->setIcon(QIcon(":/background/exodus.png"));
    ui->main_pushButton->setIconSize(QSize(150,100));

    //ui->logo_frame->setWindowIcon(QIcon(":/background/home.png"));

    ui->home_pushButton->setIcon(QIcon(":/background/home.png"));
    ui->home_pushButton->setIconSize(QSize(25,25));

    ui->exchange_pushButton->setIcon(QIcon(":/background/exchange2.png"));
    ui->exchange_pushButton->setIconSize(QSize(25,25));

    ui->wallet_pushButton->setIcon(QIcon(":/background/walletroot.png"));
    ui->wallet_pushButton->setIconSize(QSize(25,25));


    ui->exchange_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color: beige;");
    ui->home_pushButton->setStyleSheet(" padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color: beige;");
    ui->wallet_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color: beige;");

    ui->send_bitcoin_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(170, 0, 0); color : rgb(170, 0, 0);");
    ui->recieve_bitcoin_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(170, 0, 0); color : rgb(170, 0, 0);");



    ui->send_litecoin_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(13, 13, 13); color: rgb(13, 13, 13);;");
    ui->recieve_litecoin_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(13, 13, 13); color: rgb(13, 13, 13);;");

    ui->send_dogecoin_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(0, 0, 255); color : rgb(0, 0, 255);");
    ui->recieve_docecoin_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(0, 0, 255); color : rgb(0, 0, 255);");

    ui->send_bitcoin_cash_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(0, 85, 0); color : rgb(0, 85, 0);");
    ui->recieve_bitcoin_cash_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(0, 85, 0); color : rgb(0, 85, 0);");

    ui->send_ethereum_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(0, 255, 255); color : rgb(0, 255, 255);");
    ui->recieve_ethereum_pushButton->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(0, 255, 255); color : rgb(0, 255, 255);");


    ui->scrollArea->setStyleSheet("background: transparent; background-color: transparent");
    ui->bicoin_tableView->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");

    ui->scrollArea_2->setStyleSheet("background: transparent; background-color: transparent;color:black;");
    ui->litecoin_tableView->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");

    ui->scrollArea_3->setStyleSheet("background: transparent; background-color: transparent ;color:rgb(0, 0, 255);");
    ui->dogecoin_tableView->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");


    ui->scrollArea_4->setStyleSheet("background: transparent; background-color: transparent ;color:rgb(0, 85, 0);");
    ui->ethereum_tableView->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");

    ui->scrollArea_5->setStyleSheet("background: transparent; background-color: transparent ;color:rgb(0, 255, 255);");
    ui->bicoin_cash_tableView->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");


    ui->select_exchange_comboBox->setStyleSheet("background: transparent; border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(13, 13, 13);padding:15px" );

    ui->select_recieve_comboBox->setStyleSheet("background: transparent; border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(13, 13, 13);padding:15px" );

    //ui->bicoin_tableView->set

    ui->recieve_amount_lineEdit->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");


    ui->doubleSpinBox->setStyleSheet("background: transparent;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(13, 13, 13);padding:15px" );


    ui->exchange_pushButton_2->setStyleSheet("padding:10px;border-radius:10px; border-style: outset;border-width: 2px; border-color:rgb(13, 13, 13); color : rgb(13, 13, 13);");




    ui->error_lineEdit->setStyleSheet("background: transparent; background-color: transparent; border-style: transparent; border-color: transparent;");

    //ui->bicoin_tableView->setStyleSheet();

    ui->bitcoin_home_label->setText(Cbitcoin.getbalance()+" BTC");
    ui->litecoin_home_label->setText(Clitecoin.getbalance()+" LTC");
    ui->dogecoin_home_label->setText(Cdogecoin.getbalance()+" DOGE");
    ui->bitcoin_cash_homelabel->setText(Cbitcoincash.getbalance()+" BCH");
   // ui->ethereum_home_label->setText(Cdogecoin.getbalance()+" ETH");




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hideallframe()
{

    ui->bitcoin_wallet_frame->hide();
    ui->litecoin_wallet_frame->hide();
    ui->dogecoin_wallet_frame->hide();
    ui->bitcoin_cash_wallet_frame->hide();
    ui->ethereum_wallet_frame->hide();
    ui->exchange_frame->hide();
    //ui->menu_exchange_frame->hide();
    ui->menu_wallete_frame->hide();
    ui->home_frame->hide();
    //ui->send_frame->hide();

}

void MainWindow::on_home_pushButton_clicked()
{
    hideallframe();
    ui->home_frame->show();
    //std::cout<<"balance  "<<btc.getbalance();
    ui->bitcoin_home_label->setText(Cbitcoin.getbalance()+" BTC");
    ui->litecoin_home_label->setText(Clitecoin.getbalance()+" LTC");
    ui->dogecoin_home_label->setText(Cdogecoin.getbalance()+" DOGE");
    ui->bitcoin_cash_homelabel->setText(Cbitcoincash.getbalance()+" BCH");


}

void MainWindow::on_wallet_pushButton_clicked()
{

    hideallframe();
    ui->menu_wallete_frame->show();
    ui->bitcoin_wallet_frame->show();

    ui->available_amount_bitcoin_label->setText(Cbitcoin.getbalance());
    ui->unconfirmed_amount_bitcoin_label->setText(Cbitcoin.unconfirmedbalance());

    QStandardItemModel *model = new QStandardItemModel(0,1,this); //2 Rows and 3 Columns

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Account")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Amount")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Time")));
    // model->setHorizontalHeaderItem(3, new QStandardItem(QString("Address")));
    // model->setHorizontalHeaderItem(4, new QStandardItem(QString("Confirmations")));


    ui->bicoin_tableView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->bicoin_tableView->setStyleSheet("background:transparent;color:red;");
    ui->bicoin_tableView->setModel(model);

    //QStandardItem *firstRow = new QStandardItem(QString("ColumnVVBCBCHGCHGCGHCGHGHCHGHGalue"));

    //model->setItem(0,0,firstRow);
    //model->

    //ui->bicoin_tableView->



    Cbitcoin.listtransaction();

    for(int i = 0; i<Cbitcoin.listtrans.size(); i++)
    {
        int a =0;
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(Cbitcoin.listtrans[i].account));
        firstRow->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a,firstRow);

        QStandardItem *firstRow1 = new QStandardItem(QString("%1").arg(Cbitcoin.listtrans[i].amount));
        firstRow1->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+1,firstRow1);

        int unixTime = Cbitcoin.listtrans[i].time;
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        //qDebug() << timestamp.toString(Qt::SystemLocaleShortDate);

        QStandardItem *firstRow2 = new QStandardItem(timestamp.toString(Qt::SystemLocaleShortDate));
        firstRow2->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+2,firstRow2);

        //        QStandardItem *firstRow3 = new QStandardItem(QString::fromStdString(Cbitcoin.listtrans[i].address));
        //        firstRow3->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        //        model->setItem(i,a+3,firstRow3);

        //        QStandardItem *firstRow4 = new QStandardItem(QString("%1").arg(Cbitcoin.listtrans[i].confirmations));
        //        firstRow4->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        //        model->setItem(i,a+4,firstRow4);

        ui->bicoin_tableView->resizeColumnsToContents();

        //        std::cout<< "Account : " << Cbitcoin.listtrans[i].account <<std ::endl;
        //        std::cout<< "Amount : " << Cbitcoin.listtrans[i].amount <<std ::endl;
        //        std::cout<< "Time : " << Cbitcoin.listtrans[i].time <<std ::endl;
    }



}

void MainWindow::on_exchange_pushButton_clicked()
{
    //int i =1;

    hideallframe();

    ui->exchange_frame->show();

    ui->select_exchange_comboBox->setCurrentIndex(0);
    ui->select_recieve_comboBox->setCurrentIndex(1);



    ui->available_amount_exchange_label->setText(Cbitcoin.getbalance());
    ui->available_amount_recieve_label->setText(Clitecoin.getbalance());

    ui->unit_available_amoun_label->setText("btc");
    ui->unit_exchange_amount_label->setText("btc");

    ui->unit_available_amount_recieve_label->setText("ltc");
    ui->unit_recieve_amount_label->setText("ltc");

    ui->recieve_amount_lineEdit->setText("0.000000");

}


void MainWindow::restoreWindowGeometry()
{
    QSettings settings;
    QPoint pos = settings.value("nWindowPos").toPoint();
    QSize size = settings.value("nWindowSize", QSize(850, 550)).toSize();
    if (!pos.x() && !pos.y())
    {
        QRect screen = QApplication::desktop()->screenGeometry();
        pos.setX((screen.width()-size.width())/2);
        pos.setY((screen.height()-size.height())/2);
    }
    resize(size);
    move(pos);
}

void MainWindow::on_select_exchange_comboBox_activated(const QString &arg1)
{
    if(arg1=="")
    {
        ui->unit_available_amoun_label->setText("   ");
        ui->unit_exchange_amount_label->setText("   ");

        ui->select_recieve_comboBox->clear();
        //ui->select_recieve_comboBox->addItem("Select");
        ui->select_recieve_comboBox->addItem("Bitcoin");
        ui->select_recieve_comboBox->addItem("Litecoin");
        ui->select_recieve_comboBox->addItem("Dogecoin");
        ui->select_recieve_comboBox->addItem("Bitcoin Cash");
       // ui->select_recieve_comboBox->addItem("Ethereum");

        ui->available_amount_exchange_label->setText("");

    }
    else if(arg1=="Bitcoin")
    {
        ui->unit_available_amoun_label->setText("btc");
        ui->unit_exchange_amount_label->setText("btc");

        ui->select_recieve_comboBox->clear();
        //ui->select_recieve_comboBox->addItem("Select");
        ui->select_recieve_comboBox->addItem("Litecoin");
        ui->select_recieve_comboBox->addItem("Dogecoin");
        ui->select_recieve_comboBox->addItem("Bitcoin Cash");
       // ui->select_recieve_comboBox->addItem("Ethereum");

        ui->available_amount_exchange_label->setText(Cbitcoin.getbalance());



    }
    else if(arg1=="Litecoin")
    {
        ui->unit_available_amoun_label->setText("ltc");
        ui->unit_exchange_amount_label->setText("ltc");

        ui->select_recieve_comboBox->clear();
        //ui->select_recieve_comboBox->addItem("Select");
        ui->select_recieve_comboBox->addItem("Bitcoin");
        ui->select_recieve_comboBox->addItem("Dogecoin");
        ui->select_recieve_comboBox->addItem("Bitcoin Cash");
       // ui->select_recieve_comboBox->addItem("Ethereum");

        ui->available_amount_exchange_label->setText(Clitecoin.getbalance());

    }
    else if(arg1=="Dogecoin")
    {
        ui->unit_available_amoun_label->setText("doge");
        ui->unit_exchange_amount_label->setText("doge");

        ui->select_recieve_comboBox->clear();
        //ui->select_recieve_comboBox->addItem("Select");
        ui->select_recieve_comboBox->addItem("Bitcoin");
        ui->select_recieve_comboBox->addItem("Litecoin");
        ui->select_recieve_comboBox->addItem("Bitcoin Cash");
       // ui->select_recieve_comboBox->addItem("Ethereum");

        ui->available_amount_exchange_label->setText(Cdogecoin.getbalance());

    }
    else if(arg1=="Bitcoin Cash")
    {
        ui->unit_available_amoun_label->setText("bch");
        ui->unit_exchange_amount_label->setText("bch");

        ui->select_recieve_comboBox->clear();
        //ui->select_recieve_comboBox->addItem("Select");
        ui->select_recieve_comboBox->addItem("Bitcoin");
        ui->select_recieve_comboBox->addItem("Litecoin");
        ui->select_recieve_comboBox->addItem("Dogecoin");
       // ui->select_recieve_comboBox->addItem("Ethereum");

        ui->available_amount_exchange_label->setText(Cbitcoincash.getbalance());

    }
    else if(arg1=="Ethereum")
    {
        ui->unit_available_amoun_label->setText("eth");
        ui->unit_exchange_amount_label->setText("eth");

        ui->select_recieve_comboBox->clear();
        //ui->select_recieve_comboBox->addItem("Select");
        ui->select_recieve_comboBox->addItem("Bitcoin");
        ui->select_recieve_comboBox->addItem("Litecoin");
        ui->select_recieve_comboBox->addItem("Dogecoin");
        ui->select_recieve_comboBox->addItem("Bitcoin Cash");

        ui->available_amount_exchange_label->setText(Cbitcoincash.getbalance());

    }

}

void MainWindow::on_select_recieve_comboBox_activated(const QString &arg1)
{
    if(arg1=="Select")
    {
        ui->unit_available_amount_recieve_label->setText("   ");
        ui->unit_recieve_amount_label->setText("   ");

    }
    else if(arg1=="Bitcoin")
    {
        ui->unit_available_amount_recieve_label->setText("btc");
        ui->unit_recieve_amount_label->setText("btc");

        ui->available_amount_recieve_label->setText(Cbitcoin.getbalance());

    }
    else if(arg1=="Litecoin")
    {
        ui->unit_available_amount_recieve_label->setText("ltc");
        ui->unit_recieve_amount_label->setText("ltc");
        ui->available_amount_recieve_label->setText(Clitecoin.getbalance());

    }
    else if(arg1=="Dogecoin")
    {
        ui->unit_available_amount_recieve_label->setText("doge");
        ui->unit_recieve_amount_label->setText("doge");
        ui->available_amount_recieve_label->setText(Cdogecoin.getbalance());

    }
    else if(arg1=="Bitcoin Cash")
    {
        ui->unit_available_amount_recieve_label->setText("btc");
        ui->unit_recieve_amount_label->setText("btc");
        ui->available_amount_recieve_label->setText(Cbitcoincash.getbalance());

    }
    else if(arg1=="Ethereum")
    {
        ui->unit_available_amount_recieve_label->setText("eth");
        ui->unit_recieve_amount_label->setText("eth");
        ui->available_amount_recieve_label->setText(Cdogecoin.getbalance());

    }

}

void MainWindow::on_bitcoin_pushButton_clicked()
{
    ui->bitcoin_wallet_frame->show();
    ui->litecoin_wallet_frame->hide();
    ui->dogecoin_wallet_frame->hide();
    ui->bitcoin_cash_wallet_frame->hide();
    ui->ethereum_wallet_frame->hide();

    ui->available_amount_bitcoin_label->setText(Cbitcoin.getbalance());
    ui->unconfirmed_amount_bitcoin_label->setText(Cbitcoin.unconfirmedbalance());


    QStandardItemModel *model = new QStandardItemModel(0,1,this); //2 Rows and 3 Columns

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Account")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Amount")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Time")));


    ui->bicoin_tableView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->bicoin_tableView->setStyleSheet("background:transparent;color:red;");
    ui->bicoin_tableView->setModel(model);

    //QStandardItem *firstRow = new QStandardItem(QString("ColumnVVBCBCHGCHGCGHCGHGHCHGHGalue"));

    //model->setItem(0,0,firstRow);
    //model->

    //ui->bicoin_tableView->



    Cbitcoin.listtransaction();

    for(int i = 0; i<Cbitcoin.listtrans.size(); i++)
    {
        int a =0;
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(Cbitcoin.listtrans[i].account));
        firstRow->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a,firstRow);

        QStandardItem *firstRow1 = new QStandardItem(QString("%1").arg(Cbitcoin.listtrans[i].amount));
        firstRow1->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+1,firstRow1);

        int unixTime = Cbitcoin.listtrans[i].time;
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        //qDebug() << timestamp.toString(Qt::SystemLocaleShortDate);

        QStandardItem *firstRow2 = new QStandardItem(timestamp.toString(Qt::SystemLocaleShortDate));
        firstRow2->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+2,firstRow2);

        ui->bicoin_tableView->resizeColumnsToContents();

        //        std::cout<< "Account : " << Cbitcoin.listtrans[i].account <<std ::endl;
        //        std::cout<< "Amount : " << Cbitcoin.listtrans[i].amount <<std ::endl;
        //        std::cout<< "Time : " << Cbitcoin.listtrans[i].time <<std ::endl;
    }


}

void MainWindow::on_litecoin_pushButton_clicked()
{
    ui->bitcoin_wallet_frame->hide();
    ui->litecoin_wallet_frame->show();
    ui->dogecoin_wallet_frame->hide();
    ui->bitcoin_cash_wallet_frame->hide();
    ui->ethereum_wallet_frame->hide();

    ui->available_amount_litecoin_label->setText(Clitecoin.getbalance());
    ui->unconfirmed_amount_litecoin_label->setText(Clitecoin.unconfirmedbalance());


    QStandardItemModel *model = new QStandardItemModel(0,1,this); //2 Rows and 3 Columns
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Account")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Amount")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Time")));

    ui->litecoin_tableView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->litecoin_tableView->setModel(model);

    //QStandardItem *firstRow = new QStandardItem(QString("ColumnVVBCBCHGCHGCGHCGHGHCHGHGalue"));

    //model->setItem(0,0,firstRow);
    //model->

    //ui->bicoin_tableView->



    Clitecoin.listtransaction();

    for(int i = 0; i<Clitecoin.listtrans.size(); i++)
    {
        int a =0;
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(Clitecoin.listtrans[i].account));
        firstRow->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a,firstRow);

        QStandardItem *firstRow1 = new QStandardItem(QString("%1").arg(Clitecoin.listtrans[i].amount));
        firstRow1->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+1,firstRow1);

        int unixTime = Clitecoin.listtrans[i].time;
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        //qDebug() << timestamp.toString(Qt::SystemLocaleShortDate);

        QStandardItem *firstRow2 = new QStandardItem(timestamp.toString(Qt::SystemLocaleShortDate));
        firstRow2->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+2,firstRow2);

        ui->litecoin_tableView->resizeColumnsToContents();


        //        std::cout<< "Account : " << Cbitcoin.listtrans[i].account <<std ::endl;
        //        std::cout<< "Amount : " << Cbitcoin.listtrans[i].amount <<std ::endl;
        //        std::cout<< "Time : " << Cbitcoin.listtrans[i].time <<std ::endl;
    }
}

void MainWindow::on_dogecoin_pushButton_clicked()
{
    ui->bitcoin_wallet_frame->hide();
    ui->litecoin_wallet_frame->hide();
    ui->dogecoin_wallet_frame->show();
    ui->bitcoin_cash_wallet_frame->hide();
    ui->ethereum_wallet_frame->hide();

    ui->available_amount_dogecoin_label->setText(Cdogecoin.getbalance());
    ui->unconfirmed_amount_dogecoin_label->setText(Cdogecoin.unconfirmedbalance());

    QStandardItemModel *model = new QStandardItemModel(0,1,this); //2 Rows and 3 Columns


    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Account")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Amount")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Time")));



    ui->dogecoin_tableView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->dogecoin_tableView->setModel(model);







    //QStandardItem *firstRow = new QStandardItem(QString("ColumnVVBCBCHGCHGCGHCGHGHCHGHGalue"));

    //model->setItem(0,0,firstRow);
    //model->

    //ui->bicoin_tableView->





    Cdogecoin.listtransaction();

    for(int i = 0; i<Cdogecoin.listtrans.size(); i++)
    {
        int a =0;
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(Cdogecoin.listtrans[i].account));
        firstRow->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a,firstRow);



        QStandardItem *firstRow1 = new QStandardItem(QString("%1").arg(Cdogecoin.listtrans[i].amount));
        firstRow1->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+1,firstRow1);

        int unixTime = Cdogecoin.listtrans[i].time;
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        //qDebug() << timestamp.toString(Qt::SystemLocaleShortDate);

        QStandardItem *firstRow2 = new QStandardItem(timestamp.toString(Qt::SystemLocaleShortDate));
        firstRow2->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+2,firstRow2);


        ui->dogecoin_tableView->resizeColumnsToContents();
        //        std::cout<< "Account : " << Cbitcoin.listtrans[i].account <<std ::endl;
        //        std::cout<< "Amount : " << Cbitcoin.listtrans[i].amount <<std ::endl;
        //        std::cout<< "Time : " << Cbitcoin.listtrans[i].time <<std ::endl;
    }

}

void MainWindow::on_exchange_pushButton_2_clicked()
{
    ui->select_exchange_comboBox->currentText();

    qDebug()<<Cbitcoin.defaultaddress();
    qDebug()<<Clitecoin.defaultaddress();
    qDebug()<<Cdogecoin.defaultaddress();

    QString a = ui->unit_exchange_amount_label->text();
    QString b = ui->unit_recieve_amount_label->text();


    QString pair = a+"_"+b;

    postconnection(pair);


}

void MainWindow::postconnection(QString pair)
{
    qDebug()<<pair;

    //    QString v;
    //    v="btc_ltc";
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    QUrl url("https://shapeshift.io/sendamount");
    QNetworkRequest request(url);

    //request.setHeader(QNetworkRequest::ContentTypeHeader, "application/Json");

    //request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QUrl params;
    params.addQueryItem("amount",QString::number(ui->doubleSpinBox->value()));
    params.addQueryItem("withdrawal",Cbitcoin.defaultaddress());
    params.addQueryItem("pair", pair);
    params.addQueryItem("returnAddress", Cbitcoin.defaultaddress());
    // etc

    QObject::connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(replyfinished(QNetworkReply *)));

    manager->post(request, params.encodedQuery());

}

void MainWindow::replyfinished(QNetworkReply *reply)
{
    int i;
    QByteArray bytes = reply->readAll(); // bytes
    qDebug()<<bytes;

    //    for(i=0;i<=bytes.size();i++)
    //        qDebug() << bytes.at(i);

}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{

    //if()

    QString pair1;
    QString amount;
    float exchange_amount;

    QString a = ui->unit_exchange_amount_label->text();
    QString b = ui->unit_recieve_amount_label->text();


    pair1 = a+"_"+b;

    rate(pair1);
    if(arg1 == 0){
        exchange_amount = 0;

    }else{

         exchange_amount = (arg1) * exchange_rate;
    }

    std::cout<<"exchange_amount : "<<exchange_amount<<std::endl;

    amount = QString::number(exchange_amount);


    ui->recieve_amount_lineEdit->setText(amount);

    if(arg1<minimum)
    {
        ui->error_lineEdit->setText("Exchange amount is invalid. Please incraese exchange amount.");
        ui->exchange_pushButton_2->setDisabled(true);

    }
    else if(arg1>limit)
    {
        ui->error_lineEdit->setText("Exchange amount is invalid. Please decrease exchange amount.");
        ui->exchange_pushButton_2->setDisabled(true);

    }
    else
    {
        ui->error_lineEdit->setText("");
        ui->exchange_pushButton_2->setDisabled(false);
    }


}

void MainWindow::rate(QString pair)
{
    qDebug()<<pair;

    //    QString v;
    //    v="btc_ltc";
    network1 = new QNetworkAccessManager(this);

    network1->get(QNetworkRequest(QUrl("https://shapeshift.io/marketinfo/"+pair)));

    connect(network1, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(bitcoinlitecoinrate(QNetworkReply*)));

}

void MainWindow::bitcoinlitecoinrate(QNetworkReply *pReply)
{
    QString b;
    QByteArray data=pReply->readAll();

    qDebug()<<data;
    QJson::Parser parser;
    bool ok;
    QVariantMap result = parser.parse (data, &ok).toMap();
    if (!ok) {
        qFatal("An error occured during parsing");
        exit (1);
    }
    qDebug() << "rate:" << result["rate"].toString();
    b = result["rate"].toString();
    exchange_rate = b.toDouble();

    limit = (result["limit"].toString()).toDouble();

    minerfee = (result["minerFee"].toString()).toDouble();

    minimum = (result["min"].toString()).toDouble();
    std::cout<<"minimum  :"<<minimum<<std::endl;

    std::cout<<"exchange_rate  :"<<exchange_rate<<std::endl;
}


void MainWindow::on_send_bitcoin_pushButton_clicked()
{
    SendBitecoin.show();
    SendBitecoin.setdefault();

}

void MainWindow::on_recieve_bitcoin_pushButton_clicked()
{

    RecieveBitcoin.show();
    //RecieveBitcoin.genCode();

    // RecieveBitcoin.setaddress();
}

void MainWindow::on_send_litecoin_pushButton_clicked()
{
    SendLitecoin.show();
    SendLitecoin.setdefault();

}

void MainWindow::on_recieve_litecoin_pushButton_clicked()
{
    RecieveLitecoin.show();
    RecieveLitecoin.setaddress();
}

void MainWindow::on_send_dogecoin_pushButton_clicked()
{
    SendDogecoin.show();
    SendDogecoin.setdefault();

}

void MainWindow::on_recieve_docecoin_pushButton_clicked()
{
    RecieveDogecoin.show();
    RecieveDogecoin.setaddress();
}

void MainWindow::on_bitcoin_cash_pushButton_clicked()
{
    ui->bitcoin_wallet_frame->hide();
    ui->litecoin_wallet_frame->hide();
    ui->dogecoin_wallet_frame->hide();
    ui->bitcoin_cash_wallet_frame->show();
    ui->ethereum_wallet_frame->hide();

    ui->available_amount_bitcoin_cash_label->setText(Cbitcoincash.getbalance());
    ui->unconfirmed_amount_bitcoin_cash_label->setText(Cbitcoincash.unconfirmedbalance());

    QStandardItemModel *model = new QStandardItemModel(0,1,this); //2 Rows and 3 Columns


    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Account")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Amount")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Time")));



    ui->bicoin_cash_tableView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->bicoin_cash_tableView->setModel(model);





    Cbitcoincash.listtransaction();

    for(int i = 0; i<Cbitcoincash.listtrans.size(); i++)
    {
        int a =0;
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(Cbitcoincash.listtrans[i].account));
        firstRow->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a,firstRow);



        QStandardItem *firstRow1 = new QStandardItem(QString("%1").arg(Cbitcoincash.listtrans[i].amount));
        firstRow1->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+1,firstRow1);

        int unixTime = Cbitcoincash.listtrans[i].time;
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        //qDebug() << timestamp.toString(Qt::SystemLocaleShortDate);

        QStandardItem *firstRow2 = new QStandardItem(timestamp.toString(Qt::SystemLocaleShortDate));
        firstRow2->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+2,firstRow2);


        ui->bicoin_cash_tableView->resizeColumnsToContents();
        //        std::cout<< "Account : " << Cbitcoin.listtrans[i].account <<std ::endl;
        //        std::cout<< "Amount : " << Cbitcoin.listtrans[i].amount <<std ::endl;
        //        std::cout<< "Time : " << Cbitcoin.listtrans[i].time <<std ::endl;
    }

}

void MainWindow::on_ethereum_pushButton_clicked()
{
    ui->bitcoin_wallet_frame->hide();
    ui->litecoin_wallet_frame->hide();
    ui->dogecoin_wallet_frame->hide();
    ui->bitcoin_cash_wallet_frame->hide();
    ui->ethereum_wallet_frame->show();

    ui->available_amount_dogecoin_label->setText(Cdogecoin.getbalance());
    ui->unconfirmed_amount_dogecoin_label->setText(Cdogecoin.unconfirmedbalance());

    QStandardItemModel *model = new QStandardItemModel(0,1,this); //2 Rows and 3 Columns


    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Account")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Amount")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Time")));



    ui->dogecoin_tableView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->dogecoin_tableView->setModel(model);







    //QStandardItem *firstRow = new QStandardItem(QString("ColumnVVBCBCHGCHGCGHCGHGHCHGHGalue"));

    //model->setItem(0,0,firstRow);
    //model->

    //ui->bicoin_tableView->





    Cdogecoin.listtransaction();

    for(int i = 0; i<Cdogecoin.listtrans.size(); i++)
    {
        int a =0;
        QStandardItem *firstRow = new QStandardItem(QString::fromStdString(Cdogecoin.listtrans[i].account));
        firstRow->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a,firstRow);



        QStandardItem *firstRow1 = new QStandardItem(QString("%1").arg(Cdogecoin.listtrans[i].amount));
        firstRow1->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+1,firstRow1);

        int unixTime = Cdogecoin.listtrans[i].time;
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        //qDebug() << timestamp.toString(Qt::SystemLocaleShortDate);

        QStandardItem *firstRow2 = new QStandardItem(timestamp.toString(Qt::SystemLocaleShortDate));
        firstRow2->setData(Qt::AlignHCenter, Qt::TextAlignmentRole);
        model->setItem(i,a+2,firstRow2);


        ui->dogecoin_tableView->resizeColumnsToContents();
        //        std::cout<< "Account : " << Cbitcoin.listtrans[i].account <<std ::endl;
        //        std::cout<< "Amount : " << Cbitcoin.listtrans[i].amount <<std ::endl;
        //        std::cout<< "Time : " << Cbitcoin.listtrans[i].time <<std ::endl;
    }
}

void MainWindow::on_send_bitcoin_cash_pushButton_clicked()
{
    SendBitcoincash.show();
    SendBitcoincash.setdefault();



}

void MainWindow::on_recieve_bitcoin_cash_pushButton_clicked()
{
    RecieveBitcoincash.show();
    RecieveBitcoincash.genCode();

}

void MainWindow::on_send_ethereum_pushButton_clicked()
{

}

void MainWindow::on_recieve_ethereum_pushButton_clicked()
{

}

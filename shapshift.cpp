#include "shapshift.h"
#include <parser.h>
#include <QObject>

//shapshift::shapshift()
//{

////    network1 = new QNetworkAccessManager(this);

////    network1->get(QNetworkRequest(QUrl("https://shapeshift.io/btc_ltc")));

////    connect(network1, SIGNAL(finished(QNetworkReply*)),
////            this, SLOT(bitcoinlitecoinrate(QNetworkReply*)));




//}

//shapshift::~shapshift()
//{

//}

void shapshift::rate()
{
    network1 = new QNetworkAccessManager(this);

    network1->get(QNetworkRequest(QUrl("https://shapeshift.io/btc_ltc")));

    connect(network1, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(bitcoinlitecoinrate(QNetworkReply*)));

}


void shapshift::bitcoinlitecoinrate(QNetworkReply *pReply)
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
    //QVariantMap nestedMap = result["data"].toMap();
    //qDebug() << "available_balance:" << nestedMap["available_balance"].toString();
    QVariant a = result["rate"];
    b = a.toString();

    qDebug()<<"rate"<<b;
    //ui->balancelabel->setText(b);
}

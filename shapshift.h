#ifndef SHAPSHIFT_H
#define SHAPSHIFT_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QByteRef>
#include <QObject>
#include <QDialog>

class shapshift :public QObject
{
    Q_OBJECT
public:
    //explicit Downloader(QObject *parent = 0);

    //shapshift();
   // ~shapshift();


    QNetworkAccessManager *network1;

    void rate();

private slots:

    void bitcoinlitecoinrate(QNetworkReply *pReply);


};

#endif // SHAPSHIFT_H

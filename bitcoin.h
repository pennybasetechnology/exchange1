#ifndef BITCOIN_H
#define BITCOIN_H

#include "conn.cpp"
#include <QString>
#include <bits/stl_vector.h>
#include <bitcoinapi/types.h>
#include <iostream>
#include <string>

class bitcoin
{
public:
    bitcoin();

    //transactioninfo_t trans;

     std::vector<transactioninfo_t> listtrans;

    MyFixture Connbitcoin;
    QString getbalance();
    QString unconfirmedbalance();
    QString listtransaction();
    QString defaultaddress();
    QString validateaddress(QString address);
    QString sendtoaddress(QString address,double amount);


};

#endif // BITCOIN_H

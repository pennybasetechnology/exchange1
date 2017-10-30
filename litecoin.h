#ifndef LITECOIN_H
#define LITECOIN_H

//#include "conn.cpp"
#include <QString>
#include <bitcoinapi/bitcoinapi.h>

struct LitecoinFixture {

    std::string username;
    std::string password;
    std::string address;
    int port;

    BitcoinAPI btc;

     LitecoinFixture()
     : username("test"),
       password("test123"),
       address("162.213.252.66"),
       port(7334),
       btc(username, password, address, port)
     { }
     ~LitecoinFixture() { }
};
class litecoin
{
public:
    litecoin();

    std::vector<transactioninfo_t> listtrans;

    LitecoinFixture ConnLitecoin;
    QString getbalance();
    QString unconfirmedbalance();
    QString defaultaddress();
    QString listtransaction();
    QString validateaddress(QString address);
    QString sendtoaddress(QString address,double amount);

};

#endif // LITECOIN_H

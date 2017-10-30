#ifndef DOGECOIN_H
#define DOGECOIN_H
//#include "conn.cpp"
#include <QString>
#include <bitcoinapi/bitcoinapi.h>

struct DogecoinFixture {

    std::string username;
    std::string password;
    std::string address;
    int port;

    BitcoinAPI btc;

     DogecoinFixture()
     : username("test"),
       password("test123"),
       address("162.213.252.66"),
       port(9334),
       btc(username, password, address, port)
     { }
     ~DogecoinFixture() { }
};

class dogecoin
{
public:
    dogecoin();

    std::vector<transactioninfo_t> listtrans;
    QString listtransaction();
    DogecoinFixture ConnDogecoin;
    QString getbalance();
    QString unconfirmedbalance();
    QString defaultaddress();
    QString validateaddress(QString address);
    QString sendtoaddress(QString address,double amount);

};

#endif // DOGECOIN_H

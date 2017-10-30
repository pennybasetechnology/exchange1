#ifndef BITCOINCASH_H
#define BITCOINCASH_H

#include <QString>
#include <bitcoinapi/bitcoinapi.h>

struct BitcoincashFixture {

    std::string username;
    std::string password;
    std::string address;
    int port;

    BitcoinAPI btc;

     BitcoincashFixture()
     : username("test"),
       password("test123"),
       address("162.213.252.66"),
       port(18336),
       btc(username, password, address, port)
     { }
     ~BitcoincashFixture() { }
};

class bitcoincash
{
public:
    bitcoincash();

    std::vector<transactioninfo_t> listtrans;
    QString listtransaction();
    BitcoincashFixture ConnBitcoincash;
    QString getbalance();
    QString unconfirmedbalance();
    QString defaultaddress();
    QString validateaddress(QString address);
    QString sendtoaddress(QString address,double amount);

};

#endif // BITCOINCASH_H

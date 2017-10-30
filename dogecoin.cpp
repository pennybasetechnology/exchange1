#include "dogecoin.h"
#include "bitcoinapi/exception.h"
#include "iostream"

dogecoin::dogecoin()
{
}



QString dogecoin::getbalance()
{
    QString a;
    try{
           a = QString("%1").arg(ConnDogecoin.btc.getbalance());
      }
       catch(BitcoinException e)
        {
            std::cerr << e.getMessage() << std::endl;

            a = "Not Connected";
            return a;
        }

    return a;
}

QString dogecoin::unconfirmedbalance()
{
    QString a;
    try{
           a = QString("%1").arg(ConnDogecoin.btc.getunconfirmedbalance());
      }
       catch(BitcoinException e)
        {
            std::cerr << e.getMessage() << std::endl;

            a = "Not Connected";
            return a;
        }

    return a;
}

QString dogecoin::defaultaddress()
{
    QString a;
    try{

        std::string c = ConnDogecoin.btc.getaccountaddress("myaccount");
//       std::vector<transactioninfo_t>::iterator v = listtrans.begin();
//           while( v != listtrans.end()) {
//               std::cout << "value of v = " << v << std::endl;
//              v++;
//           }

           //a = QString("%1").arg(Connbitcoin.btc.getbalance());

        a = QString::fromStdString(c);;
      }
       catch(BitcoinException e)
        {
            std::cerr << e.getMessage() << std::endl;

            a = "Not Connected";
            return a;
        }

    return a;

}

QString dogecoin::validateaddress(QString address)
{
    QString a;
    try{
        std::string b = address.toStdString();

        validateaddress_t c = ConnDogecoin.btc.validateaddress(b);

        a = QString::number(c.isvalid);
      }
       catch(BitcoinException e)
        {
            std::cerr << e.getMessage() << std::endl;

            a = "Not Connected";
            return a;
        }

    return a;

}


QString dogecoin::sendtoaddress(QString address,double amount)
{
    QString a;
    try{
        std::string b = address.toStdString();

        std::string c = ConnDogecoin.btc.sendtoaddress(b,amount);

        a = QString::fromStdString(c);;
      }
       catch(BitcoinException e)
        {
            std::cerr << e.getMessage() << std::endl;

            a = "Not Connected";
            return a;
        }

    return a;

}

QString dogecoin::listtransaction()
{
    QString a;
    try{

        listtrans = ConnDogecoin.btc.listtransactions();
        //listtrans.push_back(56);
        //listtrans.push_back(65);

//        for(int i = 0; i<listtrans.size(); i++)
//        {
//            std::cout<< "Account : " << listtrans[i].account <<std ::endl;
//            std::cout<< "Amount : " << listtrans[i].amount <<std ::endl;
//            std::cout<< "Time : " << listtrans[i].time <<std ::endl;
//        }

//       std::vector<transactioninfo_t>::iterator it;
//           for(it = listtrans.begin(); it != listtrans.end(); ++it) {
//               std::cout << "value of v = " << it.amount << std::endl;
//              it++;
//           }

           a = QString("%1").arg(ConnDogecoin.btc.getbalance());
      }
       catch(BitcoinException e)
        {
            std::cerr << e.getMessage() << std::endl;

            listtrans.clear();
            return a;
        }

    return a;
}


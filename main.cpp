#include <QtGui/QApplication>
#include "mainwindow.h"
//#include "libwebthree/WebThree.h"
#include <bitcoinapi/bitcoinapi.h>
#include <iostream>
#include <jsonrpccpp/client.h>
#include <jsonrpccpp/client/connectors/httpclient.h>
//#include </bitcoin/bitcoin.hpp>
//#include </bitcoin/client.hpp>

using namespace jsonrpc;
using namespace std;

//using namespace bc;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);






//    HttpClient client("localhost:18332");
//        Client c(client);

//        Json::Value params;
//        params["name"] = "Peter";

//        try
//        {
          //  cout << c.CallMethod("sayHello", params) << endl;
//        }
//        catch (JsonRpcException& e)
//        {
//            cerr << e.what() << endl;
//        }



             MainWindow w;


    a.setStyleSheet("QMainWindow{background-image: url(:/background/gradient-wallpaper-1.jpg);}QDialog{background-image: url(:/background/gradient-wallpaper.jpg);}");
    //a.setStyleSheet("");

    w.show();





    
    return a.exec();
}

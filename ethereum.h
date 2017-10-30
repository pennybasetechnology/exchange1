#ifndef ETHEREUM_H
#define ETHEREUM_H
#include <stdio.h>
#include <iostream>
#include "bitcoinapi/types.h"
#include "bitcoinapi/exception.h"

namespace jsonrpc { class HttpClient; class Client; }

class ethereum
{

private:
    jsonrpc::HttpClient * httpClient;
    jsonrpc::Client * client;

public:
    /* === Constructor and Destructor === */
    ethereum();//const std::string& user, const std::string& password, const std::string& host, const std::string& port);
    ~ethereum();
};



#endif // ETHEREUM_H

#include "ethereum.h"
#include <string>
#include <stdexcept>
#include "iostream"
#include "string.h"

#include <jsonrpccpp/client.h>
#include <jsonrpccpp/client/connectors/httpclient.h>

using jsonrpc::Client;
using jsonrpc::JSONRPC_CLIENT_V1;

using jsonrpc::HttpClient;
using jsonrpc::JsonRpcException;

using Json::Value;
using Json::ValueIterator;

using std::map;
using std::string;
using std::vector;


ethereum::ethereum(){

    }/*const string& user, const string& password, const string& host, const string& port)
    : httpClient(new HttpClient("http://" + user + ":" + password + "@" + host + ":" + port)),
  client(new Client(*httpClient, JSONRPC_CLIENT_V1))
{
    httpClient->SetTimeout(50000);
}*/


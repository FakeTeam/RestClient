#include "connection.h"
#include "restclient.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include "json/json.h"

int main() {
  RestClient::Connection *conn = new RestClient::Connection("https://github.com");
  std::string uri = "/";
  RestClient::Response resp = conn->get(uri);
  std::cout << resp.code << std::endl;
  std::cout << resp.body << std::endl;
  delete conn;
  return 0;
}
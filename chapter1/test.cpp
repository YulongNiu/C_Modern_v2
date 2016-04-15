#include <boost/asio.hpp>

int main(int argc, char *argv[])
{
  boost::asio::connect(basic_socket<Protocol, SocketService> &s, Iterator begin, Iterator end, ConnectCondition connect_condition, boost::system::error_code &ece);
  
  return 0;
}

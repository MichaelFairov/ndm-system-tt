#include "PingUtility.h"
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <IPv4 address>\n";
    return 1;
  }

  std::string ip = argv[1];
  PingUtility pinger;
  std::string mac = pinger.getMACFromPing(ip);

  if (!mac.empty()) {
    std::cout << "MAC address: " << mac << '\n';
  } else {
    std::cerr << "Failed to retrieve MAC address." << '\n';
    return 1;
  }

  return 0;
}

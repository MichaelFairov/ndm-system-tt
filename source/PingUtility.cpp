#include "PingUtility.h"
#include <array>
#include <cstdlib>
#include <iostream>
#include <sstream>

std::string executeCommand(const std::string &command) {
  std::array<char, 128> buffer;
  std::string result;
  FILE *pipe = popen(command.c_str(), "r");
  if (!pipe)
    return "";
  while (fgets(buffer.data(), buffer.size(), pipe) != nullptr) {
    result += buffer.data();
  }
  pclose(pipe);
  return result;
}

std::string PingUtility::getMACFromPing(const std::string &ip) {
  std::string pingCmd = "ping -c 1 " + ip + " > /dev/null";
  std::system(pingCmd.c_str());

  std::string arpCmd = "ip neigh show " + ip;
  std::string arpOutput = executeCommand(arpCmd);

  std::istringstream iss(arpOutput);
  std::string word;
  while (iss >> word) {
    if (word.find(":") != std::string::npos && word.length() == 17) {
      return word;
    }
  }
  return "";
}

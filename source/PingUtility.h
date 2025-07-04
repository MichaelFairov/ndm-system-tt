#ifndef PINGUTILITY_H
#define PINGUTILITY_H

#include <string>

class PingUtility {
public:
  std::string getMACFromPing(const std::string &ip);
};

#endif

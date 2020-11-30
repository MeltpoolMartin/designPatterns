#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <iostream>

class Light {
 public:
  void lightOn() { std::cout << "Light ON" << std::endl; }
  void lightOff() { std::cout << "Light OFF" << std::endl; }
};

#endif
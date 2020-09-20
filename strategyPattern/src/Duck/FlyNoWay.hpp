#ifndef FLY_NO_WAY_HPP
#define FLY_NO_WAY_HPP

#include <iostream>

#include "IFlyBehavior.hpp"

class FlyNoWay : public IFlyBehavior {
 public:
  void fly() override { std::cout << "I can not fly" << std::endl; };
};

#endif
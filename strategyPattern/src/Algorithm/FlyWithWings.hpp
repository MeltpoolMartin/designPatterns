#ifndef FLY_WITH_WINGS_HPP
#define FLY_WITH_WINGS_HPP

#include <iostream>

#include "IFlyBehavior.hpp"

class FlyWithWings : public IFlyBehavior {
 public:
  void fly() override { std::cout << "I'm flying with wings" << std::endl; }
};

#endif
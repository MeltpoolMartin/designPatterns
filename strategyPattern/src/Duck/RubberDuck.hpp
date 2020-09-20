#ifndef RUBBER_DUCK_HPP
#define RUBBER_DUCK_HPP

#include "Duck.hpp"
#include "FlyNoWay.hpp"

class RubberDuck : public Duck {
 public:
  // Default behavior - a rubber duck can not fly by default
  RubberDuck() : Duck(std::make_unique<FlyNoWay>()){};
  void display() { std::cout << "I'm a rubber duck" << std::endl; }
};

#endif
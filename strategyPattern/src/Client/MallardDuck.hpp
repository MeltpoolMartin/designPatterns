#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "FlyWithWings.hpp"

class MallardDuck : public Duck {
 public:
  // Default behavior - a mallard duck can fly by default
  MallardDuck() : Duck(std::make_unique<FlyWithWings>()) {}
  void display() override { std::cout << "I'm a mallard duck" << std::endl; }
};

#endif
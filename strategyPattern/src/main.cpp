#include <iostream>

#include "MallardDuck.hpp"
#include "RubberDuck.hpp"

int main() {
  MallardDuck mallardDuck;
  RubberDuck rubberDuck;
  mallardDuck.display();
  mallardDuck.swim();
  mallardDuck.performFly();
  std::cout << "I'm a mallard duck, but now I'm forgetting how to fly"
            << std::endl;
  mallardDuck.setFlyBehavior(std::make_unique<FlyNoWay>());
  mallardDuck.performFly();
  rubberDuck.display();
  rubberDuck.swim();
  rubberDuck.performFly();
  std::cout << "I'm a rubber duck, but now I'm learning to fly" << std::endl;
  rubberDuck.setFlyBehavior(std::make_unique<FlyWithWings>());
  rubberDuck.performFly();
  return 0;
}
#ifndef DUCK_HPP
#define DUCK_HPP
#include <memory>

#include "IFlyBehavior.hpp"

class Duck {
 protected:
  std::unique_ptr<IFlyBehavior> m_pFlyBehavior;

 public:
  // Default behavior - a generic duck doesn't know by default if it can fly or
  // not - fly behavior given through input parameter
  Duck(std::unique_ptr<IFlyBehavior> flyBehavior)
      : m_pFlyBehavior(std::move(flyBehavior)){};
  void swim() { std::cout << "Duck is swimming" << std::endl; };
  void performFly() { m_pFlyBehavior->fly(); };
  void setFlyBehavior(std::unique_ptr<IFlyBehavior> pFlyBehavior) {
    m_pFlyBehavior = std::move(pFlyBehavior);
  };
  virtual void display() { std::cout << "I'm a duck" << std::endl; };
};

#endif
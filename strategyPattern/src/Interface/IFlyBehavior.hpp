#ifndef IFLY_BEHAVIOR_HPP
#define IFLY_BEHAVIOR_HPP

class IFlyBehavior {
 public:
  virtual ~IFlyBehavior(){};
  virtual void fly() = 0;
};

#endif
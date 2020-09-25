#ifndef I_OBSERVER_HPP
#define I_OBSERVER_HPP

class IObserver : public std::enable_shared_from_this<IObserver> {
 public:
  virtual ~IObserver(){};
  virtual void update(const float temperature, const int humidity) = 0;
};

#endif
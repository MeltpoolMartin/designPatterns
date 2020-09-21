#ifndef I_OBSERVER_HPP
#define I_OBSERVER_HPP

class IObserver {
 public:
  virtual ~IObserver(){};
  virtual void update(const float& temperatureOut, const int& humidityOut) = 0;
};

#endif
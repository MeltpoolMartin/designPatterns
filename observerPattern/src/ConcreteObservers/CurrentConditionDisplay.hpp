#ifndef CURRENT_CONDITION_DISPLAY_HPP
#define CURRENT_CONDITION_DISPLAY_HPP

#include <iostream>

#include "IObserver.hpp"
#include "ISubject.hpp"

class CurrentConditionDisplay : public IObserver {
 private:
  float m_fTemperature;
  int m_iHumidity;

 public:
  CurrentConditionDisplay(){};
  void update(const float temperature, const int humidity) override {
    m_fTemperature = temperature;
    m_iHumidity = humidity;
    display();
  };
  void subscribe(const std::shared_ptr<ISubject>& subject) {
    subject->registerObserver(shared_from_this());
  }
  void display() {
    std::cout << "Current temperature: " << m_fTemperature << "°C" << std::endl;
    std::cout << "Current rel. humidity: " << m_iHumidity << "%" << std::endl;
  };
};

#endif
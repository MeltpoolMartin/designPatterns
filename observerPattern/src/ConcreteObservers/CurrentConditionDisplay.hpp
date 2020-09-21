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
  CurrentConditionDisplay(ISubject* subject) {
    subject->registerObserver(this);
  };
  void update(const float& temperatureOut, const int& humidityOut) override {
    m_fTemperature = temperatureOut;
    m_iHumidity = humidityOut;
    display();
  };
  void display() {
    std::cout << "Current temperature: " << m_fTemperature << std::endl;
    std::cout << "Current humidity: " << m_iHumidity << std::endl;
  };
};

#endif
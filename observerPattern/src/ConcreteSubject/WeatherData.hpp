#ifndef WEATHER_DATE_HPP
#define WEATHER_DATE_HPP

#include <algorithm>
#include <iostream>
#include <vector>

#include "ISubject.hpp"

class WeatherData : public ISubject {
 private:
  std::vector<IObserver*> m_Observers;
  float m_fTemperature;
  int m_iHumidity;

 public:
  WeatherData() : m_Observers({}), m_fTemperature(0.0f), m_iHumidity(-1){};
  void registerObserver(IObserver* observer) override {
    std::cout << "Register " << observer << " as observer" << std::endl;
    m_Observers.push_back(observer);
  };
  void removeObserver(IObserver* observer) override {
    if (m_Observers.size() > 0) {
      std::cout << "Remove " << observer << " as observer" << std::endl;
      m_Observers.erase(
          std::find(m_Observers.begin(), m_Observers.end(), observer));
    };
  };
  void notifyObservers() override {
    std::cout << "Update weather data to all observers" << std::endl;
    for (auto& observer : m_Observers) {
      observer->update(m_fTemperature, m_iHumidity);
    };
  };
  void setMeasurements(const float temperature, const int humidity) {
    m_fTemperature = temperature;
    m_iHumidity = humidity;
    notifyObservers();
  }
};

#endif
#ifndef WEATHER_DATE_HPP
#define WEATHER_DATE_HPP

#include <algorithm>
#include <iostream>
#include <vector>

#include "ISubject.hpp"

class WeatherData : public ISubject {
 private:
  std::vector<std::weak_ptr<IObserver>> m_Observers;
  float m_fTemperature;
  int m_iHumidity;

 public:
  WeatherData() : m_Observers({}), m_fTemperature(0.0f), m_iHumidity(-1){};
  ~WeatherData() { std::cout << "Destructor WeatherData" << std::endl; }
  void registerObserver(const std::shared_ptr<IObserver>& observer) override {
    std::cout << "Register " << observer << " as observer" << std::endl;
    m_Observers.emplace_back(observer);
  };
  void removeObserver(const std::shared_ptr<IObserver>& observer) override {
    if (m_Observers.size() > 0) {
      std::cout << "Remove " << observer << " as observer" << std::endl;
      m_Observers.erase(std::remove_if(m_Observers.begin(), m_Observers.end(),
                                       [&observer](auto weakptr) {
                                         if (auto sptr = weakptr.lock()) {
                                           if (sptr == observer) {
                                             return true;
                                           }
                                         }
                                         return false;
                                       }));
    };
  };
  void notifyObservers() override {
    std::cout << "Update weather data to all observers" << std::endl;
    for (auto& observer : m_Observers) {
      auto shared_ptr = observer.lock();
      if (shared_ptr) {
        shared_ptr->update(m_fTemperature, m_iHumidity);
      }
    };
  };
  void setMeasurements(const float temperature, const int humidity) {
    m_fTemperature = temperature;
    m_iHumidity = humidity;
    notifyObservers();
  }
};

#endif
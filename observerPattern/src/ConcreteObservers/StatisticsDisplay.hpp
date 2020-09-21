#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

#include "IObserver.hpp"
#include "ISubject.hpp"

class StatisticsDisplay : public IObserver {
 private:
  std::vector<float> m_temperatures;
  std::vector<int> m_humidities;

 public:
  StatisticsDisplay(ISubject* subject) : m_temperatures({}), m_humidities({}) {
    subject->registerObserver(this);
  }
  void update(const float& temperature, const int& humidity) {
    m_temperatures.push_back(temperature);
    m_humidities.push_back(humidity);
    display();
  };
  void display() {
    auto meanTemperature =
        std::accumulate(m_temperatures.begin(), m_temperatures.end(), 0.0f) /
        m_temperatures.size();
    auto meanHumidity =
        std::accumulate(m_humidities.begin(), m_humidities.end(), 0.0f) /
        m_humidities.size();
    std::cout << "Average temperature: " << meanTemperature << "°C"
              << std::endl;
    std::cout << "Average rel. humidity: " << meanHumidity << "%" << std::endl;
  };
};
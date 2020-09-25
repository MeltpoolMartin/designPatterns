#include "CurrentConditionDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"

int main() {
  auto pWeatherData = std::make_shared<WeatherData>();
  auto pCurrentConditionDisplay = std::make_shared<CurrentConditionDisplay>();
  pCurrentConditionDisplay->subscribe(pWeatherData);
  auto pStaisticDisplay = std::make_shared<StatisticsDisplay>();
  pStaisticDisplay->subscribe(pWeatherData);
  pWeatherData->setMeasurements(20.0f, 60);
  pWeatherData->removeObserver(pCurrentConditionDisplay);
  pWeatherData->setMeasurements(36.0f, 20);

  return 0;
}
#include "CurrentConditionDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"

int main() {
  WeatherData *weatherData = new WeatherData();
  CurrentConditionDisplay *currentConditionDisplay =
      new CurrentConditionDisplay(weatherData);
  StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
  weatherData->setMeasurements(20.0f, 60);
  weatherData->setMeasurements(36.0f, 20);
  delete currentConditionDisplay;
  delete statisticsDisplay;
  delete weatherData;

  return 0;
}
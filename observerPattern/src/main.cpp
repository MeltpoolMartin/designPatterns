#include "CurrentConditionDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"

int main() {
  WeatherData *weatherData = new WeatherData();
  CurrentConditionDisplay currentConditionDisplay(weatherData);
  StatisticsDisplay statisticsDisplay(weatherData);
  weatherData->setMeasurements(20.0f, 60);
  weatherData->setMeasurements(36.0f, 20);
  delete weatherData;

  return 0;
}
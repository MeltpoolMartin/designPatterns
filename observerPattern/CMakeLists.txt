cmake_minimum_required(VERSION 3.18.2)

project(OberverPattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Subject   
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Observer   
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ConcreteObservers   
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ConcreteSubject   
)

add_executable(ObserverPattern
    src/main.cpp
    src/Subject/ISubject.hpp
    src/Observer/IObserver.hpp
    src/ConcreteObservers/CurrentConditionDisplay.hpp
    src/ConcreteObservers/StatisticsDisplay.hpp
    src/ConcreteSubject/WeatherData.hpp
)

cmake_minimum_required(VERSION 3.18.2)

project(StrategyPattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Client  
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Interface  
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Algorithm  
)

add_executable(StrategyPattern
    src/main.cpp
    src/Interface/IFlyBehavior.hpp
    src/Client/Duck.hpp
    src/Client/MallardDuck.hpp
    src/Client/RubberDuck.hpp
    src/Algorithm/FlyNoWay.hpp
    src/Algorithm/FlyWithWings.hpp
)

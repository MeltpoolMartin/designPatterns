cmake_minimum_required(VERSION 3.18.2)

project(StrategyPattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src/Duck")

add_executable(StrategyPattern
    src/main.cpp
    src/Duck/IFlyBehavior.hpp
    src/Duck/Duck.hpp
    src/Duck/MallardDuck.hpp
    src/Duck/RubberDuck.hpp
    src/Duck/FlyNoWay.hpp
    src/Duck/FlyWithWings.hpp
)

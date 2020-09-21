cmake_minimum_required(VERSION 3.18.2)

project(OberverPattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    PRIVATE
        # ${CMAKE_CURRENT_SOURCE_DIR}/src/Client   
)

add_executable(ObserverPattern
    src/main.cpp
)

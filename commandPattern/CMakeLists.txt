cmake_minimum_required(VERSION 3.18.2)

project(CommandPattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Receiver
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Invoker
)

add_executable(CommandPattern
    src/main.cpp
    src/ICommand.hpp
    src/Receiver/Light.hpp
    src/Receiver/LightOnCmd.hpp
    src/Receiver/LightOffCmd.hpp
    src/Invoker/RemoteControl.hpp
)

cmake_minimum_required(VERSION 3.18.2)

project(FactoryPattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Product   
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Creator     
)

add_executable(FactoryPattern
    src/main.cpp
    src/Product/IPizza.hpp
    src/Product/NYStylePizza.hpp
    src/Product/ChicagoStylePizza.hpp
    src/Creator/IPizzaStore.hpp
    src/Creator/NYPizzaStore.hpp
    src/Creator/ChicagoPizzaStore.hpp
)
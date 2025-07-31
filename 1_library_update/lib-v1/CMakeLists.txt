cmake_minimum_required(VERSION 3.10)
project(CalculatorLibV1)

if(POLICY CMP0177)
    cmake_policy(SET CMP0177 NEW)
endif()

add_library(calculator SHARED src/calculator.cpp)

set_target_properties(calculator PROPERTIES
    VERSION 1.0.0
    SOVERSION 1
    INSTALL_NAME_DIR "${CMAKE_SOURCE_DIR}/../dist/lib"
)

target_include_directories(calculator PUBLIC include)

install(TARGETS calculator
    LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/../dist/lib)

install(FILES include/calculator.h
    DESTINATION ${CMAKE_SOURCE_DIR}/../dist/include)
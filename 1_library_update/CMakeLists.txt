cmake_minimum_required(VERSION 3.12)
project(CalculatorApp VERSION 1.0.0 LANGUAGES CXX)

option(LIB_VER "The version of the calculator library to build the app against.")
if(NOT LIB_VER)
    set(LIB_VER 1)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

include_directories(calculator PUBLIC lib-v${LIB_VER}/include)

add_library(calculator SHARED lib-v${LIB_VER}/src/calculator.cpp)
set_target_properties(calculator PROPERTIES
        VERSION ${LIB_VER}.0.0
        SOVERSION 1
)

add_executable(calculator_app main.cpp)
target_link_libraries(calculator_app calculator)

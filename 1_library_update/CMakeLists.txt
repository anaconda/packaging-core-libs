cmake_minimum_required(VERSION 3.10)
project(CalculatorApp)

cmake_policy(SET CMP0177 NEW)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculator_app main.cpp)

target_include_directories(calculator_app PRIVATE ${CMAKE_SOURCE_DIR}/dist/include)

target_link_libraries(calculator_app ${CMAKE_SOURCE_DIR}/dist/lib/libcalculator.dylib)

set_target_properties(calculator_app PROPERTIES
    INSTALL_RPATH "@executable_path/../lib"
    BUILD_WITH_INSTALL_RPATH TRUE
)

install(TARGETS calculator_app RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/dist/bin)
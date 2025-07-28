cmake_minimum_required(VERSION 3.18)
project(VisionLibrary LANGUAGES CXX CUDA)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(OpenCV REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(CUDAToolkit REQUIRED)

# Project options
option(BUILD_TESTS "Build unit tests" ON)
option(USE_CUDA "Enable CUDA support" ON)
option(BUILD_PYTHON_BINDINGS "Build Python bindings" OFF)

if(USE_CUDA)
  enable_language(CUDA)
  
  # Set CUDA architectures if not defined
  if(NOT DEFINED CUDA_ARCHITECTURES)
    set(CUDA_ARCHITECTURES "52;60;70;75")
  endif()
  
  # CUDA specific flags
  set(CMAKE_CUDA_FLAGS "${CMAKE_CUDA_FLAGS} -lineinfo")
  
  add_subdirectory(cuda)
endif()

# Main library
add_library(${PROJECT_NAME} SHARED
  src/core.cpp
  src/utils.cpp
  src/image_proc.cpp
)

target_link_libraries(${PROJECT_NAME} 
  PUBLIC 
    Eigen3::Eigen
    ${OpenCV_LIBS}
)

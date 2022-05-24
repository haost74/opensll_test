cmake_minimum_required(VERSION 3.2)
project(app VERSION 0.0.1)

#set(CMAKE_CONFIGURATION_TYPES "Release" CACHE STRING "" FORCE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
find_package (Threads)

find_package(OpenSSL REQUIRED)

add_executable(app 
    main.cpp)

target_link_libraries(app OpenSSL::SSL Threads::Threads)


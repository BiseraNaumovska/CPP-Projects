cmake_minimum_required(VERSION 3.16)

project(p12_05 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p12_05 main.cpp
    point3.h point3.cpp
    circle4.h circle4.cpp
    cylinder.h cylinder.cpp)

include(GNUInstallDirs)
install(TARGETS p12_05
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

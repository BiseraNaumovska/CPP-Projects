cmake_minimum_required(VERSION 3.16)

project(p15_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p15_01 main.cpp
    shape.h shape.cpp
    point.h point.cpp
    circle.h circle.cpp
    cylinder.h cylinder.cpp)

include(GNUInstallDirs)
install(TARGETS p15_01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

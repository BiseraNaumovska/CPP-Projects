cmake_minimum_required(VERSION 3.16)

project(p11_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p11_01 main.cpp
    point.h point.cpp
    circle.h circle.cpp
    point2.h point2.cpp
    circle3.h circle3.cpp
    point3.h point3.cpp
    circle4.h circle4.cpp)

include(GNUInstallDirs)
install(TARGETS p11_01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

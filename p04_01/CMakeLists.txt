cmake_minimum_required(VERSION 3.16)

project(p04_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p04_01 main.cpp
    time1.h time1.cpp)

include(GNUInstallDirs)
install(TARGETS p04_01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

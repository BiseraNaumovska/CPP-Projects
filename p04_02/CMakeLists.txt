cmake_minimum_required(VERSION 3.16)

project(p04_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p04_02 main.cpp
    time2.h time2.cpp)

include(GNUInstallDirs)
install(TARGETS p04_02
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

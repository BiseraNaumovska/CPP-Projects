cmake_minimum_required(VERSION 3.16)

project(p04_03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p04_03 main.cpp
    create.h create.cpp)

include(GNUInstallDirs)
install(TARGETS p04_03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(p07_08 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p07_08 main.cpp
    dropki.h dropki.cpp)

include(GNUInstallDirs)
install(TARGETS p07_08
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(p08_06 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p08_06 main.cpp
    complex1.h complex1.cpp)

include(GNUInstallDirs)
install(TARGETS p08_06
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

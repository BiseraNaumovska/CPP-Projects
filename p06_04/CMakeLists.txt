cmake_minimum_required(VERSION 3.16)

project(p06_04 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p06_04 main.cpp
    employ1.h employ1.cpp)

include(GNUInstallDirs)
install(TARGETS p06_04
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

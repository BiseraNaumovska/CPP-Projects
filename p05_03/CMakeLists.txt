cmake_minimum_required(VERSION 3.16)

project(p05_03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(p05_03 main.cpp
    date1.h date1.cpp
    emply1.h emply1.cpp)

include(GNUInstallDirs)
install(TARGETS p05_03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

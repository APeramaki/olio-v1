cmake_minimum_required(VERSION 3.16)

project(v1h1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(v1h1 main.cpp
    calc.cpp
    calc.h)

include(GNUInstallDirs)
install(TARGETS v1h1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

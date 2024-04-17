cmake_minimum_required(VERSION 3.28)
project(lagrange C)

set(CMAKE_C_STANDARD 17)

set(PROJECT_HEADERS
        allocation.h
        calculation.h
        display.h
)
set(PROJECT_SOURCES
        main.c
        allocation.c
        calculation.c
        display.c
)

add_executable(lagrange ${PROJECT_SOURCES} ${PROJECT_HEADERS})

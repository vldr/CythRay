cmake_minimum_required(VERSION 3.16)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose Debug or Release" FORCE)
endif()

project(cythray)

set(SOURCES
    main.cpp
    cythray.h
)

add_subdirectory(raylib)
add_subdirectory(cyth)

add_executable(cythray ${SOURCES})

target_link_libraries(cythray PRIVATE raylib)
target_link_libraries(cythray PRIVATE cyth)
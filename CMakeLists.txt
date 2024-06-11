cmake_minimum_required(VERSION 3.26)
project(SimpleGUI)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.6.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimpleGUI main.cpp
        Button.cpp
        Button.h)

target_link_libraries(SimpleGUI sfml-system)
target_link_libraries(SimpleGUI sfml-graphics)
target_link_libraries(SimpleGUI sfml-window)
cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(Buttons_project)

pico_sdk_init()

add_executable(Buttons Buttons.c)
add_executable(ButtonsW Buttons_working.c)

target_link_libraries(Buttons pico_stdlib)
target_link_libraries(ButtonsW pico_stdlib)

pico_add_extra_outputs(Buttons)
pico_add_extra_outputs(ButtonsW)
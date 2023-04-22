cmake_minimum_required (VERSION 3.8)

project(cmakeproject)
add_executable(cmakeproject main.cpp)

# Добавляем директорию, где находится библиотека inoutlib
add_subdirectory(inout)

# Линкуем библиотеку inoutlib с нашей целью cmakeproject
target_link_libraries(cmakeproject PUBLIC inoutlib)

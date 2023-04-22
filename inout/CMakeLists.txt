project(inout)
file(GLOB SOURCES src/*.cpp)
add_library(inoutlib STATIC ${SOURCES})
target_include_directories(inoutlib PUBLIC include)
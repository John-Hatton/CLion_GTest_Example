set(SOURCES
        GTestExample.cpp)

set(HEADERS
        GTestExample.h)

add_library(${CMAKE_PROJECT_NAME}_lib STATIC ${SOURCES} ${HEADERS})
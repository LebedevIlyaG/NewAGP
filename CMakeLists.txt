cmake_minimum_required(VERSION 3.31)

set(PROJECT_NAME_STR NewGSA)
set(CMAKE_CXX_STANDARD 17)

project (${PROJECT_NAME_STR})

set(LIBRARY_NAME_STR NewGSA_l)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/ ${CMAKE_CURRENT_SOURCE_DIR}/include/ ${CMAKE_CURRENT_SOURCE_DIR}/libs/sample_src ${CMAKE_CURRENT_SOURCE_DIR}/libs/src)

file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/libs/sample_src/Hill/*.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/libs/sample_src/Shekel/*.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/libs/src/*.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/libs/src/*.h
                    ${CMAKE_CURRENT_SOURCE_DIR}/libs/src/*.hpp
					${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
					${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

add_executable(${PROJECT_NAME_STR} ${CMAKE_CURRENT_SOURCE_DIR}/Sample/main.cpp)

add_library(${LIBRARY_NAME_STR} STATIC ${SRC_FILES})
target_link_libraries(${PROJECT_NAME_STR} ${LIBRARY_NAME_STR})

add_subdirectory(${PROJECT_SOURCE_DIR}/GoogleTest)
add_subdirectory(${PROJECT_SOURCE_DIR}/Test)

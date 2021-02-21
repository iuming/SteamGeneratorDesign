cmake_minimum_required(VERSION 3.8...3.18)  
if(${CMAKE_VERSION} VERSION_LESS 3.12) 
  cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(SteamGenerator)
include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)

add_executable(${PROJECT_NAME} main.cpp ${sources} ${headers})

install(TARGETS SteamGenerator DESTINATION bin)

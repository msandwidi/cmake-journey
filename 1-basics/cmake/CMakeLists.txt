cmake_minimum_required(VERSION 3.24.0-rc3)

project(cmakebasic VERSION 1.0)

configure_file(cmakebasicConfig.h.in cmakebasicConfig.h)

#target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

add_executable(${PROJECT_NAME} 
  main.cpp
)

add_subdirectory(Adder)
add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
  PUBLIC Adder PUBLIC 
  external/glfw/include
)

target_link_directories(${PROJECT_NAME} 
  PRIVATE Adder/
  PRIVATE external/glfw/src
)

target_link_libraries(${PROJECT_NAME} 
  adder
  glfw
)


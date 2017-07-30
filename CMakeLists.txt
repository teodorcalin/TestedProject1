cmake_minimum_required(VERSION 2.6)

add_executable(proj1 src/main.cpp src/MyClass.cpp)
set(EXECUTABLE_OUTPUT_PATH "bin")

include_directories("${PROJECT_SOURCE_DIR}/thirdP/gtest/include")
link_directories("${PROJECT_SOURCE_DIR}/thirdP/gtest/lib")
add_executable(testMyClass src/testMyClass.cpp src/MyClass.cpp)
target_link_libraries(testMyClass gtest gtest_main pthread)

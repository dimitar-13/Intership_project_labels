cmake_minimum_required(VERSION 3.28.1)
project("Labels")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_GENERATOR MATCHES "Visual Studio" OR CMAKE_GENERATOR MATCHES "Xcode")
    set(isMultiConfig TRUE)
else()
    set(isMultiConfig FALSE)
endif()

add_executable(${PROJECT_NAME} "entry_point.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
target_compile_definitions(${PROJECT_NAME} PRIVATE $<$<CONFIG:Test>:TEST>)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/labels")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/client_code")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/transformations")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/helpers")

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.8.1
)
FetchContent_MakeAvailable(Catch2)

target_link_libraries(${PROJECT_NAME} PRIVATE
   Catch2::Catch2WithMain
)

include(CTest)
include(Catch)

catch_discover_tests(${PROJECT_NAME} TEST_PREFIX "Labels." CONFIG Test)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/../tests" "${CMAKE_BINARY_DIR}/tests")

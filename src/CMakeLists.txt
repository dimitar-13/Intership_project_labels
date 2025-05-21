cmake_minimum_required(VERSION 3.28.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CONFIGURATION_TYPES "Debug;Release;RelWithDebInfo;MinSizeRel;Test" CACHE STRING "" FORCE)

project("Labels")

add_executable(${PROJECT_NAME} "entry_point.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}")

target_compile_definitions(${PROJECT_NAME} PRIVATE
    $<$<CONFIG:Test>:TEST>
)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/labels")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/client_code")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/transformations")

get_property(isMultiConfig GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)

if(isMultiConfig)

    include(FetchContent)
    FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.8.1
    )
    FetchContent_MakeAvailable(Catch2)

    target_link_libraries(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:Test>:Catch2::Catch2WithMain>
    )

    include(CTest)
    include(Catch)
    catch_discover_tests(${PROJECT_NAME} CONFIG Test)
else()
    if(CMAKE_BUILD_TYPE STREQUAL "Test")
        include(FetchContent)
        FetchContent_Declare(
            Catch2
            GIT_REPOSITORY https://github.com/catchorg/Catch2.git
            GIT_TAG v3.8.1
        )
        FetchContent_MakeAvailable(Catch2)

        target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)

        include(CTest)
        include(Catch)
        catch_discover_tests(${PROJECT_NAME})
    endif()
endif()
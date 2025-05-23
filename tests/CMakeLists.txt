set(INPUT_SOURCES
	capitalize_transformation_tests.cpp
	left_trim_transformation_tests.cpp
	right_trim_transformation_tests.cpp
	normalize_space_transformation_tests.cpp
	decorate_transformation_tests.cpp
)

set(INPUT_HEADERS

)

target_sources(${PROJECT_NAME} PRIVATE ${INPUT_SOURCES} ${INPUT_HEADERS})
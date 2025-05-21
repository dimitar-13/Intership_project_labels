set(INPUT_SOURCES
	left_trim_transformations.cpp
	normalize_space_transformations.cpp
	replace_transformations.cpp
	right_trim_transformations.cpp
	capitalize_transformations.cpp
	censor_transformations.cpp
	decorate_transformations.cpp
)

set(INPUT_HEADERS
	left_trim_transformations.h
	normalize_space_transformations.h
	replace_transformations.h
	right_trim_transformations.h
	text_transformations.h
	capitalize_transformations.h
	censor_transformations.h
	decorate_transformations.h
)

target_sources(${PROJECT_NAME} PRIVATE ${INPUT_SOURCES} ${INPUT_HEADERS})
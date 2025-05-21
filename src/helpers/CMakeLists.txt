set(INPUT_SOURCES
	string_helper.cpp
)

set(INPUT_HEADERS
	string_helper.h
)

target_sources(${PROJECT_NAME} PRIVATE ${INPUT_SOURCES} ${INPUT_HEADERS})
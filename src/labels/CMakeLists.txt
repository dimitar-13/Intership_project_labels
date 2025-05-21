set(INPUT_SOURCES
	simple_label.cpp
	rich_label.cpp
)

set(INPUT_HEADERS
	label.h
	simple_label.h
	rich_label.h
)

target_sources(${PROJECT_NAME} PRIVATE ${INPUT_SOURCES} ${INPUT_HEADERS})
set(INPUT_SOURCES
	label_printer.cpp
)

set(INPUT_HEADERS
	label_printer.h
)

target_sources(${PROJECT_NAME} PRIVATE ${INPUT_SOURCES} ${INPUT_HEADERS})
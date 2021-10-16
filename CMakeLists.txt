cmake_minimum_required(VERSION 3.16)

project(c_studies)

set(
	CMAKE_RUNTIME_OUTPUT_DIRECTORY
	${CMAKE_SOURCE_DIR}/bin
)

include_directories(
	${CMAKE_SOURCE_DIR}/include
)

add_library(c_studies_lib
	src/c_studies_lib/hello.c
	include/c_studies_lib/hello.h
)

add_executable(c_studies_app
	src/c_studies_app/main.c
)

set_target_properties(c_studies_lib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(c_studies_app c_studies_lib)

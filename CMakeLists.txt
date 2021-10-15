cmake_minimum_required(VERSION 3.16)

project(c_studies)

set(
	CMAKE_RUNTIME_OUTPUT_DIRECTORY
	${CMAKE_SOURCE_DIR}/bin
)

add_executable(c_studies_app src/app/main.c)

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

# Google test setup below

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
	c_studies_lib_test
	tests/c_studies_lib/hello_test.cpp
)

target_link_libraries(
	c_studies_lib_test
	gtest_main
	c_studies_lib
)

include(GoogleTest)
gtest_discover_tests(c_studies_lib_test)


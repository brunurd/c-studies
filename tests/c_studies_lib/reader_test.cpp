#include "gtest/gtest.h"

extern "C" {
	#include "c_studies_lib/reader.h"
}

TEST(read_file_test,should_return_file_contents_when_read_file_is_called){
	ASSERT_STREQ(read_file("./file-read-test.txt"), "This is the file content...\n");
}

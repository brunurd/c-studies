#include "gtest/gtest.h"

extern "C" {
	#include "c_studies_lib/hello.h"
}

TEST(hello_test,should_return_default_message_when_hello_is_called){
	ASSERT_STREQ(hello_world(), "hello world!");
}

TEST(hello_test,should_return_message_with_the_input_when_hello_is_called){
	ASSERT_STREQ(hello("Pézão"), "hello Pézão!");
}

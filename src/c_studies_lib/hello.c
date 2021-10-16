#include <c_studies_lib/hello.h>

void hello(const char *input){
	if (input == NULL) printf("hello world!\n");
	else printf("hello %s!\n", input);
}

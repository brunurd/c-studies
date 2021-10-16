#include <c_studies_lib/hello.h>

const char *hello(const char *input){
	if (input == NULL) return "hello world!";

	int output_size = strlen("hello ") + strlen(input) + strlen("!") + 1;
	char *output = (char *)malloc(output_size);

	strcpy(output, "hello ");
	strcat(output, input);
	strcat(output, "!");

	return output;
}

const char *hello_world() {
	return hello(NULL);
}

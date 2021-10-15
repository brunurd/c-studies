#include <stdio.h>

int main(int argc, char *argv[]){
	char *input = argv[1];
	if (input == NULL) printf("hello world!\n");
	else printf("hello %s!\n", input);
}

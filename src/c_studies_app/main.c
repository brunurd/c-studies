#include <stdio.h>
#include <c_studies_lib/reader.h>

int main(int argc, char *argv[]){
	printf("%s\n", read_file("./bin/file-read-test.txt"));
}

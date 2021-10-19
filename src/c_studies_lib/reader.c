#include <c_studies_lib/reader.h>

const char *read_file(const char *file_path){
	int c;
  FILE *file;
	char *contents = NULL;
	int contents_size = 0;

	file = fopen(file_path, "r");

	if (file) {
		while ((c = getc(file)) != EOF) {
			char *new_contents = realloc(contents, contents_size++);

			if (new_contents == NULL) {
				break;
			}

			contents = new_contents;
			contents[contents_size-1] = c;
		}
		fclose(file);
	}

	return contents;
}

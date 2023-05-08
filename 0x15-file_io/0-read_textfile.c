#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buf;
	size_t n;
	ssize_t total = 0;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buf = (char *) malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}
	while ((n = fread(buf, 1, letters, file)) > 0)
	{
		total += n;
	}
	free(buf);
	fclose(file);
	return (total);
}

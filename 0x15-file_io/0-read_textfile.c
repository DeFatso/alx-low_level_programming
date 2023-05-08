#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: parameter
 * @filename: parameter
 * Return: number of letters it could read and print
 */
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

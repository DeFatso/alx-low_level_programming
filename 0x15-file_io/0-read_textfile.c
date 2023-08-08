#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: parameter
 * @filename: parameter
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr;
	char *buffer;
	size_t read_size;
	ssize_t total_read = 0;

	file_ptr = fopen(filename, "r");
	if (file_ptr == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file_ptr);
		return (0);
	}

	while ((read_size = fread(buffer, 1, letters, file_ptr)) > 0)
	{
		total_read += read_size;
		fwrite(buffer, 1, read_size, stdout);
	}

	free(buffer);
	fclose(file_ptr);
	return (total_read);
}

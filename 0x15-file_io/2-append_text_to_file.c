#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 */
 int append_text_to_file(const char *filename, char *text_content)
{
	size_t bytes_written;
	size_t length;
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	length = strlen(text_content);
	bytes_written = fwrite(text_content, sizeof(char), length, file);
	fclose(file);
	if (bytes_written != length)
	{
		return (-1);
	}
	return (1);
}

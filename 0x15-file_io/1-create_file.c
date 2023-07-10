#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: Returns: 1 on success, -1 on failure 
 */
int create_file(const char *filename, char *text_content)
{
	size_t length, bytes_written;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytes_written = write(file, text_content, length);
		if (bytes_written != length)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

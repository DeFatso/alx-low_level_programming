#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len;
	ssize_t bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	text_len = strlen(text_content);
	bytes_written = write(fd, text_content, text_len);

	close(fd);

	if (bytes_written == -1 || bytes_written != text_len)
	{
		return (-1);
	}

	return (1);

}

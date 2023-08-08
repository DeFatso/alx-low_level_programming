#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: parameter
 * @text_content: parameter
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size])
			text_size++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		res = write(fd, text_content, text_size);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

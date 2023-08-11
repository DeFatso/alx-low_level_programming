#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: parameter
 * @text_content: parameter
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	if (access(filename, R_OK) == 0)
	{
		fprintf(stderr, "File '%s' already exists and has read permissions\n",
				filename);
		return (-1);
	}

	file = fopen(filename, "w+");
	if (file == NULL)
	{
		perror("fopen");
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}
	else
	{
		fprintf(file, "%s", "");
	}

	fclose(file);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		perror("chmod");
		return (0);
	}
	return (1);
}

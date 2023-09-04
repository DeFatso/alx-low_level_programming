#include "main.h"
/**
 * open_file - opens file
 * @file_name: file name
 * @flags: flags
 * @mode: mode
 * Return: file descriptor
 */
int open_file(const char *file_name, int flags, mode_t mode)
{
	int fd = open(file_name, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", file_name);
		exit(98);
	}
	return (fd);
}
/**
 * copy_file - copies file
 * @fd_from: parameter
 * @fd_to: parameter
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		exit(98);
	}
}
/**
 * close_file - closes file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_file(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

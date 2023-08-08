#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}

	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
/**
 * close_fd - closes fd
 * @fd: parameter
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

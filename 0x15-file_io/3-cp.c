#include "main.h"
/**
 * print_error - prints error
 * @exit_code: parameter
 * @message: parameter
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * exit_with_error - exit
 * @exit_code: parameter
 * @message: parameter
 */
void exit_with_error(const char *message, int exit_code)
{
	print_error(message);
	exit(exit_code);
}
/**
 * copy_file - copies the content of a file to another file.
 * @file_from: file to copy from
 * @file_to: file to copy to
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_error("Can't read from file", 98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error("Can't write to file", 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error("Can't write to file", 99);
		}
	}
	if (close(fd_to) == -1)
	{
		exit_with_error("Can't close fd", 100);
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_error("Can't read from file", 98);
	}
	if (close(fd_from) == -1)
	{
		exit_with_error("Can't close fd", 100);
	}
}
/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	char *file_from;
	char *file_to;

	if (ac != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	copy_file(file_from, file_to);
	return (0);
}

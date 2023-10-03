#include "main.h"
#include <stdlib.h>

/**
 * exit_with_error - Print an error message and exit with the given exit code.
 * @exit_code: The exit code to use.
 * @format: The format string for the error message.
 * @...: Additional arguments to the format string.
 */
void exit_with_error(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}
/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, other values on error.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to\n");
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
		S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1)
	{
		close(from_fd);
		exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(from_fd);
			close(to_fd);
			exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(from_fd);
		close(to_fd);
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		exit_with_error(100, "Error: Can't close fd\n");
	}
	return (0);
}

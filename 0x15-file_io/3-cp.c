#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error -  handles all error messages based on the error code
 * @error: exit value or file descriptor error code
 * @filename:  name of the file
 * @fd: file descriptor value
 */
int print_error(int error, const char *filename, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			return (0);
	}
	exit(error);
}

/**
 * copy_files - copies the content of one file to another
 * @file_from: source file name
 * @file_to: destination file name
 * Return: 0 on success, -1 on failure
 */
int copy_files(const char *file_from, const char *file_to)
{
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t n_read, n_written;

	/* Open source file for reading */
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
		print_error(98, file_from, 0);
	/* Open or create destination file for writing */
	fd_dest = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_dest == -1)
	{
		close(fd_source);
		print_error(99, file_to, 0);
	}
	/* Read from source and write to destination */
	while ((n_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		if (n_read == -1)
		{
			close(fd_source);
			close(fd_dest);
			print_error(98, file_from, 0);
		}

		n_written = write(fd_dest, buffer, n_read);
		if (n_written == -1)
		{
			close(fd_source);
			close(fd_dest);
			print_error(99, file_to, 0);
		}
	}
	/* Close file descriptors */
	close(fd_dest);
	close(fd_source);

	return (0);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 97-100 on exit value errors
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;

	if (argc != 3)
		print_error(97, NULL, 0);

	file_from = argv[1];
	file_to = argv[2];

	if (copy_files(file_from, file_to) == -1)
		print_error(100, NULL, -1);

	return (0);
}

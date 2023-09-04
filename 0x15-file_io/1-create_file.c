#include "main.h"

/**
 * create_file - creates a file.
 * @filename: ame of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

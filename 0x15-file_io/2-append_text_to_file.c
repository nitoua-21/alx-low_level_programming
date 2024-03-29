#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of the file
 * @text_content:  NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_bytes;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;
	w_bytes = write(fd, text_content, len);
	if (w_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

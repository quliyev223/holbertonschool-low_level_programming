#include "main.h"
#include <string.h>
/**
 * create_file - creates a file and writes text into it
 *
 * @filename: name of the file to create
 * @text_content: string to write, can be NULL
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t n_read;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n_read = strlen(text_content);
	n_written = write(fd, text_content, n_read);
	if (n_written == -1 || n_written != (ssize_t)n_read)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}

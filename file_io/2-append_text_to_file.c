#include "main.h"

/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to add at the end.
 * 
 * Description: Does not create the file if it doesn't exist.
 * If text_content is NULL, does nothing and returns 1 if file exists.
 * 
 * Return: 1 on success, -1 on failure (file doesn't exist, no permission
 * or error).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;
	ssize_t n_written;

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
	while (text_content[length] != '\0')
		length++;

	n_written = write(fd, text_content, length);
	if (n_written == -1)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}

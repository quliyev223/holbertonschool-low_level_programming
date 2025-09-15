#include "main.h"

/**
 * create_file - creates a file and writes text into it
 *
 * @filename: name of the file to create
 * @text_content: string to write, can be NULL
 *
 * REturn: 1 on success, -1 on failure
 *
 * Description: Checks filename. Opens or creates file.
 * Sets permissions rw- - - - - - - -.
 * Writes text_content if not NULL. Closes file. Returns 1 on success.
 */
int create_file(const char *filename, char *text_content);
{
	int fd;


	if (filename == NULL)
		return (-1);


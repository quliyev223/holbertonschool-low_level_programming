#include "main.h"
#include <stdio.h>
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array contaiining source and destination filenames
 *
 * Return: 0 on success, exits with 97-100 on errors
 */
int main(int argc, char *argv[])
{
	int fd1from;
	int fd2to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", argv[1]);
		exit(97);
	}
	fd1from = open(argv[1], O_RDONLY);
	if (fd1from = -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n", argv[2]);
		exit(98);
	}
	fd2to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2to = -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE"\n);
		exit(99);
	}
	

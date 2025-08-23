#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size in bytes to allocate.
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *s;
	

	s = malloc(b);


	if (s == NULL)
		exit(98);

	
	return (s);
}	

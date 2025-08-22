#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size: THe size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;


	if (size == 0)
		return (NULL);
	else
	{
		char *p = (char*)malloc(size * sizeof(char));


		for (i = 0; i < size - 1; i++)
			p[i] = c;


		return (p);
	}
}

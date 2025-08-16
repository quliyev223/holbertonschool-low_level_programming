#include "main.h"
#include "stddef.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search in
 * @accept: string containing bytes to search for
 *
 * Return: ppointer to the first occurence in s of any byte from accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}


	return (NULL);
}

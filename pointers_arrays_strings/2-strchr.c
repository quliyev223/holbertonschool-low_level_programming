#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string using array indexing
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return &s[i];
		i++;
	}


	if (c == '\0')
		return (&s[i]);


	return (NULL);
}

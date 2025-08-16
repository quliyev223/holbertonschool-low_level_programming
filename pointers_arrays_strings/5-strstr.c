#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 *  Return: pointer to the beginning of the located substring,
 *  or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;


	/* Return haystack if needle is empty */
	if (!*needle)
		return (haystack);


	/* Loop through each character of haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Compare substring starting at current position */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* Break if the characters do not match */
			if (haystack[i + j] != needle[j])
				break;
		}


		/* Return pointer if full needle matched */
		if (needle[j] == '\0')
		return (haystack + i);
	}


	/* Return NULL if substring is not found */
	return (NULL);
}

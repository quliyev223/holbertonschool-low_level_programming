#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to take from src
 *
 * Description: This function appends the string pointed to by src to the
 * end of the string pointed to by dest, using at most n bytes from src.
 * The src string does not need to be null-terminated if it contains n or
 * more bytes. The resulting string in dest will be null-terminated if there
 * is a null byte in src within the first n bytes.
 * Return: pointer too the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;


	/*Find the end of the destination string */
	i=0;
	while (dest[i] != '\0')
	{
		i++;
	}


	/* Append up to n characters from source string */
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}

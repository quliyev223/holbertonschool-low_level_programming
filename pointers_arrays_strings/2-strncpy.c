#include "main.h"

/**
 * _strncpy - copies a strirng up to n bytes
 * @dest: destinatiion buffer where the string will be copied
 * @src: source string to copy from
 * @n: maximum number of bytes to copy
 *
 * Description: THis function copies at most n characters from the 
 * string pointed to by src to the buffer pointed to by dest.
 * If the length of src is less than n, the remainder of dest 
 * will be padded with null bytes ('\0'). Unlike strcpy,
 * strncpy  does not guarantee that dest will be null-terminated
 * if src is longer than or equal to n characters.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string (If NULL, treat as empty string)
 * @s2: second string (If NULL, treat as empty string)
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2 = 0, i,j;
	char *new_str;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[len1] != '\0')
		len1++;


	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;


	new_str = malloc((len1 + n + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];


	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];


	new_str[i + j] = '\0';


	return (new_str);
}

	
		

		


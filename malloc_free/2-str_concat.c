#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string (can be NULL, treated as empty)
 * @s2: second string (can be NULL, trreated as empty)
 *
 * Return: pointer to a newly allocated space in memory
 * containing s1 followed by s2 and null terminated.
 * If memory allocation fails, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *new_str;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Callculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for concatenated string */
	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	
	/* Copy s1 into new_str */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	/* Copy s2 into new_str after s1 */
	for (j = 0; j < len2; j++)
		new_str[i + j] = s2[j];

	/* Null terminate the new string */
	new_str[i + j] = '\0';


	return (new_str);
}

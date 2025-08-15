#include "main.h"

/**
 * _strcmp - Compares two strings character by character
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * REturn: An integer less than, equal to, or greater than 0 if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}


	return (s1[i] - s2[i]);
}

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the striing to be scanned
 * @accept: the string containing the charaacters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;


	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}


		if (accept[j] == '\0')
			break;


		i++;
	}

	return (i);
}


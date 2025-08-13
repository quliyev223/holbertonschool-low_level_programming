#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Poiner th the string to be reversed
 *
 * Description: This function takes a string and reverses
 * it by swapping characters from both ends moving toward the center.
 * It modifies the original string directly.
 */
void rev_string(char *s)
{
	int i = 0;

	int j;
	char temp;


	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}

#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first character if it is lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';
	i++;

	while (str[i] != '\0')
	{
		int j = 0;

		/* Check if previous character is a separator */
		while (separators[j] != '\0')
		{
			if (str[i - 1] == separators[j])
			{
				/* Capitalize current character if lowercase */
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 'a' - 'A';
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}

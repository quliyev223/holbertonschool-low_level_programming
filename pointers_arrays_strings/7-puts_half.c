#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be processed
 *
 * Description: If the number of characters is odd,
 * the function prints the last (length + 1) / 2 characters.
 * Then it prints a nwe line.
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;


	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}	

	/* Determine where to start printing */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;


	/** Print from start index to the end */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

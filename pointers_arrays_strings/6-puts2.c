#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: The string to be printed (every other character)
 *
 * Description: This function prints characters at even indexes
 * (0, 2, 4, ...) to the standard output.
 * It end the output with a newline.
 */
void puts2(char *str)
{
	int i = 0;


	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

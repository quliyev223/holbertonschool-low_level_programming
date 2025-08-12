#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
 *
 * Description: This function prints the characters of the string
 * pointed to by s in reverse order, then prints a new line.
 */
void print_rev(char *s)
{
	int i = 0;


	while (s[i] != '\0')
		i++;


	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

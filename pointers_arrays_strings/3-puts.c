#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 *
 * Description: This function prints each character of a string
 * to the standard output using _putchar, and theen
 * prints a newline character at the end.
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;


	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

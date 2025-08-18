#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: This function prints a string using recursion.
 * Each character is printed one at a time untill the null
 * terminator is encountered, then a new line is printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
	{
		_putchar('\n');
		return;
	}


	_putchar(*s);                /* print current character */
	_puts_recursion(s + 1);	     /* recursive call to print next character */
}

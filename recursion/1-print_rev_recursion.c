#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string top rint
 *
 * Description: This function prints the string s in reverse
 * using recursion. Each character is printed after the
 * recursive call for the next character.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;


	_print_rev_recursion(s + 1);
	_putchar(*s);
}

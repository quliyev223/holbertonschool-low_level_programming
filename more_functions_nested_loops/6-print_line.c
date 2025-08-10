#include "main.h"


/**
 * print_line - draws a straight line in the terminal using '_'
 * @n: number of times the character '_' should be printed
 *
 * Description: Prints a line of '_' characters of length n.
 * If n is 0 or less, only prints a newline.
 *
 * Return: void
 */
void print_line(int n)
{
	int i;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

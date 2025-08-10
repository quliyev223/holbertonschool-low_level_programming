#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal using '\'
 * @n: number of times the character '\' should be printed (length of diagonal)
 *
 * Description: Prints n lines, each line has increasing spaces
 * followed by '\',
 * If n <= 0, prints only a new line.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 0;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line < n)
		{
			int space = 0;


			while (space < line)
			{
				_putchar(' ');
				space++;
			}


			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
}

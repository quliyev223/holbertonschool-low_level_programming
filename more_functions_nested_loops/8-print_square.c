#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: size of the square to print
 *
 * Description: If size is 0 or less, prints only a new line.
 * Uses only the _putchar function to print characters.
 */
void print_square(int size)
{
	int row, col;


	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

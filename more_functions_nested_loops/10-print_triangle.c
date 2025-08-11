#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle of size `size`.
 * @size: The height and base length of the triangle.
 *
 * Description: This function prints a right-angled triangle using the
 * '#' character. The triangle has a height and base length equal to
 * the value of `size`. If `size` is less than or equal to 0, only a
 * new line is printed.
 */
void print_triangle(int size)
{

	int row, spaces, hashes;


	if (size <= 0)
	{
		_putchar('\n');
	}
	
	for (row = 1; row <= size; row++)
	{
		
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}

		for (hashes = 1; hashes <= row; hashes++)
		{
			_putchar('#');
		}


		_putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: Prints numbers from n to 98 separated by
 * commas and a space, followed by a new line. Numbers
 * are printed in order, either ascending or descending.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		/* Print from n to 98 in ascending order */
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	}
	else
	{
		/* Print from n to 98 in descending order */
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	}
}

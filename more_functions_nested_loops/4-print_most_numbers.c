#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9,
 * excluding 2 and 4, followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char nums[] = "1356789\n";
	int i = 0;


	while (nums[i] != '\0')
	{
		_putchar(nums[i]);
		i++;
	}
}

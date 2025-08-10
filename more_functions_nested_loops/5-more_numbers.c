#include "main.h"

/**
 * more_nummbers - Prints 10 times the numbers from 0 to 14,
 * each time followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	char nums[] = "01234567891011121314\n";
	int i, j;


	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (nums[j] != '\0')
		{
			_putchar(nums[j]);
			j++;
		}
	}
}

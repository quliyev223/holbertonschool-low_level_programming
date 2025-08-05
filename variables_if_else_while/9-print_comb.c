#include <stdio.h>

/**
 * main - prints digits from 0 to 9 separated by ", "
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}

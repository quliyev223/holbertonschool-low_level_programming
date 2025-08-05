#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 *        followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}

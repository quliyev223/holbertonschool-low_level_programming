#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase,
 *        followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);
	c = 'a';
	while (c <= 'f')
		putchar(c++);
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main -  print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

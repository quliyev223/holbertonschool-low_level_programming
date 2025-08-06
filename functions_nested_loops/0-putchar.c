#include "main.h"

/**
 * main - Prints _putchar followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *str = "_putchar";
	int i = 0;


	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}


	_putchar('\n');


	return (0);
}

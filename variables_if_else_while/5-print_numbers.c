#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;


	for  (c = '0'; c < 10; c++)
	putchar(c);	

	putchar('\n');
	return(0);
}

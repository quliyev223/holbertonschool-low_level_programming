#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @args: number of command line arguments
 * @argv: array of command line argument strings (unused)
 *
 * Return: 0 (Success)
 */
int main(int argc, char * argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

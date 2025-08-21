#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count, represents the number oof arguments passed
 * @argv: Argument vector, array of strings containing the arguments
 *
 * Description: This program prints all the arguments it receives,
 * including the first one which is the program name.
 * Each argument is printed on a new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;


	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);


	return (0);
}

	


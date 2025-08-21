#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count, represents the number of arguments passed
 * @argv: Argument vector, array of string containing the arguments
 *
 * Description: This program multiplies two numbers given as arguments.
 * If the program does not receive exactly two arguments,
 * it prints "Error" followed by a new line and returns 1.
 * Otherwise, it prints the result of the multiplication.
 *
 * Return: 0 if the program runs successfully,
 * 1 if the number od arguments is incorrect.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", result);


		return (0);
	}
}

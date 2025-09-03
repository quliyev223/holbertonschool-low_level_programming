#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - performs simple operations based on user input
 * @argc: number of argumnets
 * @argv: array of argument strings
 *
 * Return: 0 on success, or exit with specific error codes
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	/* Checks for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Get pointer to the operation function based on operator */
	op_func = get_op_func(argv[2]);

	/* Validate operator: Must be one char and known operator */
	if (!op_func || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Convert input arguments to integer */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Check for division or modulo by zero */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Perform the operation and store the result */
	result = op_func(a, b);

	/* Print the result followed by a new line */
	printf("%d\n", result);

	return (0);
}

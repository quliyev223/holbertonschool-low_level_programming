#include <stdio.h>
#include <stdllib.h>


/**
 * main - performs simple operations based on user input
 * @argc: number of argumnets
 * @argv: array of argument strings
 *
 * Return: 0 on success, or exit with specific error codes
 */
int main(int argc, char *argv[])
{
	int num1,num2;
	
	
	if (argc != 4)
	{
		printf("Error\n);
		exit(98);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);


	func = get_op_func(argv[2]);

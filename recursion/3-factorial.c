#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to compute factorial of
 *
 * Return: Factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Error case */


	if (n == 0)
		return (1); /* Base case: 0! = 1 */


	return (n * factorial(n - 1)); /* Recursive case */
}

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
	int helper(int n, int guess);


	if (n < 0)
		return (-1);


	return (helper(n, 0));
}


/**
 * helper - rcursive function to test guesses
 * @n: numberr to calculate sqrt of
 * @guess: current guess to check
 *
 * Return: the square rooot if found, otherwise -1
 */
int helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);


	return (helper(n, guess + 1));
}

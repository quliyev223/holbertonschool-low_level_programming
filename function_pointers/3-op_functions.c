#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of adding a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of subtracting b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns the product of two integrs
 * @a: first integer
 * @b: second integer
 *
 * Return: result of multiplying a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the quotient of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of dividing a by b
 * Note: division by zero is handled in main
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided by b
 * Note: division by zero is handled in main
 */
int op_mod(int a, int b)
{
	return (a % b);
}

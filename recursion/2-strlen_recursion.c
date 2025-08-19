#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string measure
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
		return (0);


	/* Recursive case: move to next character and add 1 */
	return(1 + _strlen_recursion(s + 1));
}

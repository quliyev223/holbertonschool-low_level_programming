#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Description:: This function takes a variable number of integers
 * and prints them, separated by the given string. If separator
 * is NULL, it is not printed. A new line is printed at the end.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for(i = 0; i < n; i++)
		printf()

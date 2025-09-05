#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: string of character representing argument types
 * 	c: char
 * 	i: int
 * 	f: float
 * 	s: string or char *
 
 * Description: Prints arguments in the order specified by format.
 * Ignores unknown characters. Prints (nil) for NULL strings.
 * Arguments are separated by ", ". Ends with a new line.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";


	va_start(args, format);


	while(format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
		}
		if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}
		if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
		}
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
		}
		i++;
	}


	printf("\n");
	va_end(args);
}

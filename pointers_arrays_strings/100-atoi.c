#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 *
 * Description: The function parses the string to find an integer.
 * It takes into account all preceding '+' and '-' signs
 * Conversion stops at the first non_digit character after the number.
 */
int atoi(char *s)
{
	int sign = 1; /* store the sign of the number */
	int result = 0; /* store the resulting integer */
	int started = 0; /* flag to indicate if number parsing has started */


	while (*s != '\0')
	{
		/* handle signs befor the number starts */
		if (!started)
		{
			if (*s == '-')
				sign = -sign;
			else if (*s == '+')
				; /* do nothing for '+' */
			else if (*s >= '0' && *s <= '9')
			{
				started = 1;
				result = result * 10 + (*s - '0');
			}
		}
		else 
		{
			/* continue building the number */
			if (*s >= '\0' && *s <= '9')
				result = result * 10 + (*s - '0');
			else
				break; /* stop at first non-digit character */
		}
		s++;
	}

	return sign * result;
}

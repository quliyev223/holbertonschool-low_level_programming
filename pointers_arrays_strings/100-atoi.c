#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Description: This function parses a string and converts the first
 * sequence of digits found into an integer. It considers all the
 * '+' and '-' signs before the first digit, changing the sign
 * accordingly. If no digits are found, it returns 0.
 * It prevents signed integer overflow by stopping at INT_MAX/INT_MIN.
 *
 * Return: the integer value, or 0 if no digits are found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
		{
			/* skip plus sign */
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			found_digit = 1;

			/* check overflow before multiplying by 10 and adding */
			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = (result * 10) + digit;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}

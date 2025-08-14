#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Description: This function parses a string and converts the first
 * sequence of digits found into an integer. It considers all the
 * '+' and '-' signs before the first digit, changing the sign
 * accordingly. If no digits are found, it returns 0.
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
			/* skip the plus sign */
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = (result * 10) + (*s - '0');
		}
		else if (found_digit)
		{
			/* stop when non-digit is found after number has started */
			break;
		}
		s++;
	}

	return (result * sign);
}

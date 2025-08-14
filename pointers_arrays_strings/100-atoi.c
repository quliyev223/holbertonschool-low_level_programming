#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value, or 0 if no numbers
 */
int _atoi(char *s)
{
    int sign = 1, result = 0, found_digit = 0;

    while (*s)
    {
        if (*s == '-')
        {
            if (!found_digit)
                sign = -sign;
        }
        else if (*s == '+')
        {
            /* do nothing for '+' before number */
        }
        else if (*s >= '0' && *s <= '9')
        {
            found_digit = 1;
            result = result * 10 + (*s - '0');
        }
        else if (found_digit)
            break; /* stop at first non-digit after number */
        s++;
    }

    return sign * result;
}	

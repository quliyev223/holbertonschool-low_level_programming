#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
 *
 * Description: This function prints the characters of the string
 * pointed to by s in reverse order, then prints a new line.
 */
void print_rev(char *s)
{
    int i = 0;

    /* Find the length of the string */
    while (s[i] != '\0')
        i++;

    /* Print the string in reverse */
    while (i > 0)
    {
        i--;
        _putchar(s[i]);
    }
}

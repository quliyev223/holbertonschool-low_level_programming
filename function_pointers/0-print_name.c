#include "function_pointers.h"
#include <stdlib.h>

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


/**
 * print_name - calls a function to print a name
 * @name: the name to be printed
 * @f: pointer to a function that takes a string and returns nothing
 *
 * Description: This function checks if the given string 
 * and function pointer are not NULL. If they are valid,
 * it calls the function pointed to by @f, passing @nmae as its argument.
 * This allows priinting the name in different styles depending
 * on the function passed.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
#endif

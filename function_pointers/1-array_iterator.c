#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iteratior - executes a function on each element of an array
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @action: pointer to the function to apply to each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	int i;


	if (action == NULL || array == NULL)
		return;


	for (i = 0; i < size; i++)
		action(array[i]);
}

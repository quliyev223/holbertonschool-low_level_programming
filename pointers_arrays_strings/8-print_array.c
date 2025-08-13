#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integeres
 * @a: pointer to the array of integers
 * @n: number of elements to print
 *
 * Description: This function prints elements of an integer array
 * separated by a comma and a space, in the same order as they are
 * stored in the array. Ends with a new line.
 */
void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1) /* Add comma and space except for the last element */
		{
			printf(", ");
		}
	}
	printf("\n"); /* Print new line at the end */
}

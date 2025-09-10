#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dislistint_t list
 * @h: pointer to the heaf of the doubly linked list
 *
 * Description: traverses the list tarting from the head node,
 * prints each node's integer value on a new line,
 * and counts the total number of nodes.
 *
 * Return: the numbers of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

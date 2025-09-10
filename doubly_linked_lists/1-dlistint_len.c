#include "lists.h"

/**
 * dlistint_len - Counts the number of elemens in doubly linked list
 * @h: Pointer to the first node in the list
 *
 * Description: This function walks through the list starting from
 * the head node, counting each node it encounters until it reaches
 * the end of the list.
 * It returns the count of nodes found
 *
 * Return: The total number of nodes (elements) in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

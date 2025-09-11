#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t limked list
 * @head: pointer to the head of the doubly linked linked list
 * @index: index of the node to return (starting at 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL);
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}

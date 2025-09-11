#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a doubly lnked list
 * @head: pointer to the head of the list
 *
 * Description: Iterates through the entire doubly linked list,
 * adds up all the integer values stored in each node,
 * and returns the total sum. If the list is empty, returns 0.
 *
 * Return: the sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

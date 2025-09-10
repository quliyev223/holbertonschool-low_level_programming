#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t linnked list
 * @head: Pointer to the head of the list
 *
 * Description: Iterates through each node and frees memory
 * for both string and the node itelf
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

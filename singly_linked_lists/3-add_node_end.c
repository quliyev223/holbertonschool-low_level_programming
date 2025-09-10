#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at he end of a list_t list
 * @head: pointer to pointer to the first element of the list
 * @str: string to duplicate and put inside the new node
 * 
 * Description: Creates a new list_t node with the duplicated string
 * and appends it to the end of the list. If the list is empty, the
 * new node becomes the first element.
 * 
 * Return:
 * The address of the new element, or NULL if memory allocation
 * or string duplication fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;


	temp->next = new_node;
	return (new_node);
}

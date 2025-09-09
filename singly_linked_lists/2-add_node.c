#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be dublicated and stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	if (str == NULL)
		return (NULL);


	new_node = malloc(sizeof(list_t));
	
	
	if  (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->str = dup_str;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

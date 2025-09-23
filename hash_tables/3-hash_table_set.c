#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: THe hash table to add or update the key/value pair in
 * @key: The key to store. Must not be an empty string
 * @value: The value associated with the key. Must be duplicated
 *
 * Return: 1 on success, 0 on failure
 * Adds new node at the start if collision occurs.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	unsigned long int index;
	char *new_value;
	hash_node_t *head, *new_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	if (value == NULL)
		return (0);

	hash = hash_djb2(key);
	index = hash % ht->size;

	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(head->value);
			head->value = new_value;

			return (1);
		}
		head = head->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (strdup == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (strdup == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	
	return (1);
}

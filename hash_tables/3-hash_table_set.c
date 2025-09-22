#include "hash_tables.h"
#include <stdio.h>

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

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	if (value == NULL)
		return (0);

	hash = hash_djb2(key);
	index = hash % size

	head = array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			
		}
		head = head->next;
	}





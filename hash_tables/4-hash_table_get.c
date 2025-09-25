#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if the key could
 * not be foound or if an error occurs.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}

#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_create - Creates a new hash table of a given size.
 * @size: The size of the array (number of buckets).
 *
 * Return: Pointer to the newly created hash atble, or
 * NUL if memoory allocations fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	hash_node_t **array;
	unsigned long int i;


	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	for(i = 0; i < size; i++)
	array[i] = NULL;

	hashtable->size = size;
	hashtable->array = array;

	return (hashtable);
}


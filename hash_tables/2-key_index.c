#include "hash_tables.h"

/**
 * key_index - Gives the index at which a key/value
 * pair should be stored in a hash table array.
 * @key: The key for which the index is to be found.
 * @size: The size of the array of the hash table.
 *
 * Description: This function uses the djb2 hasing algorithm
 * to generate a hash from the given key, then
 * calculates the index in the array using modulo.
 *
 * Return: The computed index in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

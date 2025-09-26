#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table to print
 *
 * Description: Prints all key/value pairs in the hash table
 * in the order they appear in the array and linked lists.
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int first = 1;			/* Flag to track if this is the first pair printed */

	if (ht == NULL)
		return;

	printf("{");
	
	for (i = 0; i < ht->size - 1; i++)	/* Through each index in the array */
	{
		head = ht->array[i];		/* Traverse the linked list at this index */
		while (head != NULL)
		{
			if (first == 0)		/* If not the first pair, print a comma and space */
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		first = 0;
		head = head->next;
		}
	}
	printf("}\n");
}

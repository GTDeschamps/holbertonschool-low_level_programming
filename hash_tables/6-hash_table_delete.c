#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_delete - Entry point
 *@ht: pointer to table
 *Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}

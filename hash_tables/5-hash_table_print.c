#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_print - Entry point
 *@ht: pointer to table
 *Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!first_pair)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		first_pair = 0;
		node = node->next;
		}
	}
	printf("}\n");
}

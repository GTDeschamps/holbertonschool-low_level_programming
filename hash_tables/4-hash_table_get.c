#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_get - Entry point
 *@ht: pointer to table
 *@key: character
 *Return: character
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		return (temp->value);

		temp = temp->next;
		}

	return (NULL);
}

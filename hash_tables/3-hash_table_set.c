#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_set - Entry point
 *@ht: pointer to table
 *@key: character
 *@value:  value of index
 *Return: integer
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *node;


	if ((ht == NULL) | (key == NULL) | (value == NULL))
	{
		return (0);
	}

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
			node->value = strdup(value);
			return (1);
			}
			node = node->next;
		}
		node = ht->array[index];
		new_node->next = node;
		ht->array[index] = new_node;
	}
	return (1);
}

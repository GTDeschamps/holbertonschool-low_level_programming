#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create - Entry point
 *@size: size of table
 *Return: Hash Table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}

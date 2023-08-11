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
	if (ht == NULL)
		return;

	free(ht);
}

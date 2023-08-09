#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 *key_index - Entry point
 *@key: character
 *@size: size of index
 *Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}

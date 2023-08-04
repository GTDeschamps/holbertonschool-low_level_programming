#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Entry point
 * @n: integer
 * @index: integer
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}

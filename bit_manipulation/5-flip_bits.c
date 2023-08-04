#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Entry point
 * @n: integer
 * @m: integer
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
		}

	return (count);
}

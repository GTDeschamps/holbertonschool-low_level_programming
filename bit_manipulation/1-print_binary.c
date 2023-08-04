#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Entry point
 * @n: integer
 * Return: unsigned int
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		}
	printf("%lu", n & 1);
}

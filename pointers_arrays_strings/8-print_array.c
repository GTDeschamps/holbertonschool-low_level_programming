#include "main.h"
#include <stdio.h>
/**
 *print_array - Entry point
 *@a: array
 *@n: integer
 * Return: void
 */
void print_array(int *a, int n)
{

	for (n = 0; n < 5 ; n++)
	{
		printf("[%d]", a[n]);
	}
}

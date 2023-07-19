#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index -Entry point
 * @array: array of element
 * @size: number of element
 * @cmp: pointer to function
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (i == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

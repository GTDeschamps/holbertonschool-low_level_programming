#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - Entry point
 *@min: minimum
 *@max: maximum
 *Return: array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);

	j = (max - min + 1);
	array = malloc(j * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		array[i] = (min + i);
	}
	return (array);
}

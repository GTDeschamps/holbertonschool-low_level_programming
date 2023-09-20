#include "search_algos.h"
#include <stdio.h>
/**
 *linear_search - programm to linear search in array
 *@array: base for search
 *@size: size of array
 *@value: hte value we search
 *Return: value of search
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}

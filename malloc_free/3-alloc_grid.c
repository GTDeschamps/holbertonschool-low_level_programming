#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - Entry point
 *@width: line of array
 *@height: collum of array
 *Return: pointer of 2 dimentionnal array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int*) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
			if (array[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(array[j]);
				}
				free(array);
				return (NULL);
			}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

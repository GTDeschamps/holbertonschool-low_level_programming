#include "search_algos.h"
#include <stdio.h>
/**
 *binary_search - programm to linear search in array
 *@array: base for search
 *@size: size of array
 *@value: hte value we search
 *Return: value of search
 */

int binary_search(int *array, size_t size, int value)
{

	int mid;
	int i;
	int left = 0;
	int right = size -1;

		if (size == 0|| array ==NULL)
		return (-1);



	while (left <= right)
	{
		printf("Searching in array: ");

		mid = left + (right -left)/2;

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			left = mid +1;
		else if (array[mid] > value)
			right = mid -1;
		else
			return (mid);
	}
	return (-1);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *calloc - Entry point
 *@nmemb: number of memory
 *@size: size allocated
 *Return: function alloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalsize;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalsize = (nmemb * size);
	ptr = malloc(totalsize);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, totalsize);
	return (ptr);
}

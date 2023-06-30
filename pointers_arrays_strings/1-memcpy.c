#include "main.h"
/**
 * _memcpy - Entry point
 * @dest:memory  destination
 * @src: memory source
 * @n: value
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

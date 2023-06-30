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
	int i = n;

	while (i >= 0)
	{
		*dest = *src;
		dest++;
		src++;
		i--;
	}
	return (dest);
}

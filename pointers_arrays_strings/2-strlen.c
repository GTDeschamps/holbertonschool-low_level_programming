#include "main.h"
/**
 *_strlen - Entry point
 *@s : string
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

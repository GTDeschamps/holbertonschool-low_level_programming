#include "main.h"
#include <stddef.h>
/**
 *_strchr - Entry point
 *@c: character
 *@s: string
 *Return: C or NULL
 */

char *_strchr(char *s, char c)
{
	while (s != NULL)
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (*s != c)
	{
		return (s);
	}
	return (NULL);
}

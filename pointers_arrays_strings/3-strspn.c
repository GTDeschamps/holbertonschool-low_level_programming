#include "main.h"
/**
 *_strspn - Entry point
 *@s: string
 *@accept: return character
 *Return: count of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match = 1;

	while (*s && match)
	{
		char *a = accept;

		match = 0;

		while (*a)
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
			a++;
		}
		if (match)
		{
			count++;
			s++;
		}
	}
	return (count);
}

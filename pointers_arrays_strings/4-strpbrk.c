#include"main.h"
/**
 *_strpbrk -Entry point
 *@s: string
 *@accept: chararcter accepted
 *Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}

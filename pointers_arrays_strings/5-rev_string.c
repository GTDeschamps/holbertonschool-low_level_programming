#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - Entry point
 *@s : char
 * Return: void
 */

void rev_string(char *s)
{
	int tmp, i, end;

	end = _strlen(s) - 1;

	for (i = 0; i < (_strlen(s) / 2); i++)
	{
		tmp = s[i];
		s[i] = s[end];
		s[end] = tmp;
		end--;
	}
}

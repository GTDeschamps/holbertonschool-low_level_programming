#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat: Entry point
 *@s1: string 1
 *@s2: string 2
 *
 *Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}

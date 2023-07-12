#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - Entry point
 *@s1: first string
 *@s2: second string
 *@n: number of bytes of s2
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	size_t len1 = 0, len2 = 0;
	unsigned int count = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + count) != '\0')
	{
		len1++;
		count++;
	}
	count = 0;
	while (*(s2 + count) || (count <= n))
	{
		len2++;
		count++;
	}
	concat = malloc(sizeof(char) * (len1 + len2));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j - 1] = '\0';

	return (concat);
}

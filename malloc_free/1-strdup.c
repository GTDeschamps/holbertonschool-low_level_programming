#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - entry point
 *@str: string to copy
 *
 *Return: string duplicated
 */

char *_strdup(char *str)
{
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(char) * (strlen(str) + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, str);

	return (new);
}

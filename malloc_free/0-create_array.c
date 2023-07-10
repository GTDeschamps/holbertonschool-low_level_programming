#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Entry point
 *@size: variable for array
 *@c: initialisation character
 *
 *Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));
	if (s == 0 || NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

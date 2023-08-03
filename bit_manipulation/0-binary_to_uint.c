#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Entry point
 * @b: binary character
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;
	char c;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		c = b[i];
		if (c == '0' || c == '1')
		{
			n = n << 1;
			n = n | (c - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}

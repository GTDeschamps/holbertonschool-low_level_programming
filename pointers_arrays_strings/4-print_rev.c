#include "main.h"
/**
 *print_rev - Entry point
 *@s : char
 *Return:void
 */

void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	str = str - 1;
	while (str >= '\0')
	{
		_putchar(s[str]);
		str--;
	}
	_putchar ('\n');
}

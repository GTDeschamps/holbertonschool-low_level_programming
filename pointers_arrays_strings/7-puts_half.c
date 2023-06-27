#include "main.h"
#include "2-strlen.c"
/**
 *puts_half -Entry point
 *@str: character
 *
 * Return: void
 */
void puts_half(char *str)
{
	int s;
	int lng = _strlen(str) - 1;

	if (lng % 2 == 1)
	{
		lng = lng - 1;
	}
	for (s = 0; s <= lng + 1; s++)
	{
		if (s > lng / 2)
		{
			_putchar(str[s]);
		}
	}
	_putchar ('\n');
}

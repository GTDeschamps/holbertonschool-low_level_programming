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
	int lng = _strlen(str);
	int half = 0;

	if (lng % 2 == 0)
	{
		half = lng / 2;
		while (lng > half)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = (lng + 1) / 2;
		while (lng > half)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar ('\n');
}

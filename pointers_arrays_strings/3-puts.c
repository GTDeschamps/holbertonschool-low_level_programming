#include "main.h"
#include "2-strlen.c"
/**
 *_puts -Entry point
 *@str : string
 * Return: new line
 */
void _puts(char *str)
{
	int s;

	for (s = 0; s <= _strlen(str) - 1; s++)
	{
		_putchar(str[s]);
	}
	_putchar ('\n');
}

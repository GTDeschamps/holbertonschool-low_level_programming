#include"main.h"
/**
 * print_most_numbers - Entry point
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int NB = 0;
	
	for (NB = '0'; NB <= '9'; NB++)
	{
		if ((NB != '2') && (NB != '4'))
		{
			_putchar (NB);
		}
	}
	_putchar ('\n');
}

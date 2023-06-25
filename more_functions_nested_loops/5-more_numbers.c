#include"main.h"
/**
 * more_numbers - Entry point
 *
 *
 * Return:void
 */
void more_numbers(void)
{
	int nb = 0;
	int increment = 0;
	for (nb = 0; nb <= 14; nb++)
	{
		do {
			_putchar (nb);
			_putchar ('\n');
		} while (increment <= 10);
	}
	_putchar ('\n');
}

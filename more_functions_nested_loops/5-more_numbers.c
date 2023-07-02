#include"main.h"
/**
 * more_numbers - Entry point
 *
 * Return:void
 */
void more_numbers(void)
{
	int inc = 0;

	while (inc < 10)
	{
		int nb = 0;

		while (nb <= 14)
		if (nb >= 10)
		{
			_putchar('0' + nb / 10);
			nb++;
		}
		inc++;
	}
	_putchar ('\n');
}

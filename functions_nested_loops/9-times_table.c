#include "main.h"
/**
 * times_table - Check the code
 *
 * Return: void
 */

void times_table(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x * y > 9)
				_putchar(x * y / 10 + '0');
			else if (x > 0)
				_putchar(' ');
			_putchar(x * y % 10 + '0');
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

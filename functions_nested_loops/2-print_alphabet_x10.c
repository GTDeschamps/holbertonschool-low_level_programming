#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *print the alphabet 10 time in lowercase
 *Return: void
 */

void print_alphabet_x10(void)
{
	int alpha;
	int i = 0;

	do {
		i++;
		for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
		{
			_putchar(alpha);
		}
		_putchar ('\n');
	} while (i < 10);
}

#include "main.h"
/**
 * print_last_digit - Entry point
 *@n: number
 *Return: alway 0
 */

int print_last_digit(int n)
{
	_putchar ('0' + (n % 10));
	if (n < 0)
	{
		n = (n * (-1));
	}
	return (n % 10);
}

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: number of argument
 * Return: integer
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	int num;
	va_list args;

	if (n == 0)
	return (0);

	sum = (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}

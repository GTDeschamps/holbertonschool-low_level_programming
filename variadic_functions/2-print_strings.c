#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: string between numbers
 * @n:number of integers
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, const char *);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}
		va_end(args);
		printf("\n");
}

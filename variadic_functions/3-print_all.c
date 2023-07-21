#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* karac - char c
* @totale: va_list
* Return: char c
*/
void karac(va_list totale)
{
	char c = va_arg(totale, int);

	printf("%c", c);
}

/**
* karai - int i
*@totale: va_list
* Return: int i
*/
void karai(va_list totale)
{
	int i = va_arg(totale, int);

	printf("%d", i);
}

/**
* karaf - double f
* @totale: va_list
* Return: double f
*/
void karaf(va_list totale)
{
	double f = va_arg(totale, double);

	printf("%f", f);
}

/**
* karas - char *s
* @totale: va_list
* Return: char *s
*/
void karas(va_list totale)
{
char *s = va_arg(totale, char*);

printf("%s", (s == NULL) ? "(nil)" : s);
}

/**
* print_all - all
* @format: const
* Return: all
*/
void print_all(const char * const format, ...)
{
	value_t value[] = {
		{"c", karac},
		{"i", karai},
		{"f", karaf},
		{"s", karas},
		};

		va_list totale;
		int a = 0, b;
		char *separator = "";

		va_start(totale, format);

		while (format && format[a])
		{
			b = 0;
			while (b < 4)
			{
				if (format[a] == *(value[b].variable))
				{
					printf("%s", separator);
					value[b].func(totale);
					separator = ", ";
				}
				b++;
			}
			a++;
		}
		va_end(totale);
		printf("\n");
}



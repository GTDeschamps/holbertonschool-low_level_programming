#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - Entry point
 *@name: character
 *@f: function pointer
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

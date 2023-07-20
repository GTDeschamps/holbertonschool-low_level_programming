#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - ENtry point
 * @s: operator who passed argument
 * Return: result of the operation
*/

int (*get_op_func(char *s))(int, int)
{

 	op_t ops[] =
 	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i;

	if (s == NULL)
	{
		return (NULL);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Entry point
 * @a: first integer
 * @b: second integer
 * Return: sum of a+b
*/
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

/**
 * op_sub - Entry point
 * @a: first integer
 * @b: second integer
 * Return: difference of a-b
*/
int op_sub(int a, int b)
{
	int sub;

	sub = (a - b);
	return (sub);
}

/**
 * op_mul - Entry point
 * @a: first integer
 * @b: second integer
 * Return: product of a*b
*/

int op_mul(int a, int b)
{
	int mul;

	mul = (a * b);
	return (mul);
}

/**
 * op_div - Entry point
 * @a: first integer
 * @b: second integer
 * Return: result of a/b
*/

int op_div(int a, int b)
{
	int divise;

	divise = (a / b);
	return (divise);
}

/**
 * op_mod - Entry point
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division
*/

int op_mod(int a, int b)
{
	int modulo;

	modulo = (a % b);
	return (modulo);
}

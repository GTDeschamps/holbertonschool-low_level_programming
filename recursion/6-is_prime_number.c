#include"main.h"
/**
 *is_prime_number - Entry point
 *is_divisible - Recursive function
 *@divisor: ask number
 *@n: prime number
 *Return: integer
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	{
		return (is_divisible(n, divisor - 1));
	}
}
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	{
		return (is_divisible(n, n - 1));
	}
}

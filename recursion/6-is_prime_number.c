#include"main.h"
/**
 *is_prime_number - Entry point
 *@n: ask number
 *Return: integer
 */

int divisor(int i)
{
	if (i == 1)
		return (1);
}

int is_prime_number(int n)
{
	if (n % divisor == 0 || n <= 1 )
	{
		return (0);
	}
	return is_prime_number(n, n - 1);
}

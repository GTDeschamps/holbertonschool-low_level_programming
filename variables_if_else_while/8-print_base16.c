#include <stdio.h>
/**
 *main - Entry point
 *print all the numbers of base 16 in lowercase
 *Return: always 0
 */

int main(void)
{
	int alpha;
	int dgt;

	for (dgt = '0'; dgt <= '9'; dgt = dgt + 1)
	{
		putchar (dgt);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha = alpha + 1)
	{
		putchar (alpha);
	}
	{
		putchar ('\n');
	}
	return (0);
}

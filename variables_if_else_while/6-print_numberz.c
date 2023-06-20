#include<stdio.h>
/**
 *main - Entry point
 *print single digit from 0 to 9
 *Return: always 0
 */

int main(void)
{
	int dgt;

	for (dgt = '0'; dgt <= '9'; dgt = dgt + 1)
	{
		putchar (dgt);
	}
	{
		putchar('\n');
	}
	return (0);
}

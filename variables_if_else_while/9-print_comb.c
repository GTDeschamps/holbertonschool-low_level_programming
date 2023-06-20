#include<stdio.h>
/**
 *main - Entry point
 *print all possible combinations of single digit numbers
 *must be separated by , follow by a space
 *Return: always 0
 */

int main(void)
{
	int dgt;

	for (dgt = 0; dgt <= 9; dgt = dgt + 1)
	{
		putchar (dgt);
	}
	if (dgt < 9)
	{
		putchar (',');
		putchar (' ');
	}
	if (dgt == 9)
	{
		putchar ('\n');
	}
	return (0);
}
